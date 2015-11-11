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
static integer __INSERTSORT_V13;
static integer __INSERTSORT_V14;
static integer __INSERTSORT_V15;
static integer __INSERTSORT_V16;
static integer __INSERTSORT_V17;
static integer __INSERTSORT_V18;
static integer __INSERTSORT_V19;
static integer __INSERTSORT_V20;
static integer __INSERTSORT_V21;


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
__INSERTSORT_V13 = 0
#define __INSERTSORT_A17 \
__INSERTSORT_V14 = 0
#define __INSERTSORT_A18 \
__INSERTSORT_V15 = 0
#define __INSERTSORT_A19 \
__INSERTSORT_V16 = 0
#define __INSERTSORT_A20 \
__INSERTSORT_V8 = __INSERTSORT_V13
#define __INSERTSORT_A21 \
__INSERTSORT_V9 = __INSERTSORT_V14
#define __INSERTSORT_A22 \
__INSERTSORT_V10 = __INSERTSORT_V15
#define __INSERTSORT_A23 \
__INSERTSORT_V11 = __INSERTSORT_V16
#define __INSERTSORT_A24 \
__INSERTSORT_V13 = __INSERTSORT_V0
#define __INSERTSORT_A25 \
__INSERTSORT_V14 = __INSERTSORT_V2
#define __INSERTSORT_A26 \
__INSERTSORT_V15 = __INSERTSORT_V4
#define __INSERTSORT_A27 \
__INSERTSORT_V16 = __INSERTSORT_V6
#define __INSERTSORT_A28 \
__INSERTSORT_V17 = 1
#define __INSERTSORT_A29 \
__INSERTSORT_V18 = __INSERTSORT_V17
#define __INSERTSORT_A30 \
__INSERTSORT_V19 = __INSERTSORT_V13
#define __INSERTSORT_A31 \
__INSERTSORT_V20 = __INSERTSORT_V14
#define __INSERTSORT_A32 \
__INSERTSORT_V19 = __INSERTSORT_V14
#define __INSERTSORT_A33 \
__INSERTSORT_V20 = __INSERTSORT_V15
#define __INSERTSORT_A34 \
__INSERTSORT_V19 = __INSERTSORT_V15
#define __INSERTSORT_A35 \
__INSERTSORT_V20 = __INSERTSORT_V16
#define __INSERTSORT_A36 \
__INSERTSORT_V21 = __INSERTSORT_V20
#define __INSERTSORT_A37 \
__INSERTSORT_V20 = __INSERTSORT_V19
#define __INSERTSORT_A38 \
__INSERTSORT_V19 = __INSERTSORT_V21
#define __INSERTSORT_A39 \
__INSERTSORT_V13 = __INSERTSORT_V19
#define __INSERTSORT_A40 \
__INSERTSORT_V14 = __INSERTSORT_V20
#define __INSERTSORT_A41 \
__INSERTSORT_V14 = __INSERTSORT_V19
#define __INSERTSORT_A42 \
__INSERTSORT_V15 = __INSERTSORT_V20
#define __INSERTSORT_A43 \
__INSERTSORT_V15 = __INSERTSORT_V19
#define __INSERTSORT_A44 \
__INSERTSORT_V16 = __INSERTSORT_V20
#define __INSERTSORT_A45 \
__INSERTSORT_V18 = __INSERTSORT_V18-1
#define __INSERTSORT_A46 \
__INSERTSORT_V8 = __INSERTSORT_V13
#define __INSERTSORT_A47 \
__INSERTSORT_V9 = __INSERTSORT_V14
#define __INSERTSORT_A48 \
__INSERTSORT_V10 = __INSERTSORT_V15
#define __INSERTSORT_A49 \
__INSERTSORT_V11 = __INSERTSORT_V16
#define __INSERTSORT_A50 \
__INSERTSORT_V17 = __INSERTSORT_V17+1
#define __INSERTSORT_A51 \
__INSERTSORT_V8 = __INSERTSORT_V13
#define __INSERTSORT_A52 \
__INSERTSORT_V9 = __INSERTSORT_V14
#define __INSERTSORT_A53 \
__INSERTSORT_V10 = __INSERTSORT_V15
#define __INSERTSORT_A54 \
__INSERTSORT_V11 = __INSERTSORT_V16

/* PROCEDURE CALLS */

/* CONDITIONS */

#define __INSERTSORT_A55 \
__INSERTSORT_V17>=4
#define __INSERTSORT_A56 \
__INSERTSORT_V18==1
#define __INSERTSORT_A57 \
__INSERTSORT_V18==2
#define __INSERTSORT_A58 \
__INSERTSORT_V18==3
#define __INSERTSORT_A59 \
__INSERTSORT_V20>=__INSERTSORT_V19
#define __INSERTSORT_A60 \
__INSERTSORT_V18==1
#define __INSERTSORT_A61 \
__INSERTSORT_V18==2
#define __INSERTSORT_A62 \
__INSERTSORT_V18==3

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

#define __INSERTSORT_A63 \

#define __INSERTSORT_A64 \

#define __INSERTSORT_A65 \

#define __INSERTSORT_A66 \

#define __INSERTSORT_A67 \

#define __INSERTSORT_A68 \

#define __INSERTSORT_A69 \

#define __INSERTSORT_A70 \

#define __INSERTSORT_A71 \

#define __INSERTSORT_A72 \


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

static __SSC_BIT_TYPE __INSERTSORT_R[8] = {_true,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int INSERTSORT () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[23];
E[0] = __INSERTSORT_R[1]||__INSERTSORT_R[2]||__INSERTSORT_R[3]||__INSERTSORT_R[4]||__INSERTSORT_R[5];
E[1] = E[0]&&!(__INSERTSORT_R[0]);
E[2] = E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 5\n"),
#endif
__INSERTSORT_A5);
if (E[2]) {
__INSERTSORT_A24;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A24\n");
#endif
}
if (E[2]) {
__INSERTSORT_A25;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A25\n");
#endif
}
if (E[2]) {
__INSERTSORT_A26;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A26\n");
#endif
}
if (E[2]) {
__INSERTSORT_A27;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A27\n");
#endif
}
if (E[2]) {
__INSERTSORT_A28;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A28\n");
#endif
}
E[3] = (__INSERTSORT_R[7]&&!(__INSERTSORT_R[0]))||E[2];
E[4] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 55\n"),
#endif
__INSERTSORT_A55);
E[5] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__INSERTSORT_A1));
if (E[5]) {
__INSERTSORT_A63;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A63\n");
#endif
}
E[6] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__INSERTSORT_A2));
if (E[6]) {
__INSERTSORT_A64;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A64\n");
#endif
}
E[7] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__INSERTSORT_A3));
if (E[7]) {
__INSERTSORT_A65;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A65\n");
#endif
}
E[8] = __INSERTSORT_R[0]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 4\n"),
#endif
__INSERTSORT_A4));
if (E[8]) {
__INSERTSORT_A66;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A66\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A67;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A67\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A68;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A68\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A69;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A69\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A70;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A70\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A16;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A16\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A17;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A17\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A18;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A18\n");
#endif
}
if (__INSERTSORT_R[0]) {
__INSERTSORT_A19;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A19\n");
#endif
}
E[9] = E[4]||__INSERTSORT_R[0];
E[1] = E[1]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 5\n"),
#endif
__INSERTSORT_A5));
E[10] = E[9]||(__INSERTSORT_R[2]&&E[1]);
if (E[10]) {
__INSERTSORT_A20;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A20\n");
#endif
}
E[4] = E[3]&&!(E[4]);
if (E[4]) {
__INSERTSORT_A29;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A29\n");
#endif
}
if (E[4]) {
__INSERTSORT_A71;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A71\n");
#endif
}
if (E[4]) {
__INSERTSORT_A72;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A72\n");
#endif
}
E[3] = (__INSERTSORT_R[6]&&!(__INSERTSORT_R[0]))||E[4];
E[11] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 56\n"),
#endif
__INSERTSORT_A56);
if (E[11]) {
__INSERTSORT_A30;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A30\n");
#endif
}
if (E[11]) {
__INSERTSORT_A31;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A31\n");
#endif
}
E[3] = E[3]&&!(E[11]);
E[12] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 57\n"),
#endif
__INSERTSORT_A57);
if (E[12]) {
__INSERTSORT_A32;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A32\n");
#endif
}
if (E[12]) {
__INSERTSORT_A33;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A33\n");
#endif
}
E[3] = E[3]&&!(E[12]);
E[13] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 58\n"),
#endif
__INSERTSORT_A58);
if (E[13]) {
__INSERTSORT_A34;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A34\n");
#endif
}
if (E[13]) {
__INSERTSORT_A35;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A35\n");
#endif
}
E[3] = E[11]||E[12]||E[13]||(E[3]&&!(E[13]));
E[14] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 59\n"),
#endif
__INSERTSORT_A59);
E[3] = E[3]&&!(E[14]);
if (E[3]) {
__INSERTSORT_A36;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A36\n");
#endif
}
if (E[3]) {
__INSERTSORT_A37;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A37\n");
#endif
}
if (E[3]) {
__INSERTSORT_A38;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A38\n");
#endif
}
E[15] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 60\n"),
#endif
__INSERTSORT_A60);
if (E[15]) {
__INSERTSORT_A39;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A39\n");
#endif
}
if (E[15]) {
__INSERTSORT_A40;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A40\n");
#endif
}
E[16] = E[3]&&!(E[15]);
E[17] = E[16]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 61\n"),
#endif
__INSERTSORT_A61);
if (E[17]) {
__INSERTSORT_A41;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A41\n");
#endif
}
if (E[17]) {
__INSERTSORT_A42;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A42\n");
#endif
}
E[16] = E[16]&&!(E[17]);
E[18] = E[16]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 62\n"),
#endif
__INSERTSORT_A62);
if (E[18]) {
__INSERTSORT_A43;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A43\n");
#endif
}
if (E[18]) {
__INSERTSORT_A44;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A44\n");
#endif
}
E[16] = E[15]||E[17]||E[18]||(E[16]&&!(E[18]));
if (E[16]) {
__INSERTSORT_A45;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A45\n");
#endif
}
if (E[16]) {
__INSERTSORT_A46;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A46\n");
#endif
}
if (E[14]) {
__INSERTSORT_A50;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A50\n");
#endif
}
if (E[14]) {
__INSERTSORT_A51;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A51\n");
#endif
}
if (E[10]||E[16]||E[14]) {
__INSERTSORT_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A6\n");
#endif
}
E[19] = E[9]||(__INSERTSORT_R[3]&&E[1]);
if (E[19]) {
__INSERTSORT_A21;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A21\n");
#endif
}
if (E[16]) {
__INSERTSORT_A47;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A47\n");
#endif
}
if (E[14]) {
__INSERTSORT_A52;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A52\n");
#endif
}
if (E[19]||E[16]||E[14]) {
__INSERTSORT_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A7\n");
#endif
}
E[20] = E[9]||(__INSERTSORT_R[4]&&E[1]);
if (E[20]) {
__INSERTSORT_A22;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A22\n");
#endif
}
if (E[16]) {
__INSERTSORT_A48;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A48\n");
#endif
}
if (E[14]) {
__INSERTSORT_A53;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A53\n");
#endif
}
if (E[20]||E[16]||E[14]) {
__INSERTSORT_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A8\n");
#endif
}
E[21] = E[9]||(__INSERTSORT_R[5]&&E[1]);
if (E[21]) {
__INSERTSORT_A23;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A23\n");
#endif
}
if (E[16]) {
__INSERTSORT_A49;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A49\n");
#endif
}
if (E[14]) {
__INSERTSORT_A54;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A54\n");
#endif
}
if (E[21]||E[16]||E[14]) {
__INSERTSORT_A9;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A9\n");
#endif
}
E[1] = E[9]||(__INSERTSORT_R[1]&&E[1]);
if (E[1]) {
__INSERTSORT_A10;
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A10\n");
#endif
}
E[9] = !(_true);
E[22] = ((E[1]||E[10]||E[19]||E[20]||E[21])&&((E[0]&&!(__INSERTSORT_R[1]))||E[1])&&((E[0]&&!(__INSERTSORT_R[2]))||E[10])&&((E[0]&&!(__INSERTSORT_R[3]))||E[19])&&((E[0]&&!(__INSERTSORT_R[4]))||E[20])&&((E[0]&&!(__INSERTSORT_R[5]))||E[21]))||E[14]||E[16];
E[0] = E[0]||__INSERTSORT_R[7]||__INSERTSORT_R[6];
__INSERTSORT_R[0] = !(_true);
__INSERTSORT_R[1] = E[1];
__INSERTSORT_R[2] = E[10];
__INSERTSORT_R[3] = E[19];
__INSERTSORT_R[4] = E[20];
__INSERTSORT_R[5] = E[21];
__INSERTSORT_R[6] = E[16];
__INSERTSORT_R[7] = E[14];
__INSERTSORT__reset_input();
return E[22];
}

/* AUTOMATON RESET */

int INSERTSORT_reset () {
__INSERTSORT_R[0] = _true;
__INSERTSORT_R[1] = _false;
__INSERTSORT_R[2] = _false;
__INSERTSORT_R[3] = _false;
__INSERTSORT_R[4] = _false;
__INSERTSORT_R[5] = _false;
__INSERTSORT_R[6] = _false;
__INSERTSORT_R[7] = _false;
__INSERTSORT__reset_input();
return 0;
}
