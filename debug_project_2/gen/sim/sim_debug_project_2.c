/* sscc : C CODE OF SORTED EQUATIONS debug_project_2 - SIMULATION MODE */

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
#define __debug_project_2_GENERIC_TEST(TEST) return TEST;
typedef void (*__debug_project_2_APF)();
static __debug_project_2_APF *__debug_project_2_PActionArray;
static int **__debug_project_2_PCheckArray;
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

static boolean __debug_project_2_V0;
static boolean __debug_project_2_V1;
static boolean __debug_project_2_V2;
static integer __debug_project_2_V3;
static integer __debug_project_2_V4;
static integer __debug_project_2_V5;
static integer __debug_project_2_V6;
static integer __debug_project_2_V7;
static integer __debug_project_2_V8;
static integer __debug_project_2_V9;
static integer __debug_project_2_V10;
static integer __debug_project_2_V11;
static integer __debug_project_2_V12;
static integer __debug_project_2_V13;
static integer __debug_project_2_V14;

static unsigned short __debug_project_2_HaltList[8];
static unsigned short __debug_project_2_AwaitedList[7];
static unsigned short __debug_project_2_EmittedList[7];
static unsigned short __debug_project_2_StartedList[1];
static unsigned short __debug_project_2_KilledList[1];
static unsigned short __debug_project_2_SuspendedList[1];
static unsigned short __debug_project_2_ActiveList[1];
static unsigned short __debug_project_2_AllAwaitedList[7]={3,0,1,2};


/* INPUT FUNCTIONS */

void debug_project_2_I_STOP () {
__debug_project_2_V0 = _true;
}
void debug_project_2_IS_STOP () {
__debug_project_2_V0 = _true;
}
void debug_project_2_I_START () {
__debug_project_2_V1 = _true;
}
void debug_project_2_IS_START () {
__debug_project_2_V1 = _true;
}
void debug_project_2_I_RESET () {
__debug_project_2_V2 = _true;
}
void debug_project_2_IS_RESET () {
__debug_project_2_V2 = _true;
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int debug_project_2_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __debug_project_2_A1 () {
__debug_project_2_GENERIC_TEST(__debug_project_2_V0);
}
static int __debug_project_2_Check1 [] = {1,0,0};
static int __debug_project_2_A2 () {
__debug_project_2_GENERIC_TEST(__debug_project_2_V1);
}
static int __debug_project_2_Check2 [] = {1,0,0};
static int __debug_project_2_A3 () {
__debug_project_2_GENERIC_TEST(__debug_project_2_V2);
}
static int __debug_project_2_Check3 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __debug_project_2_A4 () {
#ifdef __OUTPUT
debug_project_2_O_MIL_SEC(__debug_project_2_V3);
#endif
__AppendToList(__debug_project_2_EmittedList,3);
}
static int __debug_project_2_Check4 [] = {1,0,0};
static void __debug_project_2_A5 () {
#ifdef __OUTPUT
debug_project_2_O_MIN(__debug_project_2_V4);
#endif
__AppendToList(__debug_project_2_EmittedList,4);
}
static int __debug_project_2_Check5 [] = {1,0,0};
static void __debug_project_2_A6 () {
#ifdef __OUTPUT
debug_project_2_O_SEC(__debug_project_2_V5);
#endif
__AppendToList(__debug_project_2_EmittedList,5);
}
static int __debug_project_2_Check6 [] = {1,0,0};

/* ASSIGNMENTS */

static void __debug_project_2_A7 () {
__debug_project_2_V0 = _false;
}
static int __debug_project_2_Check7 [] = {1,0,1,0};
static void __debug_project_2_A8 () {
__debug_project_2_V1 = _false;
}
static int __debug_project_2_Check8 [] = {1,0,1,1};
static void __debug_project_2_A9 () {
__debug_project_2_V2 = _false;
}
static int __debug_project_2_Check9 [] = {1,0,1,2};
static void __debug_project_2_A10 () {
__debug_project_2_V3 = 0;
}
static int __debug_project_2_Check10 [] = {1,0,1,3};
static void __debug_project_2_A11 () {
__debug_project_2_V4 = 0;
}
static int __debug_project_2_Check11 [] = {1,0,1,4};
static void __debug_project_2_A12 () {
__debug_project_2_V5 = 0;
}
static int __debug_project_2_Check12 [] = {1,0,1,5};
static void __debug_project_2_A13 () {
__debug_project_2_V6 = 0;
}
static int __debug_project_2_Check13 [] = {1,0,1,6};
static void __debug_project_2_A14 () {
__debug_project_2_V7 = 0;
}
static int __debug_project_2_Check14 [] = {1,0,1,7};
static void __debug_project_2_A15 () {
__debug_project_2_V8 = 0;
}
static int __debug_project_2_Check15 [] = {1,0,1,8};
static void __debug_project_2_A16 () {
__debug_project_2_V6 = __debug_project_2_V6+1;
}
static int __debug_project_2_Check16 [] = {1,1,6,1,6};
static void __debug_project_2_A17 () {
__debug_project_2_V3 = __debug_project_2_V6;
}
static int __debug_project_2_Check17 [] = {1,1,6,1,3};
static void __debug_project_2_A18 () {
__debug_project_2_V9 = 0;
}
static int __debug_project_2_Check18 [] = {1,0,1,9};
static void __debug_project_2_A19 () {
__debug_project_2_V9 = __debug_project_2_V5;
}
static int __debug_project_2_Check19 [] = {1,1,5,1,9};
static void __debug_project_2_A20 () {
__debug_project_2_V10 = __debug_project_2_V9;
}
static int __debug_project_2_Check20 [] = {1,1,9,1,10};
static void __debug_project_2_A21 () {
__debug_project_2_V11 = 3;
}
static int __debug_project_2_Check21 [] = {1,0,1,11};
static void __debug_project_2_A22 () {
__debug_project_2_V10 = __debug_project_2_V10+1;
}
static int __debug_project_2_Check22 [] = {1,1,10,1,10};
static void __debug_project_2_A23 () {
__debug_project_2_V5 = __debug_project_2_V10;
}
static int __debug_project_2_Check23 [] = {1,1,10,1,5};
static void __debug_project_2_A24 () {
__debug_project_2_V12 = 0;
}
static int __debug_project_2_Check24 [] = {1,0,1,12};
static void __debug_project_2_A25 () {
__debug_project_2_V12 = __debug_project_2_V4;
}
static int __debug_project_2_Check25 [] = {1,1,4,1,12};
static void __debug_project_2_A26 () {
__debug_project_2_V13 = __debug_project_2_V12;
}
static int __debug_project_2_Check26 [] = {1,1,12,1,13};
static void __debug_project_2_A27 () {
__debug_project_2_V14 = 3;
}
static int __debug_project_2_Check27 [] = {1,0,1,14};
static void __debug_project_2_A28 () {
__debug_project_2_V13 = __debug_project_2_V13+1;
}
static int __debug_project_2_Check28 [] = {1,1,13,1,13};
static void __debug_project_2_A29 () {
__debug_project_2_V4 = __debug_project_2_V13;
}
static int __debug_project_2_Check29 [] = {1,1,13,1,4};

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

static int __debug_project_2_A30 () {
__debug_project_2_GENERIC_TEST(__DSZ(__debug_project_2_V11));
}
static int __debug_project_2_Check30 [] = {1,1,11,1,11};
static int __debug_project_2_A31 () {
__debug_project_2_GENERIC_TEST(__DSZ(__debug_project_2_V14));
}
static int __debug_project_2_Check31 [] = {1,1,14,1,14};

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

static void __debug_project_2_A32 () {
;
__ResetVariable(10);
}
static int __debug_project_2_Check32 [] = {1,0,0};
static void __debug_project_2_A33 () {
;
__ResetVariable(13);
}
static int __debug_project_2_Check33 [] = {1,0,0};

/* ACTION SEQUENCES */


static int *__debug_project_2_CheckArray[] = {
0,
__debug_project_2_Check1,
__debug_project_2_Check2,
__debug_project_2_Check3,
__debug_project_2_Check4,
__debug_project_2_Check5,
__debug_project_2_Check6,
__debug_project_2_Check7,
__debug_project_2_Check8,
__debug_project_2_Check9,
__debug_project_2_Check10,
__debug_project_2_Check11,
__debug_project_2_Check12,
__debug_project_2_Check13,
__debug_project_2_Check14,
__debug_project_2_Check15,
__debug_project_2_Check16,
__debug_project_2_Check17,
__debug_project_2_Check18,
__debug_project_2_Check19,
__debug_project_2_Check20,
__debug_project_2_Check21,
__debug_project_2_Check22,
__debug_project_2_Check23,
__debug_project_2_Check24,
__debug_project_2_Check25,
__debug_project_2_Check26,
__debug_project_2_Check27,
__debug_project_2_Check28,
__debug_project_2_Check29,
__debug_project_2_Check30,
__debug_project_2_Check31,
__debug_project_2_Check32,
__debug_project_2_Check33
};
static int **__debug_project_2_PCheckArray =  __debug_project_2_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void debug_project_2_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __debug_project_2_show_variable (int __V) {
extern struct __VariableEntry __debug_project_2_VariableTable[];
struct __VariableEntry* p_var = &__debug_project_2_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __debug_project_2_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __debug_project_2_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __debug_project_2_InstanceTable [] = {
{"debug_project_2",0,"/home/student/workspace/eclipse_ws_tutorial/debug_project_2//src","debug_project_2.strl",{1,1,1,0},{1,130,1,0},{0,0,0,0}},
{"SECOND_COUNTER",0,"/home/student/workspace/eclipse_ws_tutorial/debug_project_2//src","debug_project_2.strl",{1,134,1,1},{1,151,1,1},{1,96,4,0}},
{"MINUTE_COUNTER",0,"/home/student/workspace/eclipse_ws_tutorial/debug_project_2//src","debug_project_2.strl",{1,134,1,2},{1,151,1,2},{1,110,4,0}},
};

struct __SignalEntry __debug_project_2_SignalTable [] = {
{"STOP",33,0,0,{1,69,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"START",33,0,0,{1,69,13,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RESET",33,0,0,{1,69,19,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"MIL_SEC",2,3,0,{1,71,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"MIN",2,4,0,{1,72,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"SEC",2,5,0,{1,72,29,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __debug_project_2_InputTable [] = {
{"STOP",23,0,0,-1,0,0,0,debug_project_2_IS_STOP,0,{1,69,8,0}},
{"START",95,0,0,-1,0,1,0,debug_project_2_IS_START,0,{1,69,13,0}},
{"RESET",84,0,0,-1,0,2,0,debug_project_2_IS_RESET,0,{1,69,19,0}}};

struct __VariableEntry __debug_project_2_VariableTable [] = {
{"__debug_project_2_V0","V0","boolean",-2,2,0,(char*)&__debug_project_2_V0,"STOP",0,0,0,{1,69,8,0}},
{"__debug_project_2_V1","V1","boolean",-2,2,0,(char*)&__debug_project_2_V1,"START",0,0,0,{1,69,13,0}},
{"__debug_project_2_V2","V2","boolean",-2,2,0,(char*)&__debug_project_2_V2,"RESET",0,0,0,{1,69,19,0}},
{"__debug_project_2_V3","V3","integer",-3,1,0,(char*)&__debug_project_2_V3,"MIL_SEC",0,0,0,{1,71,9,0}},
{"__debug_project_2_V4","V4","integer",-3,1,0,(char*)&__debug_project_2_V4,"MIN",0,0,0,{1,72,9,0}},
{"__debug_project_2_V5","V5","integer",-3,1,0,(char*)&__debug_project_2_V5,"SEC",0,0,0,{1,72,29,0}},
{"__debug_project_2_V6","V6","integer",-3,0,0,(char*)&__debug_project_2_V6,"v_MIL_SEC",0,0,0,{1,74,6,0}},
{"__debug_project_2_V7","V7","integer",-3,0,0,(char*)&__debug_project_2_V7,"v_MIN",0,0,0,{1,75,6,0}},
{"__debug_project_2_V8","V8","integer",-3,0,0,(char*)&__debug_project_2_V8,"v_SEC",0,0,0,{1,76,6,0}},
{"__debug_project_2_V9","V9","integer",-3,10,0,(char*)&__debug_project_2_V9,"SEC",0,0,0,{1,136,9,1}},
{"__debug_project_2_V10","V10","integer",-3,0,0,(char*)&__debug_project_2_V10,"v_n_value",0,0,0,{1,139,6,1}},
{"__debug_project_2_V11","V11","integer",-3,3,0,(char*)&__debug_project_2_V11,"0",0,0,0,{1,143,8,1}},
{"__debug_project_2_V12","V12","integer",-3,10,0,(char*)&__debug_project_2_V12,"MIN",0,0,0,{1,136,9,2}},
{"__debug_project_2_V13","V13","integer",-3,0,0,(char*)&__debug_project_2_V13,"v_n_value",0,0,0,{1,139,6,2}},
{"__debug_project_2_V14","V14","integer",-3,3,0,(char*)&__debug_project_2_V14,"0",0,0,0,{1,143,8,2}}
};

struct __HaltEntry __debug_project_2_HaltTable [] = {
{{1,130,1,0}},
{{1,79,3,0}},
{{1,88,4,0}},
{{1,120,4,0}},
{{1,124,2,0}},
{{1,143,2,1}},
{{1,143,2,2}}
};


static void __debug_project_2__reset_input () {
__debug_project_2_V0 = _false;
__debug_project_2_V1 = _false;
__debug_project_2_V2 = _false;
}


/* MODULE DATA FOR SIMULATION */

int debug_project_2();
int debug_project_2_reset();

static struct __ModuleEntry __debug_project_2_ModuleData = {
"Simulation interface release 5","debug_project_2",
3,0,6,3,0,0,3,0,0,0,0,15,0,7,0,0,0,
__debug_project_2_HaltList,
__debug_project_2_AwaitedList,
__debug_project_2_EmittedList,
__debug_project_2_StartedList,
__debug_project_2_KilledList,
__debug_project_2_SuspendedList,
__debug_project_2_ActiveList,
0,0,
debug_project_2_initialize,debug_project_2,debug_project_2_reset,
__debug_project_2_show_variable,__debug_project_2_set_variable,__debug_project_2_check_value,0,
__debug_project_2_InstanceTable,
0,
__debug_project_2_SignalTable,__debug_project_2_InputTable,0,
0,0,
__debug_project_2_VariableTable,
0,
__debug_project_2_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __debug_project_2_R[5] = {_true,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int debug_project_2 () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[11];

__debug_project_2_ModuleData.awaited_list = __debug_project_2_AwaitedList;
__ResetModuleEntryBeforeReaction();
E[0] = __debug_project_2_R[2]||__debug_project_2_R[3]||__debug_project_2_R[4];
E[1] = (E[0]||__debug_project_2_R[1])&&!(__debug_project_2_R[0]);
E[2] = E[1]&&(__CheckVariables(__debug_project_2_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_2_A3());
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[10]);__debug_project_2_A10();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A10\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[11]);__debug_project_2_A11();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A11\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[24]);__debug_project_2_A24();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A24\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[12]);__debug_project_2_A12();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A12\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[18]);__debug_project_2_A18();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A18\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[13]);__debug_project_2_A13();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A13\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[14]);__debug_project_2_A14();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A14\n");
#endif
}
if (__debug_project_2_R[0]) {
__CheckVariables(__debug_project_2_CheckArray[15]);__debug_project_2_A15();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A15\n");
#endif
}
E[2] = E[2]||__debug_project_2_R[0];
E[3] = E[2]&&(__CheckVariables(__debug_project_2_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_2_A2());
E[1] = E[1]&&!((__CheckVariables(__debug_project_2_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_2_A3()));
E[4] = __debug_project_2_R[1]&&E[1];
E[5] = E[4]&&(__CheckVariables(__debug_project_2_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_2_A2());
E[5] = E[3]||E[5];
E[3] = E[5]||(__debug_project_2_R[2]&&E[1]);
if (E[3]) {
__AppendToList(__debug_project_2_EmittedList,3);
}
if (E[3]) {
__CheckVariables(__debug_project_2_CheckArray[16]);__debug_project_2_A16();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A16\n");
#endif
}
if (E[3]) {
__CheckVariables(__debug_project_2_CheckArray[17]);__debug_project_2_A17();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A17\n");
#endif
}
if (E[3]) {
__CheckVariables(__debug_project_2_CheckArray[4]);__debug_project_2_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A4\n");
#endif
}
E[6] = __debug_project_2_R[4]&&E[1];
E[1] = __debug_project_2_R[3]&&E[1];
E[7] = E[1]&&E[3];
E[8] = E[7]&&(__CheckVariables(__debug_project_2_CheckArray[30]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 30\n"),
#endif
__debug_project_2_A30());
if (E[8]) {
__AppendToList(__debug_project_2_EmittedList,5);
}
if (E[8]) {
__CheckVariables(__debug_project_2_CheckArray[21]);__debug_project_2_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A21\n");
#endif
}
if (E[8]) {
__CheckVariables(__debug_project_2_CheckArray[22]);__debug_project_2_A22();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A22\n");
#endif
}
E[9] = E[6]&&E[8];
E[10] = E[9]&&(__CheckVariables(__debug_project_2_CheckArray[31]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 31\n"),
#endif
__debug_project_2_A31());
if (E[10]) {
__AppendToList(__debug_project_2_EmittedList,4);
}
if (E[10]) {
__CheckVariables(__debug_project_2_CheckArray[27]);__debug_project_2_A27();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A27\n");
#endif
}
if (E[10]) {
__CheckVariables(__debug_project_2_CheckArray[28]);__debug_project_2_A28();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A28\n");
#endif
}
if (E[10]) {
__CheckVariables(__debug_project_2_CheckArray[29]);__debug_project_2_A29();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A29\n");
#endif
}
if (E[10]) {
__CheckVariables(__debug_project_2_CheckArray[5]);__debug_project_2_A5();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A5\n");
#endif
}
if (E[5]) {
__CheckVariables(__debug_project_2_CheckArray[32]);__debug_project_2_A32();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A32\n");
#endif
}
if (E[5]) {
__CheckVariables(__debug_project_2_CheckArray[20]);__debug_project_2_A20();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A20\n");
#endif
}
if (E[5]) {
__CheckVariables(__debug_project_2_CheckArray[21]);__debug_project_2_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A21\n");
#endif
}
if (E[8]) {
__CheckVariables(__debug_project_2_CheckArray[23]);__debug_project_2_A23();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A23\n");
#endif
}
E[1] = E[5]||E[8]||(__debug_project_2_R[3]&&((E[7]&&!(E[8]))||(E[1]&&!(E[3]))));
if (E[5]) {
__CheckVariables(__debug_project_2_CheckArray[33]);__debug_project_2_A33();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A33\n");
#endif
}
if (E[5]) {
__CheckVariables(__debug_project_2_CheckArray[26]);__debug_project_2_A26();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A26\n");
#endif
}
if (E[5]) {
__CheckVariables(__debug_project_2_CheckArray[27]);__debug_project_2_A27();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A27\n");
#endif
}
E[6] = E[5]||E[10]||(__debug_project_2_R[4]&&((E[9]&&!(E[10]))||(E[6]&&!(E[8]))));
E[2] = E[2]&&!((__CheckVariables(__debug_project_2_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_2_A2()));
E[4] = E[4]&&!((__CheckVariables(__debug_project_2_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_2_A2()));
__debug_project_2_R[1] = E[2]||(__debug_project_2_R[1]&&E[4]);
E[0] = ((E[3]||E[1]||E[6])&&((E[0]&&!(__debug_project_2_R[2]))||E[3])&&((E[0]&&!(__debug_project_2_R[3]))||E[1])&&((E[0]&&!(__debug_project_2_R[4]))||E[6]))||__debug_project_2_R[1];
if (E[10]&&E[0]) {
__CheckVariables(__debug_project_2_CheckArray[25]);__debug_project_2_A25();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A25\n");
#endif
}
if (E[8]) {
__CheckVariables(__debug_project_2_CheckArray[6]);__debug_project_2_A6();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A6\n");
#endif
}
if (E[8]&&E[0]) {
__CheckVariables(__debug_project_2_CheckArray[19]);__debug_project_2_A19();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_2_A19\n");
#endif
}
E[4] = !(_true);
__debug_project_2_R[0] = !(_true);
if (__debug_project_2_R[1]) { __AppendToList(__debug_project_2_HaltList,1); }
__debug_project_2_R[2] = E[3];
if (__debug_project_2_R[2]) { __AppendToList(__debug_project_2_HaltList,2); }
__debug_project_2_R[3] = E[1];
if (__debug_project_2_R[3]) { __AppendToList(__debug_project_2_HaltList,5); }
__debug_project_2_R[4] = E[6];
if (__debug_project_2_R[4]) { __AppendToList(__debug_project_2_HaltList,6); }
if (!E[0]) { __AppendToList(__debug_project_2_HaltList,0); }
__ResetModuleEntryAfterReaction();
__debug_project_2_ModuleData.awaited_list = __debug_project_2_AllAwaitedList;
__debug_project_2__reset_input();
return E[0];
}

/* AUTOMATON RESET */

int debug_project_2_reset () {
__debug_project_2_ModuleData.awaited_list = __debug_project_2_AwaitedList;
__ResetModuleEntry();
__debug_project_2_ModuleData.awaited_list = __debug_project_2_AllAwaitedList;
__debug_project_2_ModuleData.state = 0;
__debug_project_2_R[0] = _true;
__debug_project_2_R[1] = _false;
__debug_project_2_R[2] = _false;
__debug_project_2_R[3] = _false;
__debug_project_2_R[4] = _false;
__debug_project_2__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__debug_project_2_ModuleData
};
