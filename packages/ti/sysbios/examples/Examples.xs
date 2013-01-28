var filterGeneric = [
    {deviceFamily:"C6000", deviceId: "~.*(TMS320C670|TMS320C671|TMS320C672|DSK6713|GenericC62xxDevice|GenericC64xxDevice|GenericC67xxDevice|GenericC67xPlusDevice|C641).*", toolChain:"TI"},
    {deviceFamily:"EVE", toolChain:"TI"},
    {deviceFamily:"ARM", deviceId: "~.*(LM3|F28M3|LM4|RM4|TMS570LS|ARM7|ARM11|Generic|EVMDMRX45X|CC2538|TMS470M|DM350|DM357|DM368).*", toolChain:"TI"},
];

/*
 * Filter on ~F28M3 since filtering for TMS320C/F prefixes isn't 
 * working.  We need to get a precise deviceId list from Toronto so we can
 * determine how to make these filters more reliable and sustainable.
 */
var filterC28 = [
    {deviceFamily:"C2000", deviceId:"~.*(F28M3|Generic|G00883).*", toolChain:"TI"},
];

var filterMSP430 = [
    {deviceId:"MSP430F5.*", toolChain:"TI"},
    {deviceId:"MSP430F6.*", toolChain:"TI"},
    {deviceId:"MSP430BT.*", toolChain:"TI"},
    {deviceId:"CC430.*", toolChain:"TI"},
];

var filterStellaris = [
    {deviceFamily:"ARM", deviceId:".*LM3.*", toolChain:"TI"},
    {deviceFamily:"ARM", deviceId:".*LM4.*", toolChain:"TI"},
];

var filterConcertoM3 = [
    {deviceFamily:"ARM", deviceId:".*F28M3.*", toolChain:"TI"},
];

var filterConcertoC28 = [
    {deviceFamily:"C2000", deviceId:".*F28M3.*", toolChain:"TI"},
];


/*
 * cmdFile is used below since CCS/project wizard does not allow the
 * use of linkerCommandFile like we'd like.  The workaround is to provide
 * the .cmd file in the fileList[] array and set linkerCommandFile to "".
 */
var options = [
    {
        variant: "generic",
        filter: filterGeneric,
        cfgPrefix: "",
        linkerCommandFile: ""
    },
    {
        variant: "c28",
        filter: filterC28,
        cfgPrefix: "c28/",
        platform: "ti.platforms.tms320x28:$DeviceId$",
        linkerCommandFile: "ti/platforms/tms320x28/include/$DeviceId$.cmd",
    },
    {
        variant: "msp430",
        filter: filterMSP430,
	cfgPrefix: "msp430/",
        platform: "ti.platforms.msp430:$DeviceId$",
    },
    {
        variant: "m3",
        filter: filterStellaris,
        cfgPrefix: "",
        platform: "ti.platforms.stellaris:$DeviceId$",
    },
    {
        variant: "c28",
        filter: filterConcertoC28,
        cfgPrefix: "c28/",
        platform: "ti.platforms.concertoC28:$DeviceId$",
        linkerCommandFile: "ti/platforms/concertoC28/include/$DeviceId$.cmd",
    },
    {
        variant: "m3",
        filter: filterConcertoM3,
        cfgPrefix: "",
        platform: "ti.platforms.concertoM3:$DeviceId$",
	linkerCommandFile: "ti/platforms/concertoM3/include/$DeviceId$.cmd",
    }
] 

var genericExamples = [
    {
        groups: ["ti.sysbios.examples.root"],
	title: "Minimal",
        description: "This example has a fairly minimal .cfg which is set up for a static application where all objects are defined statically (via configuration tool and/or target structures).  Dynamic memory allocation has been disabled. The .cfg file creates a single task which has a couple of print statements and a Task_sleep() call.",
        root: "./generic/minimal/",
        cFile: "main.c",
        cfgFile: "app.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups: ["ti.sysbios.examples.root"],
        title: "Typical",
        description: "This example has a .cfg populated with a typical set of options and parameters.  This .cfg file is a good starting point for many applications.  Dyanamic memory allocation and runtime create of is supported.  Unlike the 'Minimal' example, the single task is created at runtime using the Task_create() API.",
	root: "./generic/typical/",
	cFile: "main.c",
	cfgFile: "app.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups: ["ti.sysbios.examples.root"],
        title: "Typical (with separate config project)",
        description: "Same as the 'Typical' example except that the configuration project is a separate project from the app project.  The benefit of having a separate config project is that several applications can use the same configuration.  This helps save on build times and allows a team to share a common configuratin set up by a system integrator.",
	root: "./generic/typical/",
	cFile: "main.c",
	cfgFile: "app.cfg",
        isHybrid: false,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "C++ Example (bigtime)",
        description: "In this program, C++ is used to create a real-time clock/calendar.",
	root: "./generic/bigtime/",
	cFile: "bigtime.cpp",
	cfgFile: "bigtime.cfg",
	isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Clock Example",
        description: "The clock example shows how to use the ti.sysbios.knl.Clock module to create one-shot and periodic Clock Instances. Clock Instances are essentially functions that run after a certain number of Clock ticks.",
	root: "./generic/clock/",
	cFile: "clock.c",
	cfgFile: "clock.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Error Example",
        description: "This example shows how to use Error_Blocks to catch runtime errors. An Error_Block is passed to Task_create() and then checked for create failure. When no Error_Block is passed, the application will terminate when an error occurs. The error.cfg file shows how to plug an error hook.",
	root: "./generic/error/",
	cFile: "error.c",
	cfgFile: "error.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Event Example",
        description: "The event example shows how to use the ti.sysbios.knl.Event module. The ti.sysbios.knl.Event module solves the 'Wait on Multiple' problem. In this example a reader task waits on several events.",
        buildProfile: "release",
	root: "./generic/event/",
	cFile: "event.c",
	cfgFile: "event.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Hello Example",
        description: "The hello example serves as a basic sanity check program for SYS/BIOS. It demonstrates how to print the string 'hello world' to stdout.",
        buildProfile: "release",
	root: "./generic/hello/",
	cFile: "hello.c",
	cfgFile: "hello.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Log Example",
        description: "This module shows how to use Log_info(), Log_error() and Log_warning() in a simple application. It shows how to enable USER1 logs for the Task module in the cfg file.",
        buildProfile: "release",
	root: "./generic/log/",
	cFile: "log.c",
	cfgFile: "log.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Memory Example",
        description: "This example shows the use of xdc.runtime.Memory module and different xdc.runtime.IHeap implementations to manage memory. A system heap is created statically using ti.sysbios.heaps.HeapMem.",
        buildProfile: "release",
	root: "./generic/memory/",
	cFile: "memory.c",
	cfgFile: "memory.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Task Mutex Example",
        description: "This example shows the use of two tasks and one semaphore to protect data access.",
        buildProfile: "release",
	root: "./generic/mutex/",
	cFile: "mutex.c",
	cfgFile: "mutex.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Task Mutex Example (separate config project)",
        description: "This example shows the use of two tasks and one semaphore to protect data access using a separate project for SYS/BIOS configuration. The benefit of having a separate config project is that several applications can reference the same SYS/BIOS configuration. This helps save on build times and allows a team to share a SYS/BIOS config set up by a system integrator.",
        buildProfile: "release",
	root: "./generic/mutex/",
	cFile: "mutex.c",
	cfgFile: "mutex.cfg",
        isHybrid: false,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Small Example",
        description: "This simple example uses the Clock module to periodically post a software interrupt (Swi), and increments counters.  The configuration disables non-essential and debug-related SYS/BIOS features to reduce the application memory footprint.",
        buildProfile: "release",
	root: "./generic/small/",
	cFile: "small.c",
	cfgFile: "small.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Stairstep Example",
        description: "The RTA stairstep example runs continuously and periodically generates log events. Different threads (Hwi, Swi, Task) run to add CPU load to the system.",
        buildProfile: "release",
	root: "./generic/stairstep/",
	cFile: "stairstep.c",
	cfgFile: "stairstep.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Static Example",
        description: "The static example focuses on SYS/BIOS configuration. It shows how to use and configure various modules, create static Instances and modify Program level configuration parameters.",
        buildProfile: "release",
	root: "./generic/static/",
	cFile: "static.c",
	cfgFile: "static.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.generic"],
        title: "Swi Example",
        description: "The swi example shows how to use the ti.sysbios.knl.Swi module. It demonstrates how the various Swi APIs work.",
        buildProfile: "release",
	root: "./generic/swi/",
	cFile: "swi.c",
	cfgFile: "swi.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
]

var c28Examples = [
    {
        groups:["ti.sysbios.examples.root.c28"],
        title: "Idle Example",
        description: "A 28x specific example which uses an Idle function to print to standard out and a log buffer",
        buildProfile: "release",
        root: "./c28/idle/",
        cFile: "idle.c",
        cfgFile: "idle.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.c28"],
        title: "Swi Example",
        description: "A 28x specific example which uses an Swi function and an Idle function to print to a log buffer",
        buildProfile: "release",
        root: "./c28/swi/",
        cFile: "swi.c",
        cfgFile: "swi.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.c28"],
        title: "Task Example",
        description: "A 28x specific example which uses an task to print to a log buffer",
        buildProfile: "release",
        root: "./c28/task/",
        cFile: "task.c",
        cfgFile: "task.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.c28"],
        title: "PIE Interrupt Example",
        description: "A 28x specific example which shows how to handle (simulated) peripheral interrupts from the PIE",
        buildProfile: "release",
        root: "./c28/pie/",
        cFile: "pie.c",
        cfgFile: "pie.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
]

var msp430Examples = [
    {
        groups:["ti.sysbios.examples.root.msp430"],
        title: "Idle Example",
        description: "An MSP430 specific example which uses an Idle function to print to standard out and a log buffer",
        buildProfile: "release",
        root: "./msp430/idle/",
        cFile: "idle.c",
        cfgFile: "idle.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.msp430"],
        title: "Swi Example",
        description: "An MSP430 specific example which uses an Swi function and an Idle function to print to a log buffer",
        buildProfile: "release",
        root: "./msp430/swi/",
        cFile: "swi.c",
        cfgFile: "swi.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
    {
        groups:["ti.sysbios.examples.root.msp430"],
        title: "Task Example",
        description: "An MSP430 specific example which uses an task to print to a log buffer",
        buildProfile: "release",
        root: "./msp430/task/",
        cFile: "task.c",
        cfgFile: "task.cfg",
        isHybrid: true,
        options: "NPW,TREX",
    },
]
    
/*
 *  ======== module$meta$init ========
 */
function module$meta$init()
{
    var Examples = this;
    
    Examples.templateGroupArr.$add({
        id          : "ti.sysbios.examples.root",
        name        : "SYS/BIOS",
        description : "SYS/BIOS Templates and Examples"
    });

    Examples.templateGroupArr.$add({
        id          : "ti.sysbios.examples.root.generic",
        name        : "Generic Examples",
        description : "Generic SYS/BIOS Examples. These examples are not optimized for code and data memory usage and may not build on platforms with memory constraints.",
        groups      : ["ti.sysbios.examples.root"],
    });

    Examples.templateGroupArr.$add({
        id          : "ti.sysbios.examples.root.msp430",
        name        : "MSP430 Examples",
        description : "MSP430 specific SYS/BIOS Examples",
        groups      : ["ti.sysbios.examples.root"],
    });

    Examples.templateGroupArr.$add({
        id          : "ti.sysbios.examples.root.c28",
        name        : "28x Examples",
        description : "28x specific SYS/BIOS Examples",
        groups      : ["ti.sysbios.examples.root"],
    });


    for (i = 0; i < options.length; i++) {
	for (j = 0; j < genericExamples.length; j++) {

            Examples.templateArr.$add({
                buildProfile: "release",

                filterArr: options[i].filter,
	        target: options[i].target,
	        platform: options[i].platform,
                linkerCommandFile: options[i].linkerCommandFile,

                title: genericExamples[j].title,
                description: genericExamples[j].description,
                fileList: [
		    {path: genericExamples[j].root +
			genericExamples[j].cFile, openOnCreation: true},
		    {path: genericExamples[j].root + options[i].cfgPrefix +
			genericExamples[j].cfgFile}
		],
                isHybrid: genericExamples[j].isHybrid,
		groups: genericExamples[j].groups,
		options: genericExamples[j].options,
            });

	    if (options[i].cmdFile != undefined) {
		var ex = Examples.templateArr[Examples.templateArr.length - 1];
		ex.fileList.$add({path: options[i].cmdFile});
	    }
        }

	if (options[i].variant == "c28") {
	    for (j = 0; j < c28Examples.length; j++) {
                Examples.templateArr.$add({
                    buildProfile: "release",

                    filterArr: options[i].filter,
	            target: options[i].target,
	            platform: options[i].platform,
                    linkerCommandFile: options[i].linkerCommandFile,

                    title: c28Examples[j].title,
                    description: c28Examples[j].description,
                    fileList: [
		        {path: c28Examples[j].root + c28Examples[j].cFile,
			    openOnCreation: true},
		        {path: c28Examples[j].root + c28Examples[j].cfgFile}
		    ],
                    isHybrid: c28Examples[j].isHybrid,
		    groups: c28Examples[j].groups,
		    options: c28Examples[j].options,
                });
	    }
	}

	if (options[i].variant == "msp430") {
	    for (j = 0; j < msp430Examples.length; j++) {
                Examples.templateArr.$add({
                    buildProfile: "release",

                    filterArr: options[i].filter,
	            target: options[i].target,
	            platform: options[i].platform,
                    linkerCommandFile: options[i].linkerCommandFile,

                    title: msp430Examples[j].title,
                    description: msp430Examples[j].description,
                    fileList: [
		        {path: msp430Examples[j].root + msp430Examples[j].cFile,
			    openOnCreation: true},
		        {path: msp430Examples[j].root + 
			    msp430Examples[j].cfgFile}
		    ],
                    isHybrid: msp430Examples[j].isHybrid,
		    groups: msp430Examples[j].groups,
		    options: msp430Examples[j].options,
                });
	    }
	}
    }

    /* add common properties shared by all examples */
    for (var i = 0; i < Examples.templateArr.length; i++) {
        var ex = Examples.templateArr[i];
    
        /* add ./makefile.defs to all examples */
        ex.fileList.$add({path: "./makefile.defs"});
    
        /* add debugability to all examples using TI toolchain */
        var debug = true;
        for (var j = 0; j < ex.filterArr.length; j++) {
            if (ex.filterArr[j].toolChain != "TI") {
                debug = false;
            }
        }
        if (debug) {
            ex.configuroOptions = "--compileOptions &quot;-g --optimize_with_debug&quot;";
        }
    }
}
