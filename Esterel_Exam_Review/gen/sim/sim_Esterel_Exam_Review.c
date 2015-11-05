/* sscc : C CODE OF SORTED EQUATIONS Esterel_Exam_Review - SIMULATION MODE */

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
#define CSIMUL_H_LOADED
typedef struct {char text[STRLEN];} symbolic;
extern void _boolean(boolean*, boolean);
extern boolean _eq_boolean(boolean, boolean);
extern boolean _ne_boolean(boolean, boolean);
extern boolean _cond_boolean(boolean ,boolean ,boolean);
extern char* _boolean_to_text(boolean);
extern int _check_boolean(char*);
extern void _text_to_boolean(boolean*, char*);
extern void _integer(integer*, integer);
extern boolean _eq_integer(integer, integer);
extern boolean _ne_integer(integer, integer);
extern integer _cond_integer(boolean ,integer ,integer);
extern char* _integer_to_text(integer);
extern int _check_integer(char*);
extern void _text_to_integer(integer*, char*);
extern void _string(string, string);
extern boolean _eq_string(string, string);
extern boolean _ne_string(string, string);
extern string _cond_string(boolean ,string ,string);
extern char* _string_to_text(string);
extern int _check_string(char*);
extern void _text_to_string(string, char*);
extern void _float(float*, float);
extern boolean _eq_float(float, float);
extern boolean _ne_float(float, float);
extern float _cond_float(boolean ,float ,float);
extern char* _float_to_text(float);
extern int _check_float(char*);
extern void _text_to_float(float*, char*);
extern void _double(double*, double);
extern boolean _eq_double(double, double);
extern boolean _ne_double(double, double);
extern double _cond_double(boolean ,double ,double);
extern char* _double_to_text(double);
extern int _check_double(char*);
extern void _text_to_double(double*, char*);
extern void _symbolic(symbolic*, symbolic);
extern boolean _eq_symbolic(symbolic, symbolic);
extern boolean _ne_symbolic(symbolic, symbolic);
extern symbolic _cond_symbolic(boolean ,symbolic ,symbolic);
extern char* _symbolic_to_text(symbolic);
extern int _check_symbolic(char*);
extern void _text_to_symbolic(symbolic*, char*);
extern char* __PredefinedTypeToText(int, char*);
#define _true 1
#define _false 0
#define __Esterel_Exam_Review_GENERIC_TEST(TEST) return TEST;
typedef void (*__Esterel_Exam_Review_APF)();
static __Esterel_Exam_Review_APF *__Esterel_Exam_Review_PActionArray;
static int **__Esterel_Exam_Review_PCheckArray;
struct __SourcePoint {
int linkback;
int line;
int column;
int instance_index;
};
struct __InstanceEntry {
char *module_name;
int father_index;
char *dir_name;
char *file_name;
struct __SourcePoint source_point;
struct __SourcePoint end_point;
struct __SourcePoint instance_point;
};
struct __TaskEntry {
char *name;
int   nb_args_ref;
int   nb_args_val;
int  *type_codes_array;
struct __SourcePoint source_point;
};
struct __SignalEntry {
char *name;
int code;
int variable_index;
int present;
struct __SourcePoint source_point;
int number_of_emit_source_points;
struct __SourcePoint* emit_source_point_array;
int number_of_present_source_points;
struct __SourcePoint* present_source_point_array;
int number_of_access_source_points;
struct __SourcePoint* access_source_point_array;
};
struct __InputEntry {
char *name;
int hash;
char *type_name;
int is_a_sensor;
int type_code;
int multiple;
int signal_index;
int (*p_check_input)(char*);
void (*p_input_function)();
int present;
struct __SourcePoint source_point;
};
struct __ReturnEntry {
char *name;
int hash;
char *type_name;
int type_code;
int signal_index;
int exec_index;
int (*p_check_input)(char*);
void (*p_input_function)();
int present;
struct __SourcePoint source_point;
};
struct __ImplicationEntry {
int master;
int slave;
struct __SourcePoint source_point;
};
struct __ExclusionEntry {
int *exclusion_list;
struct __SourcePoint source_point;
};
struct __VariableEntry {
char *full_name;
char *short_name;
char *type_name;
int type_code;
int comment_kind;
int is_initialized;
char *p_variable;
char *source_name;
int written;
unsigned char written_in_transition;
unsigned char read_in_transition;
struct __SourcePoint source_point;
};
struct __ExecEntry {
int task_index;
int *var_indexes_array;
char **p_values_array;
struct __SourcePoint source_point;
};
struct __HaltEntry {
struct __SourcePoint source_point;
};
struct __NetEntry {
int known;
int value;
int number_of_source_points;
struct __SourcePoint* source_point_array;
};
struct __ModuleEntry {
char *version_id;
char *name;
int number_of_instances;
int number_of_tasks;
int number_of_signals;
int number_of_inputs;
int number_of_returns;
int number_of_sensors;
int number_of_outputs;
int number_of_locals;
int number_of_exceptions;
int number_of_implications;
int number_of_exclusions;
int number_of_variables;
int number_of_execs;
int number_of_halts;
int number_of_nets;
int number_of_states;
int state;
unsigned short *halt_list;
unsigned short *awaited_list;
unsigned short *emitted_list;
unsigned short *started_list;
unsigned short *killed_list;
unsigned short *suspended_list;
unsigned short *active_list;
int run_time_error_code;
int error_info;
void (*init)();
int (*run)();
int (*reset)();
char *(*show_variable)(int);
void (*set_variable)(int, char*, char*);
int (*check_value)(int, char*);
int (*execute_action)();
struct __InstanceEntry* instance_table;
struct __TaskEntry* task_table;
struct __SignalEntry* signal_table;
struct __InputEntry* input_table;
struct __ReturnEntry* return_table;
struct __ImplicationEntry* implication_table;
struct __ExclusionEntry* exclusion_table;
struct __VariableEntry* variable_table;
struct __ExecEntry* exec_table;
struct __HaltEntry* halt_table;
struct __NetEntry* net_table;
};

                                     
/* EXTERN DECLARATIONS */

extern int __CheckVariables(int*);
extern void __ResetInput();
extern void __ResetExecs();
extern void __ResetVariables();
extern void __ResetVariableStatus();
extern void __AppendToList(unsigned short*, unsigned short);
extern void __ListCopy(unsigned short*, unsigned short**);
extern void __WriteVariable(int);
extern void __ResetVariable(int);
extern void __ResetModuleEntry();
extern void __ResetModuleEntryBeforeReaction();
extern void __ResetModuleEntryAfterReaction();
#ifndef _NO_EXTERN_DEFINITIONS
#endif

/* INITIALIZED CONSTANTS */

/* MEMORY ALLOCATION */

static boolean __Esterel_Exam_Review_V0;
static boolean __Esterel_Exam_Review_V1;
static boolean __Esterel_Exam_Review_V2;
static integer __Esterel_Exam_Review_V3;
static boolean __Esterel_Exam_Review_V4;

static unsigned short __Esterel_Exam_Review_HaltList[13];
static unsigned short __Esterel_Exam_Review_AwaitedList[16];
static unsigned short __Esterel_Exam_Review_EmittedList[16];
static unsigned short __Esterel_Exam_Review_StartedList[1];
static unsigned short __Esterel_Exam_Review_KilledList[1];
static unsigned short __Esterel_Exam_Review_SuspendedList[1];
static unsigned short __Esterel_Exam_Review_ActiveList[1];
static unsigned short __Esterel_Exam_Review_AllAwaitedList[16]={3,0,1,2};


/* INPUT FUNCTIONS */

void Esterel_Exam_Review_I_RANDOM1 () {
__Esterel_Exam_Review_V0 = _true;
}
void Esterel_Exam_Review_IS_RANDOM1 () {
__Esterel_Exam_Review_V0 = _true;
}
void Esterel_Exam_Review_I_RANDOM2 () {
__Esterel_Exam_Review_V1 = _true;
}
void Esterel_Exam_Review_IS_RANDOM2 () {
__Esterel_Exam_Review_V1 = _true;
}
void Esterel_Exam_Review_I_RANDOM3 () {
__Esterel_Exam_Review_V2 = _true;
}
void Esterel_Exam_Review_IS_RANDOM3 () {
__Esterel_Exam_Review_V2 = _true;
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int Esterel_Exam_Review_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __Esterel_Exam_Review_A1 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V0);
}
static int __Esterel_Exam_Review_Check1 [] = {1,0,0};
static int __Esterel_Exam_Review_A2 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V1);
}
static int __Esterel_Exam_Review_Check2 [] = {1,0,0};
static int __Esterel_Exam_Review_A3 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V2);
}
static int __Esterel_Exam_Review_Check3 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __Esterel_Exam_Review_A4 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_TA_INREVIEW();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,3);
}
static int __Esterel_Exam_Review_Check4 [] = {1,0,0};
static void __Esterel_Exam_Review_A5 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_TA_SLEEPING();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,4);
}
static int __Esterel_Exam_Review_Check5 [] = {1,0,0};
static void __Esterel_Exam_Review_A6 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_WANT_REVIEW();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,5);
}
static int __Esterel_Exam_Review_Check6 [] = {1,0,0};
static void __Esterel_Exam_Review_A7 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WANTREVIEW();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,6);
}
static int __Esterel_Exam_Review_Check7 [] = {1,0,0};
static void __Esterel_Exam_Review_A8 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_INREVIEW();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,7);
}
static int __Esterel_Exam_Review_Check8 [] = {1,0,0};
static void __Esterel_Exam_Review_A9 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUDENTS_WAITING(__Esterel_Exam_Review_V3);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,8);
}
static int __Esterel_Exam_Review_Check9 [] = {1,0,0};

/* ASSIGNMENTS */

static void __Esterel_Exam_Review_A10 () {
__Esterel_Exam_Review_V0 = _false;
}
static int __Esterel_Exam_Review_Check10 [] = {1,0,1,0};
static void __Esterel_Exam_Review_A11 () {
__Esterel_Exam_Review_V1 = _false;
}
static int __Esterel_Exam_Review_Check11 [] = {1,0,1,1};
static void __Esterel_Exam_Review_A12 () {
__Esterel_Exam_Review_V2 = _false;
}
static int __Esterel_Exam_Review_Check12 [] = {1,0,1,2};
static void __Esterel_Exam_Review_A13 () {
__Esterel_Exam_Review_V4 = _false;
}
static int __Esterel_Exam_Review_Check13 [] = {1,0,1,4};
static void __Esterel_Exam_Review_A14 () {
__Esterel_Exam_Review_V3 = 0;
}
static int __Esterel_Exam_Review_Check14 [] = {1,0,1,3};
static void __Esterel_Exam_Review_A15 () {
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(-(1))),(__Esterel_Exam_Review_V4=_true,-(1)));
}
static int __Esterel_Exam_Review_Check15 [] = {1,0,1,3};

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


static int *__Esterel_Exam_Review_CheckArray[] = {
0,
__Esterel_Exam_Review_Check1,
__Esterel_Exam_Review_Check2,
__Esterel_Exam_Review_Check3,
__Esterel_Exam_Review_Check4,
__Esterel_Exam_Review_Check5,
__Esterel_Exam_Review_Check6,
__Esterel_Exam_Review_Check7,
__Esterel_Exam_Review_Check8,
__Esterel_Exam_Review_Check9,
__Esterel_Exam_Review_Check10,
__Esterel_Exam_Review_Check11,
__Esterel_Exam_Review_Check12,
__Esterel_Exam_Review_Check13,
__Esterel_Exam_Review_Check14,
__Esterel_Exam_Review_Check15
};
static int **__Esterel_Exam_Review_PCheckArray =  __Esterel_Exam_Review_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void Esterel_Exam_Review_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __Esterel_Exam_Review_show_variable (int __V) {
extern struct __VariableEntry __Esterel_Exam_Review_VariableTable[];
struct __VariableEntry* p_var = &__Esterel_Exam_Review_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __Esterel_Exam_Review_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __Esterel_Exam_Review_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __Esterel_Exam_Review_InstanceTable [] = {
{"Esterel_Exam_Review",0,"/home/student/workspace/eclipse_ws_tutorial/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,1,1,0},{1,41,1,0},{0,0,0,0}},
{"TA",0,"/home/student/workspace/eclipse_ws_tutorial/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,45,1,1},{1,84,1,1},{1,11,2,0}},
{"KEVIN",0,"/home/student/workspace/eclipse_ws_tutorial/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,88,1,2},{1,152,1,2},{1,18,3,0}},
{"STUART",0,"/home/student/workspace/eclipse_ws_tutorial/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,88,1,3},{1,152,1,3},{1,23,3,0}},
{"BOB",0,"/home/student/workspace/eclipse_ws_tutorial/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,88,1,4},{1,152,1,4},{1,28,3,0}},
};

struct __SignalEntry __Esterel_Exam_Review_SignalTable [] = {
{"RANDOM1",33,0,0,{1,2,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RANDOM2",33,0,0,{1,2,17,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RANDOM3",33,0,0,{1,2,26,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_INREVIEW",34,0,0,{1,3,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_SLEEPING",34,0,0,{1,3,22,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"WANT_REVIEW",34,0,0,{1,5,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW",34,0,0,{1,6,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW",34,0,0,{1,6,26,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUDENTS_WAITING",66,3,0,{1,7,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW1",40,0,0,{1,9,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW1",40,0,0,{1,9,27,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW2",40,0,0,{1,9,43,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW2",40,0,0,{1,9,61,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW3",40,0,0,{1,9,77,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW3",40,0,0,{1,9,95,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __Esterel_Exam_Review_InputTable [] = {
{"RANDOM1",94,0,0,-1,0,0,0,Esterel_Exam_Review_IS_RANDOM1,0,{1,2,8,0}},
{"RANDOM2",95,0,0,-1,0,1,0,Esterel_Exam_Review_IS_RANDOM2,0,{1,2,17,0}},
{"RANDOM3",96,0,0,-1,0,2,0,Esterel_Exam_Review_IS_RANDOM3,0,{1,2,26,0}}};

struct __VariableEntry __Esterel_Exam_Review_VariableTable [] = {
{"__Esterel_Exam_Review_V0","V0","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V0,"RANDOM1",0,0,0,{1,2,8,0}},
{"__Esterel_Exam_Review_V1","V1","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V1,"RANDOM2",0,0,0,{1,2,17,0}},
{"__Esterel_Exam_Review_V2","V2","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V2,"RANDOM3",0,0,0,{1,2,26,0}},
{"__Esterel_Exam_Review_V3","V3","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V3,"STUDENTS_WAITING",0,0,0,{1,7,9,0}},
{"__Esterel_Exam_Review_V4","V4","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V4,"STUDENTS_WAITING",0,0,0,{1,7,9,0}}
};

struct __HaltEntry __Esterel_Exam_Review_HaltTable [] = {
{{1,41,1,0}},
{{1,17,3,0}},
{{1,22,7,0}},
{{1,27,7,0}},
{{1,36,3,0}},
{{1,81,3,1}},
{{1,103,4,2}},
{{1,107,4,2}},
{{1,103,4,3}},
{{1,107,4,3}},
{{1,103,4,4}},
{{1,107,4,4}}
};


static void __Esterel_Exam_Review__reset_input () {
__Esterel_Exam_Review_V0 = _false;
__Esterel_Exam_Review_V1 = _false;
__Esterel_Exam_Review_V2 = _false;
__Esterel_Exam_Review_V4 = _false;
}


/* MODULE DATA FOR SIMULATION */

int Esterel_Exam_Review();
int Esterel_Exam_Review_reset();

static struct __ModuleEntry __Esterel_Exam_Review_ModuleData = {
"Simulation interface release 5","Esterel_Exam_Review",
5,0,15,3,0,0,6,6,0,0,0,5,0,12,0,0,0,
__Esterel_Exam_Review_HaltList,
__Esterel_Exam_Review_AwaitedList,
__Esterel_Exam_Review_EmittedList,
__Esterel_Exam_Review_StartedList,
__Esterel_Exam_Review_KilledList,
__Esterel_Exam_Review_SuspendedList,
__Esterel_Exam_Review_ActiveList,
0,0,
Esterel_Exam_Review_initialize,Esterel_Exam_Review,Esterel_Exam_Review_reset,
__Esterel_Exam_Review_show_variable,__Esterel_Exam_Review_set_variable,__Esterel_Exam_Review_check_value,0,
__Esterel_Exam_Review_InstanceTable,
0,
__Esterel_Exam_Review_SignalTable,__Esterel_Exam_Review_InputTable,0,
0,0,
__Esterel_Exam_Review_VariableTable,
0,
__Esterel_Exam_Review_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __Esterel_Exam_Review_R[13] = {_false,
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
 _false};

/* AUTOMATON ENGINE */

int Esterel_Exam_Review () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[19];

__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AwaitedList;
__ResetModuleEntryBeforeReaction();
if (__Esterel_Exam_Review_R[1]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[14]);__Esterel_Exam_Review_A14();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A14\n");
#endif
}
E[0] = (__Esterel_Exam_Review_R[6]&&!(__Esterel_Exam_Review_R[1]))||__Esterel_Exam_Review_R[1];
E[1] = E[0]&&__Esterel_Exam_Review_R[0];
E[2] = (__Esterel_Exam_Review_R[5]&&!(__Esterel_Exam_Review_R[1]))||__Esterel_Exam_Review_R[1];
E[3] = __Esterel_Exam_Review_R[7]&&!(__Esterel_Exam_Review_R[1]);
if (E[3]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,9);
}
E[4] = __Esterel_Exam_Review_R[9]&&!(__Esterel_Exam_Review_R[1]);
if (E[4]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,11);
}
E[5] = __Esterel_Exam_Review_R[11]&&!(__Esterel_Exam_Review_R[1]);
if (E[5]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,13);
}
E[6] = E[3]||E[4]||E[5];
E[7] = E[2]&&E[6];
if (E[7]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,6);
}
E[8] = E[1]&&E[7];
E[0] = E[0]&&!(__Esterel_Exam_Review_R[0]);
E[9] = E[0]&&E[7];
if (E[9]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,8);
}
if (E[9]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[15]);__Esterel_Exam_Review_A15();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A15\n");
#endif
}
if (E[8]||E[9]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,3);
}
if (E[8]||E[9]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[4]);__Esterel_Exam_Review_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A4\n");
#endif
}
E[1] = E[1]&&!(E[7]);
E[0] = E[0]&&!(E[7]);
E[10] = E[1]||E[0];
if (E[10]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,4);
}
if (E[10]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[5]);__Esterel_Exam_Review_A5();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A5\n");
#endif
}
E[0] = E[8]||E[1]||E[9]||E[0];
E[1] = __Esterel_Exam_Review_R[8]&&!(__Esterel_Exam_Review_R[1]);
E[11] = __Esterel_Exam_Review_R[2]&&!(__Esterel_Exam_Review_R[1]);
E[12] = E[11]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__Esterel_Exam_Review_A1());
E[11] = E[11]&&!((__CheckVariables(__Esterel_Exam_Review_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__Esterel_Exam_Review_A1()));
E[11] = __Esterel_Exam_Review_R[1]||(E[1]&&!(E[10]))||(E[12]&&!(E[10]))||(__Esterel_Exam_Review_R[2]&&E[11]);
E[12] = E[12]&&E[10];
E[1] = E[3]||(__Esterel_Exam_Review_R[8]&&E[1]&&E[10]);
E[3] = __Esterel_Exam_Review_R[10]&&!(__Esterel_Exam_Review_R[1]);
E[13] = __Esterel_Exam_Review_R[3]&&!(__Esterel_Exam_Review_R[1]);
E[14] = E[13]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__Esterel_Exam_Review_A2());
E[13] = E[13]&&!((__CheckVariables(__Esterel_Exam_Review_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__Esterel_Exam_Review_A2()));
E[13] = __Esterel_Exam_Review_R[1]||(E[3]&&!(E[10]))||(E[14]&&!(E[10]))||(__Esterel_Exam_Review_R[3]&&E[13]);
E[14] = E[14]&&E[10];
E[3] = E[4]||(__Esterel_Exam_Review_R[10]&&E[3]&&E[10]);
E[4] = __Esterel_Exam_Review_R[12]&&!(__Esterel_Exam_Review_R[1]);
E[15] = __Esterel_Exam_Review_R[4]&&!(__Esterel_Exam_Review_R[1]);
E[16] = E[15]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__Esterel_Exam_Review_A3());
E[15] = E[15]&&!((__CheckVariables(__Esterel_Exam_Review_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__Esterel_Exam_Review_A3()));
E[15] = __Esterel_Exam_Review_R[1]||(E[4]&&!(E[10]))||(E[16]&&!(E[10]))||(__Esterel_Exam_Review_R[4]&&E[15]);
E[16] = E[16]&&E[10];
E[4] = E[5]||(__Esterel_Exam_Review_R[12]&&E[4]&&E[10]);
E[6] = E[7]||(E[2]&&!(E[6]));
E[2] = __Esterel_Exam_Review_R[2]||__Esterel_Exam_Review_R[7]||__Esterel_Exam_Review_R[8];
E[5] = __Esterel_Exam_Review_R[3]||__Esterel_Exam_Review_R[9]||__Esterel_Exam_Review_R[10];
E[17] = __Esterel_Exam_Review_R[4]||__Esterel_Exam_Review_R[11]||__Esterel_Exam_Review_R[12];
E[18] = __Esterel_Exam_Review_R[6]||E[2]||E[5]||E[17]||__Esterel_Exam_Review_R[5];
E[18] = (E[0]||E[11]||E[12]||E[1]||E[13]||E[14]||E[3]||E[15]||E[16]||E[4]||E[6])&&((E[18]&&!(__Esterel_Exam_Review_R[6]))||E[0])&&((E[18]&&!(E[2]))||E[11]||E[12]||E[1])&&((E[18]&&!(E[5]))||E[13]||E[14]||E[3])&&((E[18]&&!(E[17]))||E[15]||E[16]||E[4])&&((E[18]&&!(__Esterel_Exam_Review_R[5]))||E[6]);
__Esterel_Exam_Review_R[0] = E[10]&&E[18];
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[6]);__Esterel_Exam_Review_A6();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A6\n");
#endif
}
if (E[7]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[7]);__Esterel_Exam_Review_A7();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A7\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[8]);__Esterel_Exam_Review_A8();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A8\n");
#endif
}
if (E[9]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[9]);__Esterel_Exam_Review_A9();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A9\n");
#endif
}
E[17] = !(_true);
__Esterel_Exam_Review_R[1] = !(_true);
__Esterel_Exam_Review_R[2] = E[11];
if (__Esterel_Exam_Review_R[2]) { __AppendToList(__Esterel_Exam_Review_HaltList,1); }
__Esterel_Exam_Review_R[3] = E[13];
if (__Esterel_Exam_Review_R[3]) { __AppendToList(__Esterel_Exam_Review_HaltList,2); }
__Esterel_Exam_Review_R[4] = E[15];
if (__Esterel_Exam_Review_R[4]) { __AppendToList(__Esterel_Exam_Review_HaltList,3); }
__Esterel_Exam_Review_R[5] = E[6];
if (__Esterel_Exam_Review_R[5]) { __AppendToList(__Esterel_Exam_Review_HaltList,4); }
__Esterel_Exam_Review_R[6] = E[0];
if (__Esterel_Exam_Review_R[6]) { __AppendToList(__Esterel_Exam_Review_HaltList,5); }
__Esterel_Exam_Review_R[7] = E[12];
if (__Esterel_Exam_Review_R[7]) { __AppendToList(__Esterel_Exam_Review_HaltList,6); }
__Esterel_Exam_Review_R[8] = E[1];
if (__Esterel_Exam_Review_R[8]) { __AppendToList(__Esterel_Exam_Review_HaltList,7); }
__Esterel_Exam_Review_R[9] = E[14];
if (__Esterel_Exam_Review_R[9]) { __AppendToList(__Esterel_Exam_Review_HaltList,8); }
__Esterel_Exam_Review_R[10] = E[3];
if (__Esterel_Exam_Review_R[10]) { __AppendToList(__Esterel_Exam_Review_HaltList,9); }
__Esterel_Exam_Review_R[11] = E[16];
if (__Esterel_Exam_Review_R[11]) { __AppendToList(__Esterel_Exam_Review_HaltList,10); }
__Esterel_Exam_Review_R[12] = E[4];
if (__Esterel_Exam_Review_R[12]) { __AppendToList(__Esterel_Exam_Review_HaltList,11); }
if (!E[18]) { __AppendToList(__Esterel_Exam_Review_HaltList,0); }
__ResetModuleEntryAfterReaction();
__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AllAwaitedList;
__Esterel_Exam_Review__reset_input();
return E[18];
}

/* AUTOMATON RESET */

int Esterel_Exam_Review_reset () {
__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AwaitedList;
__ResetModuleEntry();
__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AllAwaitedList;
__Esterel_Exam_Review_ModuleData.state = 0;
__Esterel_Exam_Review_R[0] = _false;
__Esterel_Exam_Review_R[1] = _true;
__Esterel_Exam_Review_R[2] = _false;
__Esterel_Exam_Review_R[3] = _false;
__Esterel_Exam_Review_R[4] = _false;
__Esterel_Exam_Review_R[5] = _false;
__Esterel_Exam_Review_R[6] = _false;
__Esterel_Exam_Review_R[7] = _false;
__Esterel_Exam_Review_R[8] = _false;
__Esterel_Exam_Review_R[9] = _false;
__Esterel_Exam_Review_R[10] = _false;
__Esterel_Exam_Review_R[11] = _false;
__Esterel_Exam_Review_R[12] = _false;
__Esterel_Exam_Review__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__Esterel_Exam_Review_ModuleData
};
