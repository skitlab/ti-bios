/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */


function init() {
    /* Only process during "cfg" phase */
    if (xdc.om.$name != "cfg") {
        return;
    }

    switch (prog.build.target.name) {
        case "C28_large":
        case "C28_float":
            Program.stack = 0x2;
            Program.argSize = 8;

            Program.sectMap[".stack"] = "MSARAM";
            Program.sectMap[".ebss"] = "L03SARAM";
            Program.sectMap[".text"] = "L47SARAM";
            Program.sectMap[".const"] = "L47SARAM";
            Program.sectMap[".args"] = "L47SARAM";
            Program.sectMap[".cio"] = "L47SARAM";
            Program.sectMap[".reset"] = "L47SARAM";
            Program.sectMap[".switch"] = "L47SARAM";
            Program.sectMap[".econst"] = "L47SARAM";
            Program.sectMap[".xdc_noload"] = "SRAM";
            
            //Program.sectMap[".stack"] = "MSARAM";
            //Program.sectMap[".ebss"] = "LSARAM";
            //Program.sectMap[".text"] = "H0SARAM";
            //Program.sectMap[".const"] = "MSARAM";
            //Program.sectMap[".args"] = "LSARAM";
            //Program.sectMap[".cio"] = "SRAM";
            //Program.sectMap[".reset"] = "LSARAM";
            //Program.sectMap[".switch"] = "H0SARAM";
            //Program.sectMap[".econst"] = "LSARAM";
            //Program.sectMap["xdc_noload"] = "SRAM";
            break;
        default:
            break;
    }
}

/*
 *  @(#) ti.sysbios.benchmarks; 1, 1, 0, 0,11; 9-18-2012 20:56:18; /db/vtree/library/trees/avalabench/avalabench-b16x/src/ xlibrary

 */

