/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */


var m_count = 0;
m_items = new Array(
"<h3>ti.catalog.c6000</h3>",
"<h5>Arctic</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer0   </td><td> 0x4802c000         </td></tr>",
 "</table>",
"<h5>OMAP4430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer5   </td><td> 0x1d38000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer6   </td><td> 0x1d3a000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer7   </td><td> 0x1d3c000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer8   </td><td> 0x1d3e000         </td></tr>",
 "</table>",
"<h5>OMAP5430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer5   </td><td> 0x1d38000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer6   </td><td> 0x1d3a000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer7   </td><td> 0x1d3c000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer8   </td><td> 0x1d3e000         </td></tr>",
 "</table>",
"<h5>TMS320C6A8149</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x8042000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer7   </td><td> 0x804a000         </td></tr>",
 "</table>",
"<h5>TMS320C6A8168</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
 "</table>",
"<h5>TMS320CDM740</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
 "</table>",
"<h5>TMS320DM8148</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x8042000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer7   </td><td> 0x804a000         </td></tr>",
 "</table>",
"<h5>TMS320DM8168</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
 "</table>",
"<h5>TMS320TI811X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x8042000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer7   </td><td> 0x804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI814X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x8042000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer7   </td><td> 0x804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI816X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x8044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x8046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x8048000         </td></tr>",
 "</table>",
"<h5>Vayu</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> DMTimer0   </td><td> 0x4ae18000         </td></tr>",
   "<tr><td> 1        </td><td> DMTimer1   </td><td> 0x48032000         </td></tr>",
   "<tr><td> 2        </td><td> DMTimer2   </td><td> 0x48034000         </td></tr>",
   "<tr><td> 3        </td><td> DMTimer3   </td><td> 0x48036000         </td></tr>",
   "<tr><td> 4        </td><td> DMTimer4   </td><td> 0x48820000         </td></tr>",
   "<tr><td> 5        </td><td> DMTimer5   </td><td> 0x48822000         </td></tr>",
   "<tr><td> 6        </td><td> DMTimer6   </td><td> 0x48824000         </td></tr>",
   "<tr><td> 7        </td><td> DMTimer7   </td><td> 0x48826000         </td></tr>",
   "<tr><td> 8        </td><td> DMTimer8   </td><td> 0x4803e000         </td></tr>",
   "<tr><td> 9        </td><td> DMTimer9   </td><td> 0x48086000         </td></tr>",
   "<tr><td> 10        </td><td> DMTimer10   </td><td> 0x48088000         </td></tr>",
   "<tr><td> 11        </td><td> DMTimer11   </td><td> 0x4ae20000         </td></tr>",
   "<tr><td> 12        </td><td> DMTimer12   </td><td> 0x48828000         </td></tr>",
   "<tr><td> 13        </td><td> DMTimer13   </td><td> 0x4882a000         </td></tr>",
   "<tr><td> 14        </td><td> DMTimer14   </td><td> 0x4882c000         </td></tr>",
   "<tr><td> 15        </td><td> DMTimer15   </td><td> 0x4882e000         </td></tr>",
 "</table>",
"<h3>ti.catalog.arm</h3>",
"<h5>TMS320CDM740</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h3>ti.catalog.arm.cortexa8</h3>",
"<h5>AM3359</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> DMTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 1        </td><td> DMTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 2        </td><td> DMTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 3        </td><td> DMTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 4        </td><td> DMTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 5        </td><td> DMTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>AM335X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> DMTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 1        </td><td> DMTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 2        </td><td> DMTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 3        </td><td> DMTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 4        </td><td> DMTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 5        </td><td> DMTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320C6A8149</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 5        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 6        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320C6A8168</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h5>TMS320DM8148</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 5        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 6        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320DM8168</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h5>TMS320TI811X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 5        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 6        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI813X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 5        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 6        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI814X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer3   </td><td> 0x48042000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 5        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 6        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI816X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer1   </td><td> 0x4802e000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer2   </td><td> 0x48040000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 4        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h3>ti.catalog.arm.cortexa9</h3>",
"<h5>OMAP4430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer2   </td><td> 0x48032000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer10   </td><td> 0x48086000         </td></tr>",
 "</table>",
"<h3>ti.catalog.arm.cortexa15</h3>",
"<h5>OMAP5430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer2   </td><td> 0x48032000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer10   </td><td> 0x48086000         </td></tr>",
 "</table>",
"<h5>Vayu</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer2   </td><td> 0x48032000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer10   </td><td> 0x48086000         </td></tr>",
 "</table>",
"<h3>ti.catalog.arm.cortexm3</h3>",
"<h5>OMAP4430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x48034000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x48036000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer9   </td><td> 0x4803e000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer11   </td><td> 0x48088000         </td></tr>",
 "</table>",
"<h5>OMAP5430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x48034000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x48036000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer9   </td><td> 0x4803e000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer11   </td><td> 0x48088000         </td></tr>",
 "</table>",
"<h5>TMS320C6A8149</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320C6A8168</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h5>TMS320DM8148</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320DM8168</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h5>TMS320TI811X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI813X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI814X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer7   </td><td> 0x4804a000         </td></tr>",
 "</table>",
"<h5>TMS320TI816X</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer4   </td><td> 0x48044000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer5   </td><td> 0x48046000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer6   </td><td> 0x48048000         </td></tr>",
 "</table>",
"<h3>ti.catalog.arm.cortexm4</h3>",
"<h5>OMAP5430</h5>",
"<table border=1 cellpadding=3>",
 "<colgroup span=1></colgroup> <colgroup span=5 align=center></colgroup>",
   "<tr><th> Timer ID </th><th> Timer Name </th><th> Timer Base Address </th></tr>",
   "<tr><td> 0        </td><td> GPTimer3   </td><td> 0x48034000         </td></tr>",
   "<tr><td> 1        </td><td> GPTimer4   </td><td> 0x48036000         </td></tr>",
   "<tr><td> 2        </td><td> GPTimer9   </td><td> 0x4803e000         </td></tr>",
   "<tr><td> 3        </td><td> GPTimer11   </td><td> 0x48088000         </td></tr>",
 "</table>",
"<!-- -->"
);

// gen below code only 1 time
while (m_count < m_items.length) {
    document.write(m_items[m_count]);
    m_count++;
}
/*
 *  @(#) ti.sysbios.timers.dmtimer; 2, 0, 0, 0,286; 11-7-2012 12:42:46; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

