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
static boolean __debug_project_V6;
static integer __debug_project_V7;
static boolean __debug_project_V8;
static integer __debug_project_V9;
static integer __debug_project_V10;
static integer __debug_project_V11;
static integer __debug_project_V12;


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
debug_project_O_TA_INSANE()
#define __debug_project_A12 \
debug_project_O_STUD_INSANE()
#define __debug_project_A13 \
debug_project_O_RACECONDITION()
#define __debug_project_A14 \
debug_project_O_DEADLOCK()
#define __debug_project_A15 \
debug_project_O_TA_TOOSLOW()
#define __debug_project_A16 \
debug_project_O_num_INREVIEWSTUDS(__debug_project_V5)
#define __debug_project_A17 \
debug_project_O_PRIO_counter(__debug_project_V7)
#define __debug_project_A18 \
debug_project_O_STUD_WANTREVIEW1()
#define __debug_project_A19 \
debug_project_O_STUD_INREVIEW1()
#define __debug_project_A20 \
debug_project_O_STUD_WANTREVIEW2()
#define __debug_project_A21 \
debug_project_O_STUD_INREVIEW2()
#define __debug_project_A22 \
debug_project_O_STUD_WANTREVIEW3()
#define __debug_project_A23 \
debug_project_O_STUD_INREVIEW3()

/* ASSIGNMENTS */

#define __debug_project_A24 \
__debug_project_V0 = _false
#define __debug_project_A25 \
__debug_project_V1 = _false
#define __debug_project_A26 \
__debug_project_V2 = _false
#define __debug_project_A27 \
__debug_project_V4 = _false
#define __debug_project_A28 \
__debug_project_V3 = 0
#define __debug_project_A29 \
__debug_project_V6 = _false
#define __debug_project_A30 \
__debug_project_V5 = 0
#define __debug_project_A31 \
__debug_project_V8 = _false
#define __debug_project_A32 \
__debug_project_V7 = 0
#define __debug_project_A33 \
__debug_project_V9 = 0
#define __debug_project_A34 \
__debug_project_V9 = __debug_project_V3
#define __debug_project_A35 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(__debug_project_V9)),(__debug_project_V4=_true,__debug_project_V9))
#define __debug_project_A36 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(-(1))),(__debug_project_V4=_true,-(1)))
#define __debug_project_A37 \
__debug_project_V10 = 0
#define __debug_project_A38 \
__debug_project_V7 = _COND(__debug_project_V8,(__debug_project_V7+(1)),(__debug_project_V8=_true,1))
#define __debug_project_A39 \
__debug_project_V10 = __debug_project_V9
#define __debug_project_A40 \
__debug_project_V10 = __debug_project_V9+2
#define __debug_project_A41 \
__debug_project_V10 = __debug_project_V9
#define __debug_project_A42 \
__debug_project_V10 = __debug_project_V9
#define __debug_project_A43 \
__debug_project_V10 = __debug_project_V9+2
#define __debug_project_A44 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1))
#define __debug_project_A45 \
__debug_project_V10 = __debug_project_V10-1
#define __debug_project_A46 \
__debug_project_V11 = 0
#define __debug_project_A47 \
__debug_project_V7 = _COND(__debug_project_V8,(__debug_project_V7+(2)),(__debug_project_V8=_true,2))
#define __debug_project_A48 \
__debug_project_V11 = __debug_project_V9
#define __debug_project_A49 \
__debug_project_V11 = __debug_project_V9+2
#define __debug_project_A50 \
__debug_project_V11 = __debug_project_V9
#define __debug_project_A51 \
__debug_project_V11 = __debug_project_V9
#define __debug_project_A52 \
__debug_project_V11 = __debug_project_V9+2
#define __debug_project_A53 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1))
#define __debug_project_A54 \
__debug_project_V11 = __debug_project_V11-1
#define __debug_project_A55 \
__debug_project_V12 = 0
#define __debug_project_A56 \
__debug_project_V7 = _COND(__debug_project_V8,(__debug_project_V7+(3)),(__debug_project_V8=_true,3))
#define __debug_project_A57 \
__debug_project_V12 = __debug_project_V9
#define __debug_project_A58 \
__debug_project_V12 = __debug_project_V9+2
#define __debug_project_A59 \
__debug_project_V12 = __debug_project_V9
#define __debug_project_A60 \
__debug_project_V12 = __debug_project_V9
#define __debug_project_A61 \
__debug_project_V12 = __debug_project_V9+2
#define __debug_project_A62 \
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1))
#define __debug_project_A63 \
__debug_project_V12 = __debug_project_V12-1
#define __debug_project_A64 \
__debug_project_V5 = _COND(__debug_project_V6,(__debug_project_V5+(1)),(__debug_project_V6=_true,1))
#define __debug_project_A65 \
__debug_project_V5 = _COND(__debug_project_V6,(__debug_project_V5+(1)),(__debug_project_V6=_true,1))
#define __debug_project_A66 \
__debug_project_V5 = _COND(__debug_project_V6,(__debug_project_V5+(1)),(__debug_project_V6=_true,1))

/* PROCEDURE CALLS */

/* CONDITIONS */

#define __debug_project_A67 \
__debug_project_V9<2
#define __debug_project_A68 \
1==3
#define __debug_project_A69 \
1==2
#define __debug_project_A70 \
__debug_project_V7>=5
#define __debug_project_A71 \
__debug_project_V7==1
#define __debug_project_A72 \
(__debug_project_V7==3)||(__debug_project_V7==4)
#define __debug_project_A73 \
__debug_project_V10<1
#define __debug_project_A74 \
__debug_project_V9<2
#define __debug_project_A75 \
2==3
#define __debug_project_A76 \
2==2
#define __debug_project_A77 \
__debug_project_V7>=5
#define __debug_project_A78 \
__debug_project_V7==1
#define __debug_project_A79 \
(__debug_project_V7==3)||(__debug_project_V7==4)
#define __debug_project_A80 \
__debug_project_V11<1
#define __debug_project_A81 \
__debug_project_V9<2
#define __debug_project_A82 \
3==3
#define __debug_project_A83 \
3==2
#define __debug_project_A84 \
__debug_project_V7>=5
#define __debug_project_A85 \
__debug_project_V7==1
#define __debug_project_A86 \
(__debug_project_V7==3)||(__debug_project_V7==4)
#define __debug_project_A87 \
__debug_project_V12<1
#define __debug_project_A88 \
__debug_project_V5>1

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
__debug_project_V6 = _false;
__debug_project_V8 = _false;
}

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __debug_project_R[22] = {_false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
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
 _false,
 _false};

/* AUTOMATON ENGINE */

int debug_project () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[62];
if (__debug_project_R[8]) {
__debug_project_A28;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A28\n");
#endif
}
if (__debug_project_R[8]) {
__debug_project_A33;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A33\n");
#endif
}
if (__debug_project_R[8]) {
__debug_project_A30;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A30\n");
#endif
}
if (__debug_project_R[8]) {
__debug_project_A32;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A32\n");
#endif
}
E[0] = __debug_project_R[8]||(__debug_project_R[14]&&!(__debug_project_R[8]));
if (E[0]) {
__debug_project_A35;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A35\n");
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
E[3] = (__debug_project_R[12]&&!(__debug_project_R[8]))||__debug_project_R[8];
E[4] = __debug_project_R[9]&&!(__debug_project_R[8]);
E[5] = E[4]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1);
E[6] = __debug_project_R[2]||__debug_project_R[3];
E[7] = E[5]&&!(E[6]);
if (E[7]) {
__debug_project_A37;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A37\n");
#endif
}
if (E[7]) {
__debug_project_A38;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A38\n");
#endif
}
E[8] = E[7]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 67\n"),
#endif
__debug_project_A67);
E[9] = E[8]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 68\n"),
#endif
__debug_project_A68);
if (E[9]) {
__debug_project_A39;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A39\n");
#endif
}
E[10] = E[8]&&!(E[9]);
E[11] = E[10]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 69\n"),
#endif
__debug_project_A69);
E[12] = __debug_project_R[10]&&!(__debug_project_R[8]);
E[13] = E[12]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2);
E[14] = __debug_project_R[4]||__debug_project_R[5];
E[15] = E[13]&&!(E[14]);
if (E[15]) {
__debug_project_A46;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A46\n");
#endif
}
if (E[15]) {
__debug_project_A47;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A47\n");
#endif
}
E[16] = __debug_project_R[11]&&!(__debug_project_R[8]);
E[17] = E[16]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3);
E[18] = __debug_project_R[6]||__debug_project_R[7];
E[19] = E[17]&&!(E[18]);
if (E[19]) {
__debug_project_A55;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A55\n");
#endif
}
if (E[19]) {
__debug_project_A56;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A56\n");
#endif
}
E[20] = E[11]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 70\n"),
#endif
__debug_project_A70);
if (E[20]) {
__debug_project_A40;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A40\n");
#endif
}
E[21] = E[11]&&!(E[20]);
if (E[21]) {
__debug_project_A41;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A41\n");
#endif
}
E[11] = E[10]&&!(E[11]);
E[10] = E[11]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 71\n"),
#endif
__debug_project_A71);
if (E[10]) {
__debug_project_A42;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A42\n");
#endif
}
E[11] = E[11]&&!(E[10]);
E[22] = E[11]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 72\n"),
#endif
__debug_project_A72);
if (E[22]) {
__debug_project_A43;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A43\n");
#endif
}
E[23] = E[9]||E[20]||E[21]||E[10]||E[22];
if (E[23]) {
__debug_project_A44;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A44\n");
#endif
}
E[24] = E[23]||(__debug_project_R[15]&&!(__debug_project_R[8]));
E[25] = E[15]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 74\n"),
#endif
__debug_project_A74);
E[26] = E[25]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 75\n"),
#endif
__debug_project_A75);
if (E[26]) {
__debug_project_A48;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A48\n");
#endif
}
E[27] = E[25]&&!(E[26]);
E[28] = E[27]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 76\n"),
#endif
__debug_project_A76);
E[29] = E[28]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 77\n"),
#endif
__debug_project_A77);
if (E[29]) {
__debug_project_A49;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A49\n");
#endif
}
E[30] = E[28]&&!(E[29]);
if (E[30]) {
__debug_project_A50;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A50\n");
#endif
}
E[28] = E[27]&&!(E[28]);
E[27] = E[28]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 78\n"),
#endif
__debug_project_A78);
if (E[27]) {
__debug_project_A51;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A51\n");
#endif
}
E[28] = E[28]&&!(E[27]);
E[31] = E[28]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 79\n"),
#endif
__debug_project_A79);
if (E[31]) {
__debug_project_A52;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A52\n");
#endif
}
E[32] = E[26]||E[29]||E[30]||E[27]||E[31];
if (E[32]) {
__debug_project_A53;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A53\n");
#endif
}
E[33] = E[32]||(__debug_project_R[17]&&!(__debug_project_R[8]));
E[34] = E[19]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 81\n"),
#endif
__debug_project_A81);
E[35] = E[34]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 82\n"),
#endif
__debug_project_A82);
if (E[35]) {
__debug_project_A57;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A57\n");
#endif
}
E[36] = E[34]&&!(E[35]);
E[37] = E[36]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 83\n"),
#endif
__debug_project_A83);
E[38] = E[37]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 84\n"),
#endif
__debug_project_A84);
if (E[38]) {
__debug_project_A58;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A58\n");
#endif
}
E[39] = E[37]&&!(E[38]);
if (E[39]) {
__debug_project_A59;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A59\n");
#endif
}
E[37] = E[36]&&!(E[37]);
E[36] = E[37]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 85\n"),
#endif
__debug_project_A85);
if (E[36]) {
__debug_project_A60;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A60\n");
#endif
}
E[37] = E[37]&&!(E[36]);
E[40] = E[37]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 86\n"),
#endif
__debug_project_A86);
if (E[40]) {
__debug_project_A61;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A61\n");
#endif
}
E[41] = E[35]||E[38]||E[39]||E[36]||E[40];
if (E[41]) {
__debug_project_A62;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A62\n");
#endif
}
E[42] = E[41]||(__debug_project_R[19]&&!(__debug_project_R[8]));
E[43] = E[24]||E[33]||E[42];
E[44] = E[3]&&E[43];
if (E[44]) {
__debug_project_A7;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A7\n");
#endif
}
if (E[1]) {
__debug_project_A36;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A36\n");
#endif
}
E[45] = E[1]||E[2];
E[46] = __debug_project_R[16]&&!(__debug_project_R[8]);
E[4] = E[4]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1));
E[4] = __debug_project_R[8]||(E[5]&&E[6])||E[46]||(E[11]&&!(E[22]))||(E[7]&&!(E[8]))||(__debug_project_R[9]&&E[4]);
if (E[24]) {
__debug_project_A45;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A45\n");
#endif
}
E[8] = E[24]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 73\n"),
#endif
__debug_project_A73);
E[11] = E[24]&&!(E[8]);
E[6] = E[8]||E[11];
E[5] = __debug_project_R[18]&&!(__debug_project_R[8]);
E[12] = E[12]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2));
E[12] = __debug_project_R[8]||(E[13]&&E[14])||E[5]||(E[28]&&!(E[31]))||(E[15]&&!(E[25]))||(__debug_project_R[10]&&E[12]);
if (E[33]) {
__debug_project_A54;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A54\n");
#endif
}
E[25] = E[33]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 80\n"),
#endif
__debug_project_A80);
E[28] = E[33]&&!(E[25]);
E[14] = E[25]||E[28];
E[13] = __debug_project_R[20]&&!(__debug_project_R[8]);
E[16] = E[16]&&!((
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3));
E[16] = __debug_project_R[8]||(E[17]&&E[18])||E[13]||(E[37]&&!(E[40]))||(E[19]&&!(E[34]))||(__debug_project_R[11]&&E[16]);
if (E[42]) {
__debug_project_A63;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A63\n");
#endif
}
E[34] = E[42]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 87\n"),
#endif
__debug_project_A87);
E[37] = E[42]&&!(E[34]);
E[18] = E[34]||E[37];
E[43] = E[44]||(E[3]&&!(E[43]));
E[3] = (__debug_project_R[13]&&!(__debug_project_R[8]))||__debug_project_R[8];
E[17] = E[46]||E[5]||E[13];
E[47] = E[3]&&E[17];
E[17] = E[47]||(E[3]&&!(E[17]));
E[3] = (__debug_project_R[21]&&!(__debug_project_R[8]))||__debug_project_R[8];
E[48] = E[1]&&E[2];
E[49] = E[3]&&E[48];
E[48] = E[49]||(E[3]&&!(E[48]));
E[3] = E[46]&&E[24];
E[50] = E[48]&&E[3];
E[3] = E[50]||(E[48]&&!(E[3]));
E[48] = E[5]&&E[33];
E[51] = E[3]&&E[48];
E[48] = E[51]||(E[3]&&!(E[48]));
E[3] = E[13]&&E[42];
E[52] = E[48]&&E[3];
E[3] = E[52]||(E[48]&&!(E[3]));
E[48] = E[3]&&E[46];
if (E[48]) {
__debug_project_A64;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A64\n");
#endif
}
E[3] = E[48]||(E[3]&&!(E[46]));
E[53] = E[3]&&E[5];
if (E[53]) {
__debug_project_A65;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A65\n");
#endif
}
E[3] = E[53]||(E[3]&&!(E[5]));
E[54] = E[3]&&E[13];
if (E[54]) {
__debug_project_A66;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A66\n");
#endif
}
E[3] = E[54]||(E[3]&&!(E[13]));
E[55] = E[3]&&(
#ifdef TRACE_ACTION
fprintf(stderr, "test 88\n"),
#endif
__debug_project_A88);
E[3] = E[55]||(E[3]&&!(E[55]));
E[56] = E[2]&&E[44];
E[57] = E[3]&&E[56];
E[56] = E[57]||(E[3]&&!(E[56]));
E[3] = E[56]&&__debug_project_R[1];
E[58] = E[3]&&E[57];
E[56] = E[58]||(E[3]&&!(E[57]))||(E[56]&&!(__debug_project_R[1]));
E[3] = __debug_project_R[9]||__debug_project_R[16]||__debug_project_R[15];
E[59] = __debug_project_R[10]||__debug_project_R[18]||__debug_project_R[17];
E[60] = __debug_project_R[11]||__debug_project_R[20]||__debug_project_R[19];
E[61] = __debug_project_R[14]||E[3]||E[59]||E[60]||__debug_project_R[12]||__debug_project_R[13]||__debug_project_R[21];
E[61] = (E[45]||E[4]||E[6]||E[12]||E[14]||E[16]||E[18]||E[43]||E[17]||E[56])&&((E[61]&&!(__debug_project_R[14]))||E[45])&&((E[61]&&!(E[3]))||E[4]||E[6])&&((E[61]&&!(E[59]))||E[12]||E[14])&&((E[61]&&!(E[60]))||E[16]||E[18])&&((E[61]&&!(__debug_project_R[12]))||E[43])&&((E[61]&&!(__debug_project_R[13]))||E[17])&&((E[61]&&!(__debug_project_R[21]))||E[56]);
__debug_project_R[0] = E[44]&&E[61];
if (E[47]) {
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
E[18] = E[0]||E[1]||E[23]||E[32]||E[41];
if (E[18]) {
__debug_project_A10;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A10\n");
#endif
}
if (E[18]&&E[61]) {
__debug_project_A34;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A34\n");
#endif
}
if (E[49]) {
__debug_project_A11;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A11\n");
#endif
}
if (E[50]||E[51]||E[52]) {
__debug_project_A12;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A12\n");
#endif
}
if (E[55]) {
__debug_project_A13;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A13\n");
#endif
}
if (E[57]) {
__debug_project_A14;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A14\n");
#endif
}
__debug_project_R[1] = E[57]&&E[61];
if (E[58]) {
__debug_project_A15;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A15\n");
#endif
}
if (E[48]||E[53]||E[54]) {
__debug_project_A16;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A16\n");
#endif
}
if (E[7]||E[15]||E[19]) {
__debug_project_A17;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A17\n");
#endif
}
if (E[24]) {
__debug_project_A18;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A18\n");
#endif
}
__debug_project_R[2] = E[24]&&E[61];
if (E[46]) {
__debug_project_A19;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A19\n");
#endif
}
__debug_project_R[3] = E[46]&&E[61];
if (E[33]) {
__debug_project_A20;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A20\n");
#endif
}
__debug_project_R[4] = E[33]&&E[61];
if (E[5]) {
__debug_project_A21;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A21\n");
#endif
}
__debug_project_R[5] = E[5]&&E[61];
if (E[42]) {
__debug_project_A22;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A22\n");
#endif
}
__debug_project_R[6] = E[42]&&E[61];
if (E[13]) {
__debug_project_A23;
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A23\n");
#endif
}
__debug_project_R[7] = E[13]&&E[61];
E[60] = !(_true);
__debug_project_R[8] = !(_true);
__debug_project_R[9] = E[4];
__debug_project_R[10] = E[12];
__debug_project_R[11] = E[16];
__debug_project_R[12] = E[43];
__debug_project_R[13] = E[17];
__debug_project_R[14] = E[45];
__debug_project_R[15] = E[11];
__debug_project_R[16] = E[8];
__debug_project_R[17] = E[28];
__debug_project_R[18] = E[25];
__debug_project_R[19] = E[37];
__debug_project_R[20] = E[34];
__debug_project_R[21] = E[56];
__debug_project__reset_input();
return E[61];
}

/* AUTOMATON RESET */

int debug_project_reset () {
__debug_project_R[0] = _false;
__debug_project_R[1] = _false;
__debug_project_R[2] = _false;
__debug_project_R[3] = _false;
__debug_project_R[4] = _false;
__debug_project_R[5] = _false;
__debug_project_R[6] = _false;
__debug_project_R[7] = _false;
__debug_project_R[8] = _true;
__debug_project_R[9] = _false;
__debug_project_R[10] = _false;
__debug_project_R[11] = _false;
__debug_project_R[12] = _false;
__debug_project_R[13] = _false;
__debug_project_R[14] = _false;
__debug_project_R[15] = _false;
__debug_project_R[16] = _false;
__debug_project_R[17] = _false;
__debug_project_R[18] = _false;
__debug_project_R[19] = _false;
__debug_project_R[20] = _false;
__debug_project_R[21] = _false;
__debug_project__reset_input();
return 0;
}
