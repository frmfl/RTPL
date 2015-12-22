/* sscc : C CODE OF SORTED EQUATIONS INSERTSORT - INLINE MODE */

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
#define __INSERTSORT_GENERIC_TEST(TEST) return TEST;
typedef void (*__INSERTSORT_APF)();
static __INSERTSORT_APF *__INSERTSORT_PActionArray;

                        
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static integer __INSERTSORT_V0;
static boolean __INSERTSORT_V1;
static integer __INSERTSORT_V2;
static boolean __INSERTSORT_V3;
static integer __INSERTSORT_V4;
static boolean __INSERTSORT_V5;
static integer __INSERTSORT_V6;
static boolean __INSERTSORT_V7;
static integer __INSERTSORT_V8;
static integer __INSERTSORT_V9;
static integer __INSERTSORT_V10;
static integer __INSERTSORT_V11;
static boolean __INSERTSORT_V12;


/* INPUT FUNCTIONS */

void INSERTSORT_I_CARD1_IN (integer __V) {
__INSERTSORT_V0 = __V;
__INSERTSORT_V1 = _true;
}
void INSERTSORT_I_CARD2_IN (integer __V) {
__INSERTSORT_V2 = __V;
__INSERTSORT_V3 = _true;
}
void INSERTSORT_I_CARD3_IN (integer __V) {
__INSERTSORT_V4 = __V;
__INSERTSORT_V5 = _true;
}
void INSERTSORT_I_CARD4_IN (integer __V) {
__INSERTSORT_V6 = __V;
__INSERTSORT_V7 = _true;
}
void INSERTSORT_I_START () {
__INSERTSORT_V12 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __INSERTSORT_A1 \
__INSERTSORT_V1
#define __INSERTSORT_A2 \
__INSERTSORT_V3
#define __INSERTSORT_A3 \
__INSERTSORT_V5
#define __INSERTSORT_A4 \
__INSERTSORT_V7
#define __INSERTSORT_A5 \
__INSERTSORT_V12

/* OUTPUT ACTIONS */

#define __INSERTSORT_A6 \
INSERTSORT_O_CARD1_OUT(__INSERTSORT_V8)
#define __INSERTSORT_A7 \
INSERTSORT_O_CARD2_OUT(__INSERTSORT_V9)
#define __INSERTSORT_A8 \
INSERTSORT_O_CARD3_OUT(__INSERTSORT_V10)
#define __INSERTSORT_A9 \
INSERTSORT_O_CARD4_OUT(__INSERTSORT_V11)
#define __INSERTSORT_A10 \
INSERTSORT_O_FINISHED()

/* ASSIGNMENTS */

#define __INSERTSORT_A11 \
__INSERTSORT_V1 = _false
#define __INSERTSORT_A12 \
__INSERTSORT_V3 = _false
#define __INSERTSORT_A13 \
__INSERTSORT_V5 = _false
#define __INSERTSORT_A14 \
__INSERTSORT_V7 = _false
#define __INSERTSORT_A15 \
__INSERTSORT_V12 = _false
#define __INSERTSORT_A16 \
__INSERTSORT_V10 = __INSERTSORT_V6
#define __INSERTSORT_A17 \
__INSERTSORT_V11 = __INSERTSORT_V4
#define __INSERTSORT_A18 \
__INSERTSORT_V9 = __INSERTSORT_V2
#define __INSERTSORT_A19 \
__INSERTSORT_V8 = __INSERTSORT_V0
#define __INSERTSORT_A20 \
__INSERTSORT_V11 = __INSERTSORT_V6
#define __INSERTSORT_A21 \
__INSERTSORT_V10 = __INSERTSORT_V2
#define __INSERTSORT_A22 \
__INSERTSORT_V9 = __INSERTSORT_V4
#define __INSERTSORT_A23 \
__INSERTSORT_V8 = __INSERTSORT_V0
#define __INSERTSORT_A24 \
__INSERTSORT_V11 = __INSERTSORT_V6
#define __INSERTSORT_A25 \
__INSERTSORT_V10 = __INSERTSORT_V4
#define __INSERTSORT_A26 \
__INSERTSORT_V9 = __INSERTSORT_V0
#define __INSERTSORT_A27 \
__INSERTSORT_V8 = __INSERTSORT_V2

/* PROCEDURE CALLS */

/* CONDITIONS */

#define __INSERTSORT_A28 \
__INSERTSORT_V6>__INSERTSORT_V4
#define __INSERTSORT_A29 \
__INSERTSORT_V4>__INSERTSORT_V2
#define __INSERTSORT_A30 \
__INSERTSORT_V2>__INSERTSORT_V0

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

#define __INSERTSORT_A31 \

#define __INSERTSORT_A32 \

#define __INSERTSORT_A33 \

#define __INSERTSORT_A34 \

#define __INSERTSORT_A35 \

#define __INSERTSORT_A36 \

#define __INSERTSORT_A37 \

#define __INSERTSORT_A38 \


/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int INSERTSORT_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __INSERTSORT__reset_input () {
__INSERTSORT_V1 = _false;
__INSERTSORT_V3 = _false;
__INSERTSORT_V5 = _false;
__INSERTSORT_V7 = _false;
__INSERTSORT_V12 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __INSERTSORT_R[2] = {_true,
 _false};

/* AUTOMATON ENGINE */

int INSERTSORT () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[11];
E[0] = __INSERTSORT_R[1]&&!(__INSERTSORT_R[0]);
E[1] = E[0]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 5\n"),
#endif
__INSERTSORT_A5);
E[2] = E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 28\n"),
#endif
__INSERTSORT_A28);
if (E[2]) {
__INSERTSORT_A16;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A16\n");
#endif
}
if (E[2]) {
__INSERTSORT_A17;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A17\n");
#endif
}
if (E[2]) {
__INSERTSORT_A18;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A18\n");
#endif
}
if (E[2]) {
__INSERTSORT_A19;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A19\n");
#endif
}
E[1] = E[1]&&!(E[2]);
E[3] = E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 29\n"),
#endif
__INSERTSORT_A29);
if (E[3]) {
__INSERTSORT_A20;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A20\n");
#endif
}
if (E[3]) {
__INSERTSORT_A21;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A21\n");
#endif
}
if (E[3]) {
__INSERTSORT_A22;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A22\n");
#endif
}
if (E[3]) {
__INSERTSORT_A23;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A23\n");
#endif
}
E[1] = E[1]&&!(E[3]);
E[4] = E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 30\n"),
#endif
__INSERTSORT_A30);
if (E[4]) {
__INSERTSORT_A24;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A24\n");
#endif
}
if (E[4]) {
__INSERTSORT_A25;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A25\n");
#endif
}
if (E[4]) {
__INSERTSORT_A26;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A26\n");
#endif
}
if (E[4]) {
__INSERTSORT_A27;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A27\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__INSERTSORT_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A6\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__INSERTSORT_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A7\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__INSERTSORT_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A8\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__INSERTSORT_A9;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A9\n");
#endif
}
E[1] = E[1]&&!(E[4]);
if (E[1]) {
__INSERTSORT_A10;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A10\n");
#endif
}
E[5] = E[2]||E[3]||E[4];
E[6] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__INSERTSORT_A1));
if (E[6]) {
__INSERTSORT_A31;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A31\n");
#endif
}
E[7] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__INSERTSORT_A2));
if (E[7]) {
__INSERTSORT_A32;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A32\n");
#endif
}
E[8] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__INSERTSORT_A3));
if (E[8]) {
__INSERTSORT_A33;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A33\n");
#endif
}
E[9] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 4\n"),
#endif
__INSERTSORT_A4));
if (E[9]) {
__INSERTSORT_A34;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A34\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A35;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A35\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A36;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A36\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A37;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A37\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A38;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A38\n");
#endif
}
E[10] = E[2]||E[3]||E[4]||E[1];
E[0] = E[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 5\n"),
#endif
__INSERTSORT_A5));
__INSERTSORT_R[1] = __INSERTSORT_R[0]||(__INSERTSORT_R[1]&&E[0]);
E[0] = __INSERTSORT_R[1];
__INSERTSORT_R[0] = !(_true);
__INSERTSORT__reset_input();
return E[0];
}

/* AUTOMATON RESET */

int INSERTSORT_reset () {
__INSERTSORT_R[0] = _true;
__INSERTSORT_R[1] = _false;
__INSERTSORT__reset_input();
return 0;
}
