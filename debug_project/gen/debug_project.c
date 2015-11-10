/* sscc : C CODE OF SORTED EQUATIONS debug_project - INLINE MODE */

/* AUXILIARY DECLARATIONS */

#ifndef STRLEN
#define STRLEN 81
#endif
#define _COND(A,B,C) ((A)?(B):(C))
#ifdef TRACE_ACTION
#include <stdio.h>
#endif
#ifndef NULL
#define NULL ((char*)0)
#endif

#ifndef __EXEC_STATUS_H_LOADED
#define __EXEC_STATUS_H_LOADED

typedef struct {
unsigned int start:1;
unsigned int kill:1;
unsigned int active:1;
unsigned int suspended:1;
unsigned int prev_active:1;
unsigned int prev_suspended:1;
unsigned int exec_index;
unsigned int task_exec_index;
void (*pStart)();
void (*pRet)();
} __ExecStatus;

#endif
#define __ResetExecStatus(status) {\
   status.prev_active = status.active; \
   status.prev_suspended = status.suspended; \
   status.start = status.kill = status.active = status.suspended = 0; }
#define __DSZ(V) (--(V)<=0)
#define BASIC_TYPES_DEFINED
typedef int boolean;
typedef int integer;
typedef char* string;
#define _true 1
#define _false 0
#define __debug_project_GENERIC_TEST(TEST) return TEST;
typedef void (*__debug_project_APF)();
static __debug_project_APF *__debug_project_PActionArray;

                           
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __debug_project_V0;
static boolean __debug_project_V1;
static boolean __debug_project_V2;
static integer __debug_project_V3;
static boolean __debug_project_V4;
static integer __debug_project_V5;
static integer __debug_project_V6;
static integer __debug_project_V7;
static integer __debug_project_V8;


/* INPUT FUNCTIONS */

void debug_project_I_RANDOM1 () {
__debug_project_V0 = _true;
}
void debug_project_I_RANDOM2 () {
__debug_project_V1 = _true;
}
void debug_project_I_RANDOM3 () {
__debug_project_V2 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __debug_project_A1 \
__debug_project_V0
#define __debug_project_A2 \
__debug_project_V1
#define __debug_project_A3 \
__debug_project_V2

/* OUTPUT ACTIONS */

#define __debug_project_A4 \
debug_project_O_TA_INREVIEW()
#define __debug_project_A5 \
debug_project_O_TA_SLEEPING()
#define __debug_project_A6 \
debug_project_O_WANT_REVIEW()
#define __debug_project_A7 \
debug_project_O_STUD_WANTREVIEW()
#define __debug_project_A8 \
debug_project_O_STUD_INREVIEW()
#define __debug_project_A9 \
debug_project_O_TA_DISMISS_STUD()
#define __debug_project_A10 \
debug_project_O_STUDENTS_WAITING(__debug_project_V3)
#define __debug_project_A11 \
debug_project_O_STUD_WANTREVIEW1()
#define __debug_project_A12 \
debug_project_O_STUD_INREVIEW1()
#define __debug_project_A13 \
debug_project_O_STUD_WANTREVIEW2()
#define __debug_project_A14 \
debug_project_O_STUD_INREVIEW2()
#define __debug_project_A15 \
debug_project_O_STUD_WANTREVIEW3()
#define __debug_project_A16 \
debug_project_O_STUD_INREVIEW3()

/* ASSIGNMENTS */

#define __debug_project_A17 \
__debug_project_V0 = _false
#define __debug_project_A18 \
__debug_project_V1 = _false
#define __debug_project_A19 \
__debug_project_V2 = _false
#define __debug_project_A20 \
__debug_project_V4 = _false
#define __debug_project_A21 \
__debug_project_V3 = 0
#define __debug_project_A22 \
__debug_project_V5 = 0
#define __debug_project_A23 \
__debug_project_V5 = __debug_project_V3
#define __debug_project_A24 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(__debug_project_V5)),(__debug_project_V4=_true,__debug_project_V5))
#define __debug_project_A25 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(-(1))),(__debug_project_V4=_true,-(1)))
#define __debug_project_A26 \
__debug_project_V6 = 0
#define __debug_project_A27 \
__debug_project_V6 = __debug_project_V5
#define __debug_project_A28 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1))
#define __debug_project_A29 \
__debug_project_V6 = __debug_project_V6-1
#define __debug_project_A30 \
__debug_project_V7 = 0
#define __debug_project_A31 \
__debug_project_V7 = __debug_project_V5
#define __debug_project_A32 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1))
#define __debug_project_A33 \
__debug_project_V7 = __debug_project_V7-1
#define __debug_project_A34 \
__debug_project_V8 = 0
#define __debug_project_A35 \
__debug_project_V8 = __debug_project_V5
#define __debug_project_A36 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1))
#define __debug_project_A37 \
__debug_project_V8 = __debug_project_V8-1

/* PROCEDURE CALLS */

/* CONDITIONS */

#define __debug_project_A38 \
__debug_project_V5<2
#define __debug_project_A39 \
__debug_project_V6<1
#define __debug_project_A40 \
__debug_project_V5<2
#define __debug_project_A41 \
__debug_project_V7<1
#define __debug_project_A42 \
__debug_project_V5<2
#define __debug_project_A43 \
__debug_project_V8<1

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int debug_project_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __debug_project__reset_input () {
__debug_project_V0 = _false;
__debug_project_V1 = _false;
__debug_project_V2 = _false;
__debug_project_V4 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __debug_project_R[14] = {_false,
 _true,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int debug_project () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[33];
if (__debug_project_R[1]) {
__debug_project_A21;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A21\n");
#endif
}
if (__debug_project_R[1]) {
__debug_project_A22;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A22\n");
#endif
}
E[0] = __debug_project_R[1]||(__debug_project_R[7]&&!(__debug_project_R[1]));
if (E[0]) {
__debug_project_A24;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A24\n");
#endif
}
E[1] = E[0]&&__debug_project_R[0];
if (E[1]) {
__debug_project_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A4\n");
#endif
}
E[2] = E[0]&&!(__debug_project_R[0]);
if (E[2]) {
__debug_project_A5;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A5\n");
#endif
}
if (!(_true)) {
__debug_project_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A6\n");
#endif
}
E[3] = (__debug_project_R[5]&&!(__debug_project_R[1]))||__debug_project_R[1];
E[4] = __debug_project_R[2]&&!(__debug_project_R[1]);
E[5] = E[4]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1);
if (E[5]) {
__debug_project_A26;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A26\n");
#endif
}
E[6] = E[5]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 38\n"),
#endif
__debug_project_A38);
if (E[6]) {
__debug_project_A27;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A27\n");
#endif
}
if (E[6]) {
__debug_project_A28;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A28\n");
#endif
}
E[7] = E[6]||(__debug_project_R[8]&&!(__debug_project_R[1]));
E[8] = __debug_project_R[3]&&!(__debug_project_R[1]);
E[9] = E[8]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2);
if (E[9]) {
__debug_project_A30;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A30\n");
#endif
}
E[10] = E[9]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 40\n"),
#endif
__debug_project_A40);
if (E[10]) {
__debug_project_A31;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A31\n");
#endif
}
if (E[10]) {
__debug_project_A32;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A32\n");
#endif
}
E[11] = E[10]||(__debug_project_R[10]&&!(__debug_project_R[1]));
E[12] = __debug_project_R[4]&&!(__debug_project_R[1]);
E[13] = E[12]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3);
if (E[13]) {
__debug_project_A34;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A34\n");
#endif
}
E[14] = E[13]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 42\n"),
#endif
__debug_project_A42);
if (E[14]) {
__debug_project_A35;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A35\n");
#endif
}
if (E[14]) {
__debug_project_A36;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A36\n");
#endif
}
E[15] = E[14]||(__debug_project_R[12]&&!(__debug_project_R[1]));
E[16] = E[7]||E[11]||E[15];
E[17] = E[3]&&E[16];
if (E[17]) {
__debug_project_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A7\n");
#endif
}
if (E[1]) {
__debug_project_A25;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A25\n");
#endif
}
E[18] = E[1]||E[2];
E[19] = __debug_project_R[9]&&!(__debug_project_R[1]);
E[4] = E[4]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1));
E[4] = __debug_project_R[1]||E[19]||(E[5]&&!(E[6]))||(__debug_project_R[2]&&E[4]);
if (E[7]) {
__debug_project_A29;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A29\n");
#endif
}
E[20] = E[7]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 39\n"),
#endif
__debug_project_A39);
E[21] = E[7]&&!(E[20]);
E[22] = __debug_project_R[11]&&!(__debug_project_R[1]);
E[8] = E[8]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2));
E[8] = __debug_project_R[1]||E[22]||(E[9]&&!(E[10]))||(__debug_project_R[3]&&E[8]);
if (E[11]) {
__debug_project_A33;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A33\n");
#endif
}
E[23] = E[11]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 41\n"),
#endif
__debug_project_A41);
E[24] = E[11]&&!(E[23]);
E[25] = __debug_project_R[13]&&!(__debug_project_R[1]);
E[12] = E[12]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3));
E[12] = __debug_project_R[1]||E[25]||(E[13]&&!(E[14]))||(__debug_project_R[4]&&E[12]);
if (E[15]) {
__debug_project_A37;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A37\n");
#endif
}
E[26] = E[15]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 43\n"),
#endif
__debug_project_A43);
E[27] = E[15]&&!(E[26]);
E[16] = E[17]||(E[3]&&!(E[16]));
E[3] = (__debug_project_R[6]&&!(__debug_project_R[1]))||__debug_project_R[1];
E[28] = E[19]||E[22]||E[25];
E[29] = E[3]&&E[28];
E[28] = E[29]||(E[3]&&!(E[28]));
E[3] = __debug_project_R[2]||__debug_project_R[9]||__debug_project_R[8];
E[30] = __debug_project_R[3]||__debug_project_R[11]||__debug_project_R[10];
E[31] = __debug_project_R[4]||__debug_project_R[13]||__debug_project_R[12];
E[32] = __debug_project_R[7]||E[3]||E[30]||E[31]||__debug_project_R[5]||__debug_project_R[6];
E[32] = (E[18]||E[4]||E[20]||E[21]||E[8]||E[23]||E[24]||E[12]||E[26]||E[27]||E[16]||E[28])&&((E[32]&&!(__debug_project_R[7]))||E[18])&&((E[32]&&!(E[3]))||E[4]||E[20]||E[21])&&((E[32]&&!(E[30]))||E[8]||E[23]||E[24])&&((E[32]&&!(E[31]))||E[12]||E[26]||E[27])&&((E[32]&&!(__debug_project_R[5]))||E[16])&&((E[32]&&!(__debug_project_R[6]))||E[28]);
__debug_project_R[0] = E[17]&&E[32];
if (E[29]) {
__debug_project_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A8\n");
#endif
}
if (!(_true)) {
__debug_project_A9;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A9\n");
#endif
}
E[31] = E[0]||E[1]||E[6]||E[10]||E[14];
if (E[31]) {
__debug_project_A10;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A10\n");
#endif
}
if (E[31]&&E[32]) {
__debug_project_A23;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A23\n");
#endif
}
if (E[7]) {
__debug_project_A11;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A11\n");
#endif
}
if (E[19]) {
__debug_project_A12;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A12\n");
#endif
}
if (E[11]) {
__debug_project_A13;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A13\n");
#endif
}
if (E[22]) {
__debug_project_A14;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A14\n");
#endif
}
if (E[15]) {
__debug_project_A15;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A15\n");
#endif
}
if (E[25]) {
__debug_project_A16;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A16\n");
#endif
}
E[30] = !(_true);
__debug_project_R[1] = !(_true);
__debug_project_R[2] = E[4];
__debug_project_R[3] = E[8];
__debug_project_R[4] = E[12];
__debug_project_R[5] = E[16];
__debug_project_R[6] = E[28];
__debug_project_R[7] = E[18];
__debug_project_R[8] = E[21];
__debug_project_R[9] = E[20];
__debug_project_R[10] = E[24];
__debug_project_R[11] = E[23];
__debug_project_R[12] = E[27];
__debug_project_R[13] = E[26];
__debug_project__reset_input();
return E[32];
}

/* AUTOMATON RESET */

int debug_project_reset () {
__debug_project_R[0] = _false;
__debug_project_R[1] = _true;
__debug_project_R[2] = _false;
__debug_project_R[3] = _false;
__debug_project_R[4] = _false;
__debug_project_R[5] = _false;
__debug_project_R[6] = _false;
__debug_project_R[7] = _false;
__debug_project_R[8] = _false;
__debug_project_R[9] = _false;
__debug_project_R[10] = _false;
__debug_project_R[11] = _false;
__debug_project_R[12] = _false;
__debug_project_R[13] = _false;
__debug_project__reset_input();
return 0;
}
