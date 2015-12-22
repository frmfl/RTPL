/* sscc : C CODE OF SORTED EQUATIONS tutorial_1 - INLINE MODE */

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
#define __tutorial_1_GENERIC_TEST(TEST) return TEST;
typedef void (*__tutorial_1_APF)();
static __tutorial_1_APF *__tutorial_1_PActionArray;

                        
/* EXTERN DECLARATIONS */

#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __tutorial_1_V0;
static boolean __tutorial_1_V1;
static boolean __tutorial_1_V2;


/* INPUT FUNCTIONS */

void tutorial_1_I_C () {
__tutorial_1_V0 = _true;
}
void tutorial_1_I_D () {
__tutorial_1_V1 = _true;
}
void tutorial_1_I_R () {
__tutorial_1_V2 = _true;
}

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

#define __tutorial_1_A1 \
__tutorial_1_V0
#define __tutorial_1_A2 \
__tutorial_1_V1
#define __tutorial_1_A3 \
__tutorial_1_V2

/* OUTPUT ACTIONS */

#define __tutorial_1_A4 \
tutorial_1_O_O()

/* ASSIGNMENTS */

#define __tutorial_1_A5 \
__tutorial_1_V0 = _false
#define __tutorial_1_A6 \
__tutorial_1_V1 = _false
#define __tutorial_1_A7 \
__tutorial_1_V2 = _false

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

int tutorial_1_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */



static void __tutorial_1__reset_input () {
__tutorial_1_V0 = _false;
__tutorial_1_V1 = _false;
__tutorial_1_V2 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __tutorial_1_R[4] = {_true,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int tutorial_1 () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[10];
E[0] = __tutorial_1_R[1]||__tutorial_1_R[2];
E[1] = (__tutorial_1_R[3]||E[0])&&!(__tutorial_1_R[0]);
E[2] = E[1]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__tutorial_1_A3);
E[2] = E[2]||__tutorial_1_R[0];
E[3] = E[2]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_1_A1);
E[1] = E[1]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__tutorial_1_A3));
E[4] = __tutorial_1_R[1]&&E[1];
E[5] = E[4]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_1_A1);
E[6] = E[2]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2);
E[7] = __tutorial_1_R[2]&&E[1];
E[8] = E[7]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2);
E[9] = (E[0]&&!(__tutorial_1_R[1]))||E[3]||E[5];
E[0] = (E[0]&&!(__tutorial_1_R[2]))||E[6]||E[8];
E[8] = (E[3]||E[5]||E[6]||E[8])&&E[9]&&E[0];
if (E[8]) {
__tutorial_1_A4;
#ifdef TRACE_ACTION
fprintf(stderr, "__tutorial_1_A4\n");
#endif
}
E[6] = !(_true);
__tutorial_1_R[3] = E[8]||(__tutorial_1_R[3]&&E[1]);
E[1] = E[2]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_1_A1));
E[4] = E[4]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_1_A1));
__tutorial_1_R[1] = E[1]||(__tutorial_1_R[1]&&E[4]);
E[2] = E[2]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2));
E[7] = E[7]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2));
__tutorial_1_R[2] = E[2]||(__tutorial_1_R[2]&&E[7]);
E[0] = __tutorial_1_R[3]||((__tutorial_1_R[1]||__tutorial_1_R[2])&&(E[9]||__tutorial_1_R[1])&&(E[0]||__tutorial_1_R[2]));
__tutorial_1_R[0] = !(_true);
__tutorial_1__reset_input();
return E[0];
}

/* AUTOMATON RESET */

int tutorial_1_reset () {
__tutorial_1_R[0] = _true;
__tutorial_1_R[1] = _false;
__tutorial_1_R[2] = _false;
__tutorial_1_R[3] = _false;
__tutorial_1__reset_input();
return 0;
}
