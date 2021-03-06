/* sscc : C CODE OF SORTED EQUATIONS TUT3_STOPWATCH - SIMULATION MODE */

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
#define __TUT3_STOPWATCH_GENERIC_TEST(TEST) return TEST;
typedef void (*__TUT3_STOPWATCH_APF)();
static __TUT3_STOPWATCH_APF *__TUT3_STOPWATCH_PActionArray;
static int **__TUT3_STOPWATCH_PCheckArray;
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

static boolean __TUT3_STOPWATCH_V0;
static boolean __TUT3_STOPWATCH_V1;
static boolean __TUT3_STOPWATCH_V2;
static integer __TUT3_STOPWATCH_V3;
static integer __TUT3_STOPWATCH_V4;
static integer __TUT3_STOPWATCH_V5;
static integer __TUT3_STOPWATCH_V6;
static integer __TUT3_STOPWATCH_V7;
static integer __TUT3_STOPWATCH_V8;
static integer __TUT3_STOPWATCH_V9;
static integer __TUT3_STOPWATCH_V10;
static integer __TUT3_STOPWATCH_V11;
static integer __TUT3_STOPWATCH_V12;
static integer __TUT3_STOPWATCH_V13;
static integer __TUT3_STOPWATCH_V14;

static unsigned short __TUT3_STOPWATCH_HaltList[8];
static unsigned short __TUT3_STOPWATCH_AwaitedList[7];
static unsigned short __TUT3_STOPWATCH_EmittedList[7];
static unsigned short __TUT3_STOPWATCH_StartedList[1];
static unsigned short __TUT3_STOPWATCH_KilledList[1];
static unsigned short __TUT3_STOPWATCH_SuspendedList[1];
static unsigned short __TUT3_STOPWATCH_ActiveList[1];
static unsigned short __TUT3_STOPWATCH_AllAwaitedList[7]={3,0,1,2};


/* INPUT FUNCTIONS */

void TUT3_STOPWATCH_I_STOP () {
__TUT3_STOPWATCH_V0 = _true;
}
void TUT3_STOPWATCH_IS_STOP () {
__TUT3_STOPWATCH_V0 = _true;
}
void TUT3_STOPWATCH_I_START () {
__TUT3_STOPWATCH_V1 = _true;
}
void TUT3_STOPWATCH_IS_START () {
__TUT3_STOPWATCH_V1 = _true;
}
void TUT3_STOPWATCH_I_RESET () {
__TUT3_STOPWATCH_V2 = _true;
}
void TUT3_STOPWATCH_IS_RESET () {
__TUT3_STOPWATCH_V2 = _true;
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int TUT3_STOPWATCH_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __TUT3_STOPWATCH_A1 () {
__TUT3_STOPWATCH_GENERIC_TEST(__TUT3_STOPWATCH_V0);
}
static int __TUT3_STOPWATCH_Check1 [] = {1,0,0};
static int __TUT3_STOPWATCH_A2 () {
__TUT3_STOPWATCH_GENERIC_TEST(__TUT3_STOPWATCH_V1);
}
static int __TUT3_STOPWATCH_Check2 [] = {1,0,0};
static int __TUT3_STOPWATCH_A3 () {
__TUT3_STOPWATCH_GENERIC_TEST(__TUT3_STOPWATCH_V2);
}
static int __TUT3_STOPWATCH_Check3 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __TUT3_STOPWATCH_A4 () {
#ifdef __OUTPUT
TUT3_STOPWATCH_O_MIL_SEC(__TUT3_STOPWATCH_V3);
#endif
__AppendToList(__TUT3_STOPWATCH_EmittedList,3);
}
static int __TUT3_STOPWATCH_Check4 [] = {1,0,0};
static void __TUT3_STOPWATCH_A5 () {
#ifdef __OUTPUT
TUT3_STOPWATCH_O_MIN(__TUT3_STOPWATCH_V4);
#endif
__AppendToList(__TUT3_STOPWATCH_EmittedList,4);
}
static int __TUT3_STOPWATCH_Check5 [] = {1,0,0};
static void __TUT3_STOPWATCH_A6 () {
#ifdef __OUTPUT
TUT3_STOPWATCH_O_SEC(__TUT3_STOPWATCH_V5);
#endif
__AppendToList(__TUT3_STOPWATCH_EmittedList,5);
}
static int __TUT3_STOPWATCH_Check6 [] = {1,0,0};

/* ASSIGNMENTS */

static void __TUT3_STOPWATCH_A7 () {
__TUT3_STOPWATCH_V0 = _false;
}
static int __TUT3_STOPWATCH_Check7 [] = {1,0,1,0};
static void __TUT3_STOPWATCH_A8 () {
__TUT3_STOPWATCH_V1 = _false;
}
static int __TUT3_STOPWATCH_Check8 [] = {1,0,1,1};
static void __TUT3_STOPWATCH_A9 () {
__TUT3_STOPWATCH_V2 = _false;
}
static int __TUT3_STOPWATCH_Check9 [] = {1,0,1,2};
static void __TUT3_STOPWATCH_A10 () {
__TUT3_STOPWATCH_V3 = 0;
}
static int __TUT3_STOPWATCH_Check10 [] = {1,0,1,3};
static void __TUT3_STOPWATCH_A11 () {
__TUT3_STOPWATCH_V4 = 0;
}
static int __TUT3_STOPWATCH_Check11 [] = {1,0,1,4};
static void __TUT3_STOPWATCH_A12 () {
__TUT3_STOPWATCH_V5 = 0;
}
static int __TUT3_STOPWATCH_Check12 [] = {1,0,1,5};
static void __TUT3_STOPWATCH_A13 () {
__TUT3_STOPWATCH_V6 = 0;
}
static int __TUT3_STOPWATCH_Check13 [] = {1,0,1,6};
static void __TUT3_STOPWATCH_A14 () {
__TUT3_STOPWATCH_V7 = 0;
}
static int __TUT3_STOPWATCH_Check14 [] = {1,0,1,7};
static void __TUT3_STOPWATCH_A15 () {
__TUT3_STOPWATCH_V8 = 0;
}
static int __TUT3_STOPWATCH_Check15 [] = {1,0,1,8};
static void __TUT3_STOPWATCH_A16 () {
__TUT3_STOPWATCH_V6 = __TUT3_STOPWATCH_V6+1;
}
static int __TUT3_STOPWATCH_Check16 [] = {1,1,6,1,6};
static void __TUT3_STOPWATCH_A17 () {
__TUT3_STOPWATCH_V3 = __TUT3_STOPWATCH_V6;
}
static int __TUT3_STOPWATCH_Check17 [] = {1,1,6,1,3};
static void __TUT3_STOPWATCH_A18 () {
__TUT3_STOPWATCH_V9 = 0;
}
static int __TUT3_STOPWATCH_Check18 [] = {1,0,1,9};
static void __TUT3_STOPWATCH_A19 () {
__TUT3_STOPWATCH_V9 = __TUT3_STOPWATCH_V5;
}
static int __TUT3_STOPWATCH_Check19 [] = {1,1,5,1,9};
static void __TUT3_STOPWATCH_A20 () {
__TUT3_STOPWATCH_V10 = __TUT3_STOPWATCH_V9;
}
static int __TUT3_STOPWATCH_Check20 [] = {1,1,9,1,10};
static void __TUT3_STOPWATCH_A21 () {
__TUT3_STOPWATCH_V11 = 3;
}
static int __TUT3_STOPWATCH_Check21 [] = {1,0,1,11};
static void __TUT3_STOPWATCH_A22 () {
__TUT3_STOPWATCH_V10 = __TUT3_STOPWATCH_V10+1;
}
static int __TUT3_STOPWATCH_Check22 [] = {1,1,10,1,10};
static void __TUT3_STOPWATCH_A23 () {
__TUT3_STOPWATCH_V5 = __TUT3_STOPWATCH_V10;
}
static int __TUT3_STOPWATCH_Check23 [] = {1,1,10,1,5};
static void __TUT3_STOPWATCH_A24 () {
__TUT3_STOPWATCH_V12 = 0;
}
static int __TUT3_STOPWATCH_Check24 [] = {1,0,1,12};
static void __TUT3_STOPWATCH_A25 () {
__TUT3_STOPWATCH_V12 = __TUT3_STOPWATCH_V4;
}
static int __TUT3_STOPWATCH_Check25 [] = {1,1,4,1,12};
static void __TUT3_STOPWATCH_A26 () {
__TUT3_STOPWATCH_V13 = __TUT3_STOPWATCH_V12;
}
static int __TUT3_STOPWATCH_Check26 [] = {1,1,12,1,13};
static void __TUT3_STOPWATCH_A27 () {
__TUT3_STOPWATCH_V14 = 3;
}
static int __TUT3_STOPWATCH_Check27 [] = {1,0,1,14};
static void __TUT3_STOPWATCH_A28 () {
__TUT3_STOPWATCH_V13 = __TUT3_STOPWATCH_V13+1;
}
static int __TUT3_STOPWATCH_Check28 [] = {1,1,13,1,13};
static void __TUT3_STOPWATCH_A29 () {
__TUT3_STOPWATCH_V4 = __TUT3_STOPWATCH_V13;
}
static int __TUT3_STOPWATCH_Check29 [] = {1,1,13,1,4};

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

static int __TUT3_STOPWATCH_A30 () {
__TUT3_STOPWATCH_GENERIC_TEST(__DSZ(__TUT3_STOPWATCH_V11));
}
static int __TUT3_STOPWATCH_Check30 [] = {1,1,11,1,11};
static int __TUT3_STOPWATCH_A31 () {
__TUT3_STOPWATCH_GENERIC_TEST(__DSZ(__TUT3_STOPWATCH_V14));
}
static int __TUT3_STOPWATCH_Check31 [] = {1,1,14,1,14};

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

static void __TUT3_STOPWATCH_A32 () {
;
__ResetVariable(10);
}
static int __TUT3_STOPWATCH_Check32 [] = {1,0,0};
static void __TUT3_STOPWATCH_A33 () {
;
__ResetVariable(13);
}
static int __TUT3_STOPWATCH_Check33 [] = {1,0,0};

/* ACTION SEQUENCES */


static int *__TUT3_STOPWATCH_CheckArray[] = {
0,
__TUT3_STOPWATCH_Check1,
__TUT3_STOPWATCH_Check2,
__TUT3_STOPWATCH_Check3,
__TUT3_STOPWATCH_Check4,
__TUT3_STOPWATCH_Check5,
__TUT3_STOPWATCH_Check6,
__TUT3_STOPWATCH_Check7,
__TUT3_STOPWATCH_Check8,
__TUT3_STOPWATCH_Check9,
__TUT3_STOPWATCH_Check10,
__TUT3_STOPWATCH_Check11,
__TUT3_STOPWATCH_Check12,
__TUT3_STOPWATCH_Check13,
__TUT3_STOPWATCH_Check14,
__TUT3_STOPWATCH_Check15,
__TUT3_STOPWATCH_Check16,
__TUT3_STOPWATCH_Check17,
__TUT3_STOPWATCH_Check18,
__TUT3_STOPWATCH_Check19,
__TUT3_STOPWATCH_Check20,
__TUT3_STOPWATCH_Check21,
__TUT3_STOPWATCH_Check22,
__TUT3_STOPWATCH_Check23,
__TUT3_STOPWATCH_Check24,
__TUT3_STOPWATCH_Check25,
__TUT3_STOPWATCH_Check26,
__TUT3_STOPWATCH_Check27,
__TUT3_STOPWATCH_Check28,
__TUT3_STOPWATCH_Check29,
__TUT3_STOPWATCH_Check30,
__TUT3_STOPWATCH_Check31,
__TUT3_STOPWATCH_Check32,
__TUT3_STOPWATCH_Check33
};
static int **__TUT3_STOPWATCH_PCheckArray =  __TUT3_STOPWATCH_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void TUT3_STOPWATCH_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __TUT3_STOPWATCH_show_variable (int __V) {
extern struct __VariableEntry __TUT3_STOPWATCH_VariableTable[];
struct __VariableEntry* p_var = &__TUT3_STOPWATCH_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __TUT3_STOPWATCH_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __TUT3_STOPWATCH_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __TUT3_STOPWATCH_InstanceTable [] = {
{"TUT3_STOPWATCH",0,"/home/student/workspace/eclipse_ws_tutorial/TUT3_STOPWATCH//src","TUT3_STOPWATCH.strl",{1,9,1,0},{1,71,1,0},{0,0,0,0}},
{"SECOND_COUNTER",0,"/home/student/workspace/eclipse_ws_tutorial/TUT3_STOPWATCH//src","TUT3_STOPWATCH.strl",{1,75,1,1},{1,92,1,1},{1,37,4,0}},
{"MINUTE_COUNTER",0,"/home/student/workspace/eclipse_ws_tutorial/TUT3_STOPWATCH//src","TUT3_STOPWATCH.strl",{1,75,1,2},{1,92,1,2},{1,51,4,0}},
};

struct __SignalEntry __TUT3_STOPWATCH_SignalTable [] = {
{"STOP",33,0,0,{1,10,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"START",33,0,0,{1,10,13,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RESET",33,0,0,{1,10,19,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"MIL_SEC",2,3,0,{1,12,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"MIN",2,4,0,{1,13,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"SEC",2,5,0,{1,13,29,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __TUT3_STOPWATCH_InputTable [] = {
{"STOP",23,0,0,-1,0,0,0,TUT3_STOPWATCH_IS_STOP,0,{1,10,8,0}},
{"START",95,0,0,-1,0,1,0,TUT3_STOPWATCH_IS_START,0,{1,10,13,0}},
{"RESET",84,0,0,-1,0,2,0,TUT3_STOPWATCH_IS_RESET,0,{1,10,19,0}}};

struct __VariableEntry __TUT3_STOPWATCH_VariableTable [] = {
{"__TUT3_STOPWATCH_V0","V0","boolean",-2,2,0,(char*)&__TUT3_STOPWATCH_V0,"STOP",0,0,0,{1,10,8,0}},
{"__TUT3_STOPWATCH_V1","V1","boolean",-2,2,0,(char*)&__TUT3_STOPWATCH_V1,"START",0,0,0,{1,10,13,0}},
{"__TUT3_STOPWATCH_V2","V2","boolean",-2,2,0,(char*)&__TUT3_STOPWATCH_V2,"RESET",0,0,0,{1,10,19,0}},
{"__TUT3_STOPWATCH_V3","V3","integer",-3,1,0,(char*)&__TUT3_STOPWATCH_V3,"MIL_SEC",0,0,0,{1,12,9,0}},
{"__TUT3_STOPWATCH_V4","V4","integer",-3,1,0,(char*)&__TUT3_STOPWATCH_V4,"MIN",0,0,0,{1,13,9,0}},
{"__TUT3_STOPWATCH_V5","V5","integer",-3,1,0,(char*)&__TUT3_STOPWATCH_V5,"SEC",0,0,0,{1,13,29,0}},
{"__TUT3_STOPWATCH_V6","V6","integer",-3,0,0,(char*)&__TUT3_STOPWATCH_V6,"v_MIL_SEC",0,0,0,{1,15,6,0}},
{"__TUT3_STOPWATCH_V7","V7","integer",-3,0,0,(char*)&__TUT3_STOPWATCH_V7,"v_MIN",0,0,0,{1,16,6,0}},
{"__TUT3_STOPWATCH_V8","V8","integer",-3,0,0,(char*)&__TUT3_STOPWATCH_V8,"v_SEC",0,0,0,{1,17,6,0}},
{"__TUT3_STOPWATCH_V9","V9","integer",-3,10,0,(char*)&__TUT3_STOPWATCH_V9,"SEC",0,0,0,{1,77,9,1}},
{"__TUT3_STOPWATCH_V10","V10","integer",-3,0,0,(char*)&__TUT3_STOPWATCH_V10,"v_n_value",0,0,0,{1,80,6,1}},
{"__TUT3_STOPWATCH_V11","V11","integer",-3,3,0,(char*)&__TUT3_STOPWATCH_V11,"0",0,0,0,{1,84,8,1}},
{"__TUT3_STOPWATCH_V12","V12","integer",-3,10,0,(char*)&__TUT3_STOPWATCH_V12,"MIN",0,0,0,{1,77,9,2}},
{"__TUT3_STOPWATCH_V13","V13","integer",-3,0,0,(char*)&__TUT3_STOPWATCH_V13,"v_n_value",0,0,0,{1,80,6,2}},
{"__TUT3_STOPWATCH_V14","V14","integer",-3,3,0,(char*)&__TUT3_STOPWATCH_V14,"0",0,0,0,{1,84,8,2}}
};

struct __HaltEntry __TUT3_STOPWATCH_HaltTable [] = {
{{1,71,1,0}},
{{1,20,3,0}},
{{1,29,4,0}},
{{1,61,4,0}},
{{1,65,2,0}},
{{1,84,2,1}},
{{1,84,2,2}}
};


static void __TUT3_STOPWATCH__reset_input () {
__TUT3_STOPWATCH_V0 = _false;
__TUT3_STOPWATCH_V1 = _false;
__TUT3_STOPWATCH_V2 = _false;
}


/* MODULE DATA FOR SIMULATION */

int TUT3_STOPWATCH();
int TUT3_STOPWATCH_reset();

static struct __ModuleEntry __TUT3_STOPWATCH_ModuleData = {
"Simulation interface release 5","TUT3_STOPWATCH",
3,0,6,3,0,0,3,0,0,0,0,15,0,7,0,0,0,
__TUT3_STOPWATCH_HaltList,
__TUT3_STOPWATCH_AwaitedList,
__TUT3_STOPWATCH_EmittedList,
__TUT3_STOPWATCH_StartedList,
__TUT3_STOPWATCH_KilledList,
__TUT3_STOPWATCH_SuspendedList,
__TUT3_STOPWATCH_ActiveList,
0,0,
TUT3_STOPWATCH_initialize,TUT3_STOPWATCH,TUT3_STOPWATCH_reset,
__TUT3_STOPWATCH_show_variable,__TUT3_STOPWATCH_set_variable,__TUT3_STOPWATCH_check_value,0,
__TUT3_STOPWATCH_InstanceTable,
0,
__TUT3_STOPWATCH_SignalTable,__TUT3_STOPWATCH_InputTable,0,
0,0,
__TUT3_STOPWATCH_VariableTable,
0,
__TUT3_STOPWATCH_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __TUT3_STOPWATCH_R[5] = {_true,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int TUT3_STOPWATCH () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[11];

__TUT3_STOPWATCH_ModuleData.awaited_list = __TUT3_STOPWATCH_AwaitedList;
__ResetModuleEntryBeforeReaction();
E[0] = __TUT3_STOPWATCH_R[2]||__TUT3_STOPWATCH_R[3]||__TUT3_STOPWATCH_R[4];
E[1] = (E[0]||__TUT3_STOPWATCH_R[1])&&!(__TUT3_STOPWATCH_R[0]);
E[2] = E[1]&&(__CheckVariables(__TUT3_STOPWATCH_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__TUT3_STOPWATCH_A3());
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[10]);__TUT3_STOPWATCH_A10();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A10\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[11]);__TUT3_STOPWATCH_A11();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A11\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[24]);__TUT3_STOPWATCH_A24();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A24\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[12]);__TUT3_STOPWATCH_A12();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A12\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[18]);__TUT3_STOPWATCH_A18();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A18\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[13]);__TUT3_STOPWATCH_A13();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A13\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[14]);__TUT3_STOPWATCH_A14();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A14\n");
#endif
}
if (__TUT3_STOPWATCH_R[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[15]);__TUT3_STOPWATCH_A15();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A15\n");
#endif
}
E[2] = E[2]||__TUT3_STOPWATCH_R[0];
E[3] = E[2]&&(__CheckVariables(__TUT3_STOPWATCH_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__TUT3_STOPWATCH_A2());
E[1] = E[1]&&!((__CheckVariables(__TUT3_STOPWATCH_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__TUT3_STOPWATCH_A3()));
E[4] = __TUT3_STOPWATCH_R[1]&&E[1];
E[5] = E[4]&&(__CheckVariables(__TUT3_STOPWATCH_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__TUT3_STOPWATCH_A2());
E[5] = E[3]||E[5];
E[3] = E[5]||(__TUT3_STOPWATCH_R[2]&&E[1]);
if (E[3]) {
__AppendToList(__TUT3_STOPWATCH_EmittedList,3);
}
if (E[3]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[16]);__TUT3_STOPWATCH_A16();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A16\n");
#endif
}
if (E[3]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[17]);__TUT3_STOPWATCH_A17();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A17\n");
#endif
}
if (E[3]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[4]);__TUT3_STOPWATCH_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A4\n");
#endif
}
E[6] = __TUT3_STOPWATCH_R[4]&&E[1];
E[1] = __TUT3_STOPWATCH_R[3]&&E[1];
E[7] = E[1]&&E[3];
E[8] = E[7]&&(__CheckVariables(__TUT3_STOPWATCH_CheckArray[30]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 30\n"),
#endif
__TUT3_STOPWATCH_A30());
if (E[8]) {
__AppendToList(__TUT3_STOPWATCH_EmittedList,5);
}
if (E[8]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[21]);__TUT3_STOPWATCH_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A21\n");
#endif
}
if (E[8]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[22]);__TUT3_STOPWATCH_A22();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A22\n");
#endif
}
E[9] = E[6]&&E[8];
E[10] = E[9]&&(__CheckVariables(__TUT3_STOPWATCH_CheckArray[31]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 31\n"),
#endif
__TUT3_STOPWATCH_A31());
if (E[10]) {
__AppendToList(__TUT3_STOPWATCH_EmittedList,4);
}
if (E[10]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[27]);__TUT3_STOPWATCH_A27();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A27\n");
#endif
}
if (E[10]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[28]);__TUT3_STOPWATCH_A28();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A28\n");
#endif
}
if (E[10]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[29]);__TUT3_STOPWATCH_A29();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A29\n");
#endif
}
if (E[10]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[5]);__TUT3_STOPWATCH_A5();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A5\n");
#endif
}
if (E[5]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[32]);__TUT3_STOPWATCH_A32();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A32\n");
#endif
}
if (E[5]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[20]);__TUT3_STOPWATCH_A20();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A20\n");
#endif
}
if (E[5]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[21]);__TUT3_STOPWATCH_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A21\n");
#endif
}
if (E[8]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[23]);__TUT3_STOPWATCH_A23();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A23\n");
#endif
}
E[1] = E[5]||E[8]||(__TUT3_STOPWATCH_R[3]&&((E[7]&&!(E[8]))||(E[1]&&!(E[3]))));
if (E[5]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[33]);__TUT3_STOPWATCH_A33();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A33\n");
#endif
}
if (E[5]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[26]);__TUT3_STOPWATCH_A26();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A26\n");
#endif
}
if (E[5]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[27]);__TUT3_STOPWATCH_A27();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A27\n");
#endif
}
E[6] = E[5]||E[10]||(__TUT3_STOPWATCH_R[4]&&((E[9]&&!(E[10]))||(E[6]&&!(E[8]))));
E[2] = E[2]&&!((__CheckVariables(__TUT3_STOPWATCH_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__TUT3_STOPWATCH_A2()));
E[4] = E[4]&&!((__CheckVariables(__TUT3_STOPWATCH_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__TUT3_STOPWATCH_A2()));
__TUT3_STOPWATCH_R[1] = E[2]||(__TUT3_STOPWATCH_R[1]&&E[4]);
E[0] = ((E[3]||E[1]||E[6])&&((E[0]&&!(__TUT3_STOPWATCH_R[2]))||E[3])&&((E[0]&&!(__TUT3_STOPWATCH_R[3]))||E[1])&&((E[0]&&!(__TUT3_STOPWATCH_R[4]))||E[6]))||__TUT3_STOPWATCH_R[1];
if (E[10]&&E[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[25]);__TUT3_STOPWATCH_A25();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A25\n");
#endif
}
if (E[8]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[6]);__TUT3_STOPWATCH_A6();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A6\n");
#endif
}
if (E[8]&&E[0]) {
__CheckVariables(__TUT3_STOPWATCH_CheckArray[19]);__TUT3_STOPWATCH_A19();
#ifdef TRACE_ACTION
fprintf(stderr, "__TUT3_STOPWATCH_A19\n");
#endif
}
E[4] = !(_true);
__TUT3_STOPWATCH_R[0] = !(_true);
if (__TUT3_STOPWATCH_R[1]) { __AppendToList(__TUT3_STOPWATCH_HaltList,1); }
__TUT3_STOPWATCH_R[2] = E[3];
if (__TUT3_STOPWATCH_R[2]) { __AppendToList(__TUT3_STOPWATCH_HaltList,2); }
__TUT3_STOPWATCH_R[3] = E[1];
if (__TUT3_STOPWATCH_R[3]) { __AppendToList(__TUT3_STOPWATCH_HaltList,5); }
__TUT3_STOPWATCH_R[4] = E[6];
if (__TUT3_STOPWATCH_R[4]) { __AppendToList(__TUT3_STOPWATCH_HaltList,6); }
if (!E[0]) { __AppendToList(__TUT3_STOPWATCH_HaltList,0); }
__ResetModuleEntryAfterReaction();
__TUT3_STOPWATCH_ModuleData.awaited_list = __TUT3_STOPWATCH_AllAwaitedList;
__TUT3_STOPWATCH__reset_input();
return E[0];
}

/* AUTOMATON RESET */

int TUT3_STOPWATCH_reset () {
__TUT3_STOPWATCH_ModuleData.awaited_list = __TUT3_STOPWATCH_AwaitedList;
__ResetModuleEntry();
__TUT3_STOPWATCH_ModuleData.awaited_list = __TUT3_STOPWATCH_AllAwaitedList;
__TUT3_STOPWATCH_ModuleData.state = 0;
__TUT3_STOPWATCH_R[0] = _true;
__TUT3_STOPWATCH_R[1] = _false;
__TUT3_STOPWATCH_R[2] = _false;
__TUT3_STOPWATCH_R[3] = _false;
__TUT3_STOPWATCH_R[4] = _false;
__TUT3_STOPWATCH__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__TUT3_STOPWATCH_ModuleData
};
