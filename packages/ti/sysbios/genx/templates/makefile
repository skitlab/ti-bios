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
    this.buildDirs = this.buildDirs.replace(/\\/g, '/');
    var dirList = this.buildDirs.split("  ");		
%%}
#
#  ======== makefile ========
#
#  This "top level" make file can be used with GNU's make utility
#  to (re)build the BIOS examples
#
#  To (re)build from scratch type the following:
#	gmake clean
#	gmake
#


all:
%    for (var i=0; i< dirList.length; i++) {
	@echo making `dirList[i]` ...
	@$(MAKE) -C `dirList[i]` all
%    }

clean::
%    for (var i=0; i< dirList.length; i++) {
	@echo "cleaning `dirList[i]` ..."
	@$(MAKE) -C `dirList[i]` clean
%    }

#
#  @(#) ti.sysbios.genx; 2, 0, 0, 0,555; 11-7-2012 12:41:58; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

#

