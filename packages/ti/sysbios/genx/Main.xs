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
 *  ======== run ========
 */
function run( cmdr, args )
{
    var inst = this.$private;
    inst.self = this;

    for (p in inst.self)
    {
        inst[p] = inst.self[p];
    }

    inst.cmdr = cmdr;
    inst.args = args;

    if (args.length) {
        inst.output = args[0];
    }

    inst.cmdr.verbose(inst.verboseFlag);
          
    if (!inst.output) {
        inst.cmdr.error("missing required parameter 'output'");
    }

    var File = xdc.module('xdc.services.io.File');
    inst.output = File.getCanonicalPath(inst.output);

    if (xdc.findFile(inst.output)) {
        inst.cmdr.error(inst.output
            + " directory already exists. Remove directory. Backup"
            + " changes made in directory if required.");
    }

    var mkPkg = xdc.module('xdc.tools.mkpkg.Main');
    var dir = "ti/sysbios/genx/templates";
    mkPkg.mkpkg (
                    dir,
                    inst.output,
                    inst.target,
                    inst.profile,
                    inst.platform
                );

    /* Deprecation Notice */
    print(" ");
    print("genx is being deprecated, it will not be included in future releases");
    print("Please see the release notes for how to build using a makefile");

}
/*
 *  @(#) ti.sysbios.genx; 2, 0, 0, 0,555; 11-7-2012 12:41:56; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

