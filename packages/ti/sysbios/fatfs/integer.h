/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*-------------------------------------------*/
/* Integer type definitions for FatFs module */
/*-------------------------------------------*/

#ifndef _INTEGER
#define _INTEGER

#ifdef _WIN32   /* FatFs development platform */

#include <windows.h>
#include <tchar.h>

#else                   /* Embedded platform */

/* These types must be 16-bit, 32-bit or larger integer */
typedef int                             INT;
typedef unsigned int    UINT;

/* These types must be 8-bit integer */
typedef char                    CHAR;
typedef unsigned char   UCHAR;
typedef unsigned char   BYTE;

/* These types must be 16-bit integer */
typedef short                   SHORT;
typedef unsigned short  USHORT;
typedef unsigned short  WORD;
typedef unsigned short  WCHAR;

/* These types must be 32-bit integer */
typedef long                    LONG;
typedef unsigned long   ULONG;
typedef unsigned long   DWORD;

#endif

#endif
/*
 *  @(#) ti.sysbios.fatfs; 1, 0, 0,289; 11-7-2012 12:41:54; /db/vtree/library/trees/avala/avala-r22x/src/ xlibrary

 */

