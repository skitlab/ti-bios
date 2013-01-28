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
/*!
 *   Generate SYS/BIOS examples
 *
 *   This command line tool generates SYS/BIOS examples. The only
 *   required argument is the output directory. This tool generates 
 *   examples for all targets and platforms specified in the config.bld
 *   file. 
 *
 *   A target and a platform are optional arguments and override
 *   those specified in config.bld.
 *
 *   This tool generates several examples each in their own sub-directory.
 *   It also generates a common sub-directory. Many of the examples depend
 *   on the common directory.
 */
metaonly module Main inherits xdc.tools.ICmd {

    override config String usage[] = [
        '[-v] [-t target] [-r profile] [-p platform] outputDir',
        '[--help]',
    ];

instance:

    //!Print informative messages during execution.
    @CommandOption('v')
    config Bool verboseFlag = false;

    //!Select target. Override Build.targets array in config.bld.
    @CommandOption('t')
    config String target = null;

    //!Select profile. Override default profile in config.bld script.
    @CommandOption('r')
    config String profile = "release";

    //!Select platform. Override platforms specified in config.bld.
    @CommandOption('p')
    config String platform = null;
}
/*
 *  @(#) ti.sysbios.genx; 2, 0, 0, 0,555; 11-7-2012 12:41:56; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

