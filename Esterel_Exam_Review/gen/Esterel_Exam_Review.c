/* sscc : C CODE OF SORTED EQUATIONS Esterel_Exam_Review - INLINE MODE */

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
#define __Esterel_Exam_Review_GENERIC_TEST(TEST) return TEST;
typedef void (*__Esterel_Exam_Review_APF)();
static __Esterel_Exam_Review_APF *__Esterel_Exam_Review_PActionArray;

                                 
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __Esterel_Exam_Review_V0;
static boolean __Esterel_Exam_Review_V1;
static boolean __Esterel_Exam_Review_V2;
static integer __Esterel_Exam_Review_V3;
static boolean __Esterel_Exam_Review_V4;


/* INPUT FUNCTIONS */

void Esterel_Exam_Review_I_RANDOM1 () {
__Esterel_Exam_Review_V0 = _true;
}
void Esterel_Exam_Review_I_RANDOM2 () {
__Esterel_Exam_Review_V1 = _true;
}
void Esterel_Exam_Review_I_RANDOM3 () {
__Esterel_Exam_Review_V2 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __Esterel_Exam_Review_A1 \
__Esterel_Exam_Review_V0
#define __Esterel_Exam_Review_A2 \
__Esterel_Exam_Review_V1
#define __Esterel_Exam_Review_A3 \
__Esterel_Exam_Review_V2

/* OUTPUT ACTIONS */

#define __Esterel_Exam_Review_A4 \
Esterel_Exam_Review_O_TA_INREVIEW()
#define __Esterel_Exam_Review_A5 \
Esterel_Exam_Review_O_TA_SLEEPING()
#define __Esterel_Exam_Review_A6 \
Esterel_Exam_Review_O_WANT_REVIEW()
#define __Esterel_Exam_Review_A7 \
Esterel_Exam_Review_O_STUD_WANTREVIEW()
#define __Esterel_Exam_Review_A8 \
Esterel_Exam_Review_O_STUD_INREVIEW()
#define __Esterel_Exam_Review_A9 \
Esterel_Exam_Review_O_STUDENTS_WAITING(__Esterel_Exam_Review_V3)

/* ASSIGNMENTS */

#define __Esterel_Exam_Review_A10 \
__Esterel_Exam_Review_V0 = _false
#define __Esterel_Exam_Review_A11 \
__Esterel_Exam_Review_V1 = _false
#define __Esterel_Exam_Review_A12 \
__Esterel_Exam_Review_V2 = _false
#define __Esterel_Exam_Review_A13 \
__Esterel_Exam_Review_V4 = _false
#define __Esterel_Exam_Review_A14 \
__Esterel_Exam_Review_V3 = 0
#define __Esterel_Exam_Review_A15 \
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(-(1))),(__Esterel_Exam_Review_V4=_true,-(1)))

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int Esterel_Exam_Review_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __Esterel_Exam_Review__reset_input () {
__Esterel_Exam_Review_V0 = _false;
__Esterel_Exam_Review_V1 = _false;
__Esterel_Exam_Review_V2 = _false;
__Esterel_Exam_Review_V4 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __Esterel_Exam_Review_R[7] = {_false,
 _true,
 _false,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int Esterel_Exam_Review () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[8];
if (__Esterel_Exam_Review_R[1]) {
__Esterel_Exam_Review_A14;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A14\n");
#endif
}
E[0] = (__Esterel_Exam_Review_R[6]&&!(__Esterel_Exam_Review_R[1]))||__Esterel_Exam_Review_R[1];
E[1] = E[0]&&__Esterel_Exam_Review_R[0];
E[2] = (__Esterel_Exam_Review_R[5]&&!(__Esterel_Exam_Review_R[1]))||__Esterel_Exam_Review_R[1];
E[0] = E[0]&&!(__Esterel_Exam_Review_R[0]);
if (!(_true)) {
__Esterel_Exam_Review_A15;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A15\n");
#endif
}
if (!(_true)) {
__Esterel_Exam_Review_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A4\n");
#endif
}
E[3] = E[1]||E[0];
if (E[3]) {
__Esterel_Exam_Review_A5;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A5\n");
#endif
}
E[0] = E[1]||E[0];
E[1] = __Esterel_Exam_Review_R[2]&&!(__Esterel_Exam_Review_R[1]);
E[4] = E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__Esterel_Exam_Review_A1);
E[1] = E[1]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__Esterel_Exam_Review_A1));
E[1] = __Esterel_Exam_Review_R[1]||(E[4]&&E[3])||(E[4]&&!(E[3]))||(__Esterel_Exam_Review_R[2]&&E[1]);
E[4] = __Esterel_Exam_Review_R[3]&&!(__Esterel_Exam_Review_R[1]);
E[5] = E[4]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__Esterel_Exam_Review_A2);
E[4] = E[4]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__Esterel_Exam_Review_A2));
E[4] = __Esterel_Exam_Review_R[1]||(E[5]&&E[3])||(E[5]&&!(E[3]))||(__Esterel_Exam_Review_R[3]&&E[4]);
E[5] = __Esterel_Exam_Review_R[4]&&!(__Esterel_Exam_Review_R[1]);
E[6] = E[5]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__Esterel_Exam_Review_A3);
E[5] = E[5]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__Esterel_Exam_Review_A3));
E[5] = __Esterel_Exam_Review_R[1]||(E[6]&&E[3])||(E[6]&&!(E[3]))||(__Esterel_Exam_Review_R[4]&&E[5]);
E[6] = __Esterel_Exam_Review_R[6]||__Esterel_Exam_Review_R[2]||__Esterel_Exam_Review_R[3]||__Esterel_Exam_Review_R[4]||__Esterel_Exam_Review_R[5];
E[6] = (E[0]||E[1]||E[4]||E[5]||E[2])&&((E[6]&&!(__Esterel_Exam_Review_R[6]))||E[0])&&((E[6]&&!(__Esterel_Exam_Review_R[2]))||E[1])&&((E[6]&&!(__Esterel_Exam_Review_R[3]))||E[4])&&((E[6]&&!(__Esterel_Exam_Review_R[4]))||E[5])&&((E[6]&&!(__Esterel_Exam_Review_R[5]))||E[2]);
__Esterel_Exam_Review_R[0] = E[3]&&E[6];
if (!(_true)) {
__Esterel_Exam_Review_A6;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A6\n");
#endif
}
if (!(_true)) {
__Esterel_Exam_Review_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A7\n");
#endif
}
if (!(_true)) {
__Esterel_Exam_Review_A8;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A8\n");
#endif
}
if (!(_true)) {
__Esterel_Exam_Review_A9;
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A9\n");
#endif
}
E[7] = !(_true);
__Esterel_Exam_Review_R[1] = !(_true);
__Esterel_Exam_Review_R[2] = E[1];
__Esterel_Exam_Review_R[3] = E[4];
__Esterel_Exam_Review_R[4] = E[5];
__Esterel_Exam_Review_R[5] = E[2];
__Esterel_Exam_Review_R[6] = E[0];
__Esterel_Exam_Review__reset_input();
return E[6];
}

/* AUTOMATON RESET */

int Esterel_Exam_Review_reset () {
__Esterel_Exam_Review_R[0] = _false;
__Esterel_Exam_Review_R[1] = _true;
__Esterel_Exam_Review_R[2] = _false;
__Esterel_Exam_Review_R[3] = _false;
__Esterel_Exam_Review_R[4] = _false;
__Esterel_Exam_Review_R[5] = _false;
__Esterel_Exam_Review_R[6] = _false;
__Esterel_Exam_Review__reset_input();
return 0;
}
