# 
#  Copyright (c) 2012, Texas Instruments Incorporated
#  All rights reserved.
# 
#  Redistribution and use in source and binary forms, with or without
#  modification, are permitted provided that the following conditions
#  are met:
# 
#  *  Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.
# 
#  *  Redistributions in binary form must reproduce the above copyright
#     notice, this list of conditions and the following disclaimer in the
#     documentation and/or other materials provided with the distribution.
# 
#  *  Neither the name of Texas Instruments Incorporated nor the names of
#     its contributors may be used to endorse or promote products derived
#     from this software without specific prior written permission.
# 
#  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
#  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
#  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
#  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
#  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
#  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
#  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
#  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
#  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
#  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
#  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# 
%%{
    xdcroot = environment["xdc.root"];
    xdcroot = xdcroot.replace(/\\/g, '/');
%%}
# This make file is used by each example's makefile.
# The purpose of this file is to define all global variables, used by each
# makefile, in one place to eliminate having to edit multiple files for the
# same desired change. 
# Because this file is included by makefiles, use forward slashes
# ("/") only.
XDCROOT ?= `xdcroot`
XS = $(XDCROOT)/xs
%    var os = java.lang.System.getProperty("os.name").toLowerCase();
%    if (os.match("windows")) {
REMOVE = $(XDCROOT)/bin/rm.exe -rf
CAT = $(XDCROOT)/bin/cat.exe
%    }
%    else {
REMOVE = rm -rf
CAT = cat
%    }


# TARGET SPECIFIC DEFAULTS
%%{
    for (var i=0; i< this.build.targets.length; i++) {
        var targ = this.build.targets[i].$orig;
        if ("setPath" in targ) {
            targ.setPath();
        }
        var name = targ.suffix;
        var rootDir = targ.rootDir;
        var Utils = xdc.module('xdc.bld.Utils');

        if (targ.$name.match("microsoft")) {
            var clCmd = Utils.expandString(targ.cc.cmd, targ);
            var ccOpts = (targ.profiles[this.profile].compileOpts.copts || "") 
		+ " " + (targ.profiles[this.profile].compileOpts.defs || "");
            var lnkCmd = Utils.expandString(targ.lnk.cmd, targ);
            var lnkOpts = "-nodefaultlib "
                          + (this.profile == "debug" ? "-debug " : "");
            if (targ.$name.match("VC98")) {
                var rtsLib = rootDir + "/vc98/lib msvcrt.lib kernel32.lib";
            }
            else {
                var rtsLib = rootDir + "/" + targ.$private._compilerDir
                             + "/lib msvcrt.lib kernel32.lib";
            }
        }
        else {
	    var clCmdOpts = String(targ.cc.cmd);
	    clCmdOpts = clCmdOpts.split(" ");
	    var clCmd = rootDir + "/bin/" + clCmdOpts[0];
	    clCmd = '"' + clCmd + '" ' + clCmdOpts[1] +  " " + String(targ.cc.opts);
	    if ((this.profile == "whole_program") ||
	        (this.profile == "whole_program_debug")) {
		var profile = "release";
	    }
	    else {
	        var profile = this.profile;
	    }

            var ccOpts = (targ.profiles[profile].compileOpts.copts || "") 
		+ " " + (targ.profiles[profile].compileOpts.defs || "");

            var lnkCmd = '"' + rootDir + "/bin/" + targ.lnk.cmd + '"';
            var lnkOpts = "";
            if ("linkLib" in targ) {
                var rtsLib =  '"' + rootDir + "/lib/" + targ.linkLib + '"';
            }
            else {
                var index = targ.lnkOpts.suffix.search("rts");
                if (index != -1) {
                    var rtsLib = '"' + rootDir + "/lib/"
                                 + targ.lnkOpts.suffix.substring(index) + '"';
                }
            }
        }
%%}

# `targ` defaults
#location of compiler
CL_`name` = `clCmd`

# Additional compiler options ito be used by all examples
CL_OPTS_`name` = `ccOpts`

#Location of linker
LNK_`name` = `lnkCmd`

#Additional linker.cmd options to be used by all examples
LNK_OPTS_`name` = `lnkOpts`

#Location of real time support library
RTS_LIB_`name` = `rtsLib`
%
%    }

#
#  @(#) ti.sysbios.genx; 2, 0, 0, 0,555; 11-7-2012 12:41:56; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

#

