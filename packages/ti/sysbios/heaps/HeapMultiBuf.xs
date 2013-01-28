/* 
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * */
/*
 *  ======== HeapMultiBuf.xs ========
 *
 */

var HeapBuf = null;
var HeapMultiBuf = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
   HeapMultiBuf = this;
   HeapBuf = xdc.useModule("ti.sysbios.heaps.HeapBuf");
}

/*
 *  ======== instance$static$init ========
 *  Statically initializes a HeapMultiBuf. The procedure for static 
 *  initialization differs from dynamic because here we can merge buffers with
 *  identical properties before they are allocated.
 *
 *  Static creation does not allow the user to provide the buffers to be 
 *  managed because of complications with merging buffers statically. Matching
 *  buffers would need to be set aside and merged at runtime.
 */
function instance$static$init(obj, params)
{
    var Memory = xdc.module('xdc.runtime.Memory');
    
    /* 
     * Verify params and calc bufSizes. We need to round the block sizes
     * to match the alignment now so that we can merge any buffers with
     * matching block sizes and alignments. 
     * The second parameter retrieves the minimum alignment for this target.
     */
    checkParams.call(this, params, Memory.getMaxDefaultTypeAlignMeta());
        
    /* 
     * Creating the heapBufs
     * If any of the bufs have the same blockSize and align, then
     * they need to be merged. If any bufs have the same blockSize, but
     * different alignments, then separate heapBufs get created.
     * 
     * Merging is done by first merging the HeapBuf params structures. So the
     * actual number of buffers may be less than the number specified by the
     * user.
     *
     * Initially, the new HeapBufs are placed in the arrays in the order
     * they are created. Once they are all created they are sorted by size.
     */
       
    /* Copy HeapBuf parameter structures into new modifiable array */
    var mergedParams = new Array();
    for (var i = 0; i < params.bufParams.length; i++) {
        mergedParams[i] = params.bufParams[i];
    }
    
    /* 
     * Find any HeapBuf parameter structures with matching blockSize and 
     * alignment, merge them, and remove the extra parameter structure
     * from the 'mergedParams' array. Note that mergedParams.length (the 
     * condition on the for loop) will change as parameter structures are
     * merged.
     */
    for (var i = 0; i < mergedParams.length; i++) {
        var heapBufParams = mergedParams[i];
        
        /* 
         * Look for other buffers with the same blockSize and align 
         * as this one and merge them.
         */
        var match = i + 1;
        /* While there are other prms that match this one... */
        while ((match = findMatch(match, heapBufParams.blockSize, 
                                  heapBufParams.align, mergedParams)) != -1) {
            heapBufParams.numBlocks += mergedParams[match].numBlocks;
            heapBufParams.bufSize   += mergedParams[match].bufSize;
            mergedParams.splice(match, 1); /* Remove the matching buffer */
            /* The indexes have been shifted, so we don't need match++ */
        }
    } 
    
    /* Allocate the arrays, now that we know the number of HeapBufs */
    obj.bufsBySize.length = mergedParams.length;
    obj.bufsByAddr.length = mergedParams.length;
 
    // TODO do not use null
    Memory.staticPlace(obj.bufsBySize, 0, null);
    Memory.staticPlace(obj.bufsByAddr, 0, null);
    
    /* Create the HeapBufs */
    for (var i = 0; i < mergedParams.length; i++) {    
        /* Add the new HeapBuf to bufsBySize */
        var heapBuf = HeapBuf.create(mergedParams[i]);
        obj.bufsBySize[i] = heapBuf;
        
        /* The HeapBufs will be added to bufsByAddr at runtime. */
    }
    
    /* 
     * numBufs may be less than specified by the user if any were merged.
     * These properties are always the same for static creates, but may
     * be different for dynamic creates, since there may be more buffers
     * than HeapBufs for dynamic creates.
     */
    obj.numBufs = mergedParams.length;
    obj.numHeapBufs = mergedParams.length;
    
    obj.blockBorrow = params.blockBorrow;
    
    /* 
     * Now that the heapBufs are created and in place, sort them. 
     * Can't use built in array sort because obj.bufsBySize isn't
     * recognized as an array.
     */
    sortBySize(obj.bufsBySize);
}

/*
 *  ======== checkParams ========
 *  Confirms the following:
 *   - numBufs > 0, warns if numBufs == 1
 *   - bufParams.length == params.numBufs
 *   - Align is power of 2
 *   - Block size agrees with alignment
 *   - numBlocks and blockSize are provided
 *  Gives minAlign if requested align = 0.
 */
function checkParams(params, minAlign)
{
    /* numBufs > 0 */
    if (params.numBufs <= 0) {
        HeapMultiBuf.$logFatal("numBufs cannot be 0.", this, "numBufs");
    }
    
    var bufParams = params.bufParams;
    
    /* numBufs = number of bufParams */
    if (bufParams.length != params.numBufs) {
        HeapMultiBuf.$logFatal("numBufs does not match the number of buffer"
                               + "configurations.", this, "numBufs");
    }
    
    /* Warn if numBufs is only 1 */
    if (params.numBufs == 1) {
        HeapMultiBuf.$logWarning("HeapMultiBuf is being configured with only"
                                 + "one buffer.", this, "numBufs");
    }
    
    /* For each buffer to be created... */
    for (var i = 0; i < bufParams.length; i++)
    {
        var prms = bufParams[i];
        
        /* section name should not be undefined */
        if (prms.sectionName == undefined) {
            prms.sectionName = null;
        }
    
        /* numBlocks must be specified by the user. */
        if (prms.numBlocks == 0) {
            HeapBuf.$logFatal("numBlocks must be specified for each buffer.",
                              this, "bufParams");
        }

        /* blockSize must be specified by the user. */
        if (prms.blockSize == 0) {
            HeapBuf.$logFatal("blockSize must be specified for each buffer.",
                              this, "bufParams");
        }
    
        /* If requested align = 0, give minimum alignment */
        if (prms.align == 0) {
            prms.align = minAlign; 
        }
        
        /* align must be power of 2 */
        if ((~(prms.align-1) & prms.align) != prms.align) {
            HeapMultiBuf.$logFatal("The requested alignment (" + prms.align
                                   + ") is not a power of 2.", this,
                                   "bufParams");
        }
        
        /* Block size must be multiple of align */
        if ((prms.blockSize % prms.align) != 0) {
            var oldBlockSize = prms.blockSize;
            prms.blockSize = 
                (prms.blockSize + (prms.align - 1)) & ~(prms.align - 1);
            HeapMultiBuf.$logWarning("Requested blockSize (" + oldBlockSize
                                     + ") is not large enough to satisfy "
                                     + "alignment (" + prms.align + "). "
                                     + "blockSize is now " + prms.blockSize
                                     + ".", this, "bufParams");
        }

        /* Set the bufSize. This is not necessary (HeapBuf ignores it). */
        prms.bufSize = prms.numBlocks * prms.blockSize;
        prms.buf = 0;
    }
}

/*
 *  ======== sortBySize ========
 *  Sort the HeapBufs by block size.
 */
function sortBySize(bufsBySize)
{
    for (var i = 0; i < bufsBySize.length; i++) {
        var minIndex = i;
        var minValue = bufsBySize[i].blockSize;
        /* Find the smallest block size */
        for (var j = i + 1; j < bufsBySize.length; j++) {
            if (bufsBySize[j].blockSize < minValue) {
                minIndex = j;
                minValue = bufsBySize[j].blockSize;
            }
        }
        /* Swap the HeapBufs. */
        if (minIndex != i) {
            var temp = bufsBySize[i];
            bufsBySize[i] = bufsBySize[minIndex];
            bufsBySize[minIndex] = temp;
        }
    }
}

/*
 *  ======== findMatch =========
 *  Looks through bufParams to find any buffers defined with
 *  the specified blockSize and align params. Begins searching
 *  at startIndex, and returns the index of the first match found,
 *  or -1 if none are found.
 */
function findMatch(startIndex, blockSize, align, prms)
{
    for (var i = startIndex; i < prms.length; i++) {
        if ((blockSize == prms[i].blockSize) &&
            (align == prms[i].align)) {
            return i;
        }
    }
    return -1;
}

/*
 *  ======== viewInitBasic ========
 *  Initialize the 'Basic' HeapBuf instance view.
 */
function viewInitBasic(view, obj)
{    
    view.label       = Program.getShortName(obj.$label);
    view.blockBorrow = obj.blockBorrow;
    view.numHeapBufs = obj.numHeapBufs;
}


/*
 *  ======== viewInitDetailed ========
 *  Initialize the 'Detailed' HeapBuf instance view.
 */
function viewInitDetailed(view, obj)
{    
    /* first get the Basic view */
    viewInitBasic(view, obj);

    try {
        var heapBufsArray = Program.fetchArray(obj.bufsBySize$fetchDesc,
            obj.bufsBySize, obj.numHeapBufs);
    }
    catch(e) {
        print("Error: attempt to fetch array of HeapBuf instances failed: "
            + e);
    }

    var currentHeapBuf = 0;
    var heapBufLabel = "";
    var heapBufStr = "";
    for (var i = 0; i < heapBufsArray.length; i++) {

        var currHeapBuf = heapBufsArray[i];

        try {
            var heapBufView = Program.scanHandleView(
                'ti.sysbios.heaps.HeapBuf', currHeapBuf, 'Basic');
        }
        catch (e) {
            print("Error: scan of HeapBuf handle failed: " + e.toString());
        }

        /* display some quick stats on this HeapBuf inst */
        view.HeapBufHandles.$add(heapBufView.statStr);
    }
}

/*
 *  @(#) ti.sysbios.heaps; 2, 0, 0, 0,580; 11-7-2012 12:42:15; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

