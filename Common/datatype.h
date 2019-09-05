
#ifndef __DATA_TYPE_H_
#define __DATA_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

//-------------------- include files ----------------------------------------
#include <stdbool.h>
#include <stdint.h>
//-------------------- public definitions -----------------------------------
#ifndef NULL
#define NULL   0
#endif

// Basic unsigned types
typedef unsigned char       UNSIGNED8;
typedef unsigned short      UNSIGNED16;
typedef unsigned long       UNSIGNED32;
typedef unsigned long long  UNSIGNED64;

//typedef unsigned char       uint8_t;
//typedef unsigned short      uint16_t;
//typedef unsigned long       uint32_t;
//typedef unsigned long long  uint64_t;

typedef int                 err_t;
typedef int					ERR;
// Basic signed types
typedef signed char       SIGNED8;
typedef signed short      SIGNED16;
typedef signed long       SIGNED32;
typedef signed long long  SIGNED64;


// float and double types
typedef float             FLOAT;
typedef double            DOUBLE;

typedef char * caddr_t;

// Define general const's

#define TWO_IN_32_C 4294967295ULL
#define TWO_IN_31_C ((UNSIGNED32)2147483648)
#define TWO_IN_30_C ((UNSIGNED32)1073741824)
#define TWO_IN_29_C ((UNSIGNED32)536870912)
#define TWO_IN_28_C ((UNSIGNED32)268435456)
#define TWO_IN_27_C ((UNSIGNED32)134217728)
#define TWO_IN_26_C ((UNSIGNED32)67108864)
#define TWO_IN_25_C ((UNSIGNED32)33554432)
#define TWO_IN_24_C ((UNSIGNED32)16777216)
#define TWO_IN_23_C ((UNSIGNED32)8388608)
#define TWO_IN_22_C ((UNSIGNED32)4194304)
#define TWO_IN_21_C ((UNSIGNED32)2097152)
#define TWO_IN_20_C ((UNSIGNED32)1048576)
#define TWO_IN_18_C ((UNSIGNED32)262144)
#define TWO_IN_16_C ((UNSIGNED32)65536)
#define TWO_IN_15_C ((UNSIGNED16)32768)
#define TWO_IN_14_C ((UNSIGNED16)16384)
#define TWO_IN_13_C ((UNSIGNED16)8192)
#define TWO_IN_12_C ((UNSIGNED16)4096)
#define TWO_IN_11_C ((UNSIGNED16)2048)
#define TWO_IN_10_C ((UNSIGNED16)1024)
#define TWO_IN_9_C  ((UNSIGNED16)512)
#define TWO_IN_8_C  ((UNSIGNED16)256)
#define TWO_IN_7_C  ((UNSIGNED8)128)
#define TWO_IN_6_C  ((UNSIGNED8)64)
#define TWO_IN_5_C  ((UNSIGNED8)32)
#define TWO_IN_4_C  ((UNSIGNED8)16)
#define TWO_IN_3_C  ((UNSIGNED8)8)
#define TWO_IN_2_C  ((UNSIGNED8)4)
#define TWO_IN_1_C  ((UNSIGNED8)2)
#define TWO_IN_0_C  ((UNSIGNED8)1)

#define TEN_IN_6_C  1000000

#define   S8MIN   ((SIGNED8)0x80)
#define   S8MAX   ((SIGNED8)0x7F)
#define   U8MIN   ((UNSIGNED8)0x00)
#define   U8MAX   ((UNSIGNED8)0xFF)

#define   S16MIN   ((SIGNED16)0x8000)
#define   S16MAX   ((SIGNED16)0x7FFF)
#define   U16MIN   ((UNSIGNED16)0x0000)
#define   U16MAX   ((UNSIGNED16)0xFFFF)

#define   S32MIN   ((SIGNED32)0x80000000)
#define   S32MAX   ((SIGNED32)0x7FFFFFFF)
#define   U32MIN   ((UNSIGNED32)0x00000000)
#define   U32MAX   ((UNSIGNED32)0xFFFFFFFF)

#define   S64MIN   ((SIGNED64)0x8000000000000000)
#define   S64MAX   ((SIGNED64)0x7FFFFFFFFFFFFFFF)
#define   U64MIN   ((UNSIGNED64)0x0000000000000000)
#define   U64MAX   ((UNSIGNED64)0xFFFFFFFFFFFFFFFF)

#define NUMOFBITINBYTE ((UNSIGNED8)8)

//-------------------- public data ------------------------------------------
//-------------------- public functions -------------------------------------

#ifdef __cplusplus
}  /* end extern "C" { */
#endif

#endif //__DATA_TYPE_H_

