/* sscc : C CODE OF SORTED EQUATIONS INSERTSORT - SIMULATION MODE */

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
#define __INSERTSORT_GENERIC_TEST(TEST) return TEST;
typedef void (*__INSERTSORT_APF)();
static __INSERTSORT_APF *__INSERTSORT_PActionArray;
static int **__INSERTSORT_PCheckArray;
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

static unsigned short __INSERTSORT_HaltList[4];
static unsigned short __INSERTSORT_AwaitedList[12];
static unsigned short __INSERTSORT_EmittedList[12];
static unsigned short __INSERTSORT_StartedList[1];
static unsigned short __INSERTSORT_KilledList[1];
static unsigned short __INSERTSORT_SuspendedList[1];
static unsigned short __INSERTSORT_ActiveList[1];
static unsigned short __INSERTSORT_AllAwaitedList[12]={5,0,1,2,3,8};


/* INPUT FUNCTIONS */

void INSERTSORT_I_CARD1_IN (integer __V) {
__WriteVariable(0);
__INSERTSORT_V0 = __V;
__INSERTSORT_V1 = _true;
}
void INSERTSORT_IS_CARD1_IN (string __V) {
__WriteVariable(0);
_text_to_integer(&__INSERTSORT_V0,__V);
__INSERTSORT_V1 = _true;
}
void INSERTSORT_I_CARD2_IN (integer __V) {
__WriteVariable(2);
__INSERTSORT_V2 = __V;
__INSERTSORT_V3 = _true;
}
void INSERTSORT_IS_CARD2_IN (string __V) {
__WriteVariable(2);
_text_to_integer(&__INSERTSORT_V2,__V);
__INSERTSORT_V3 = _true;
}
void INSERTSORT_I_CARD3_IN (integer __V) {
__WriteVariable(4);
__INSERTSORT_V4 = __V;
__INSERTSORT_V5 = _true;
}
void INSERTSORT_IS_CARD3_IN (string __V) {
__WriteVariable(4);
_text_to_integer(&__INSERTSORT_V4,__V);
__INSERTSORT_V5 = _true;
}
void INSERTSORT_I_CARD4_IN (integer __V) {
__WriteVariable(6);
__INSERTSORT_V6 = __V;
__INSERTSORT_V7 = _true;
}
void INSERTSORT_IS_CARD4_IN (string __V) {
__WriteVariable(6);
_text_to_integer(&__INSERTSORT_V6,__V);
__INSERTSORT_V7 = _true;
}
void INSERTSORT_I_START () {
__INSERTSORT_V12 = _true;
}
void INSERTSORT_IS_START () {
__INSERTSORT_V12 = _true;
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int INSERTSORT_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __INSERTSORT_A1 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V1);
}
static int __INSERTSORT_Check1 [] = {1,0,0};
static int __INSERTSORT_A2 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V3);
}
static int __INSERTSORT_Check2 [] = {1,0,0};
static int __INSERTSORT_A3 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V5);
}
static int __INSERTSORT_Check3 [] = {1,0,0};
static int __INSERTSORT_A4 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V7);
}
static int __INSERTSORT_Check4 [] = {1,0,0};
static int __INSERTSORT_A5 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V12);
}
static int __INSERTSORT_Check5 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __INSERTSORT_A6 () {
#ifdef __OUTPUT
INSERTSORT_O_CARD1_OUT(__INSERTSORT_V8);
#endif
__AppendToList(__INSERTSORT_EmittedList,4);
}
static int __INSERTSORT_Check6 [] = {1,0,0};
static void __INSERTSORT_A7 () {
#ifdef __OUTPUT
INSERTSORT_O_CARD2_OUT(__INSERTSORT_V9);
#endif
__AppendToList(__INSERTSORT_EmittedList,5);
}
static int __INSERTSORT_Check7 [] = {1,0,0};
static void __INSERTSORT_A8 () {
#ifdef __OUTPUT
INSERTSORT_O_CARD3_OUT(__INSERTSORT_V10);
#endif
__AppendToList(__INSERTSORT_EmittedList,6);
}
static int __INSERTSORT_Check8 [] = {1,0,0};
static void __INSERTSORT_A9 () {
#ifdef __OUTPUT
INSERTSORT_O_CARD4_OUT(__INSERTSORT_V11);
#endif
__AppendToList(__INSERTSORT_EmittedList,7);
}
static int __INSERTSORT_Check9 [] = {1,0,0};
static void __INSERTSORT_A10 () {
#ifdef __OUTPUT
INSERTSORT_O_FINISHED();
#endif
__AppendToList(__INSERTSORT_EmittedList,9);
}
static int __INSERTSORT_Check10 [] = {1,0,0};

/* ASSIGNMENTS */

static void __INSERTSORT_A11 () {
__INSERTSORT_V1 = _false;
}
static int __INSERTSORT_Check11 [] = {1,0,1,1};
static void __INSERTSORT_A12 () {
__INSERTSORT_V3 = _false;
}
static int __INSERTSORT_Check12 [] = {1,0,1,3};
static void __INSERTSORT_A13 () {
__INSERTSORT_V5 = _false;
}
static int __INSERTSORT_Check13 [] = {1,0,1,5};
static void __INSERTSORT_A14 () {
__INSERTSORT_V7 = _false;
}
static int __INSERTSORT_Check14 [] = {1,0,1,7};
static void __INSERTSORT_A15 () {
__INSERTSORT_V12 = _false;
}
static int __INSERTSORT_Check15 [] = {1,0,1,12};
static void __INSERTSORT_A16 () {
__INSERTSORT_V10 = __INSERTSORT_V6;
}
static int __INSERTSORT_Check16 [] = {1,1,6,1,10};
static void __INSERTSORT_A17 () {
__INSERTSORT_V11 = __INSERTSORT_V4;
}
static int __INSERTSORT_Check17 [] = {1,1,4,1,11};
static void __INSERTSORT_A18 () {
__INSERTSORT_V9 = __INSERTSORT_V2;
}
static int __INSERTSORT_Check18 [] = {1,1,2,1,9};
static void __INSERTSORT_A19 () {
__INSERTSORT_V8 = __INSERTSORT_V0;
}
static int __INSERTSORT_Check19 [] = {1,1,0,1,8};
static void __INSERTSORT_A20 () {
__INSERTSORT_V11 = __INSERTSORT_V6;
}
static int __INSERTSORT_Check20 [] = {1,1,6,1,11};
static void __INSERTSORT_A21 () {
__INSERTSORT_V10 = __INSERTSORT_V2;
}
static int __INSERTSORT_Check21 [] = {1,1,2,1,10};
static void __INSERTSORT_A22 () {
__INSERTSORT_V9 = __INSERTSORT_V4;
}
static int __INSERTSORT_Check22 [] = {1,1,4,1,9};
static void __INSERTSORT_A23 () {
__INSERTSORT_V8 = __INSERTSORT_V0;
}
static int __INSERTSORT_Check23 [] = {1,1,0,1,8};
static void __INSERTSORT_A24 () {
__INSERTSORT_V11 = __INSERTSORT_V6;
}
static int __INSERTSORT_Check24 [] = {1,1,6,1,11};
static void __INSERTSORT_A25 () {
__INSERTSORT_V10 = __INSERTSORT_V4;
}
static int __INSERTSORT_Check25 [] = {1,1,4,1,10};
static void __INSERTSORT_A26 () {
__INSERTSORT_V9 = __INSERTSORT_V0;
}
static int __INSERTSORT_Check26 [] = {1,1,0,1,9};
static void __INSERTSORT_A27 () {
__INSERTSORT_V8 = __INSERTSORT_V2;
}
static int __INSERTSORT_Check27 [] = {1,1,2,1,8};

/* PROCEDURE CALLS */

/* CONDITIONS */

static int __INSERTSORT_A28 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V6>__INSERTSORT_V4);
}
static int __INSERTSORT_Check28 [] = {1,2,6,4,0};
static int __INSERTSORT_A29 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V4>__INSERTSORT_V2);
}
static int __INSERTSORT_Check29 [] = {1,2,4,2,0};
static int __INSERTSORT_A30 () {
__INSERTSORT_GENERIC_TEST(__INSERTSORT_V2>__INSERTSORT_V0);
}
static int __INSERTSORT_Check30 [] = {1,2,2,0,0};

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

static void __INSERTSORT_A31 () {
;
__ResetVariable(0);
}
static int __INSERTSORT_Check31 [] = {1,0,0};
static void __INSERTSORT_A32 () {
;
__ResetVariable(2);
}
static int __INSERTSORT_Check32 [] = {1,0,0};
static void __INSERTSORT_A33 () {
;
__ResetVariable(4);
}
static int __INSERTSORT_Check33 [] = {1,0,0};
static void __INSERTSORT_A34 () {
;
__ResetVariable(6);
}
static int __INSERTSORT_Check34 [] = {1,0,0};
static void __INSERTSORT_A35 () {
;
__ResetVariable(8);
}
static int __INSERTSORT_Check35 [] = {1,0,0};
static void __INSERTSORT_A36 () {
;
__ResetVariable(9);
}
static int __INSERTSORT_Check36 [] = {1,0,0};
static void __INSERTSORT_A37 () {
;
__ResetVariable(10);
}
static int __INSERTSORT_Check37 [] = {1,0,0};
static void __INSERTSORT_A38 () {
;
__ResetVariable(11);
}
static int __INSERTSORT_Check38 [] = {1,0,0};

/* ACTION SEQUENCES */


static int *__INSERTSORT_CheckArray[] = {
0,
__INSERTSORT_Check1,
__INSERTSORT_Check2,
__INSERTSORT_Check3,
__INSERTSORT_Check4,
__INSERTSORT_Check5,
__INSERTSORT_Check6,
__INSERTSORT_Check7,
__INSERTSORT_Check8,
__INSERTSORT_Check9,
__INSERTSORT_Check10,
__INSERTSORT_Check11,
__INSERTSORT_Check12,
__INSERTSORT_Check13,
__INSERTSORT_Check14,
__INSERTSORT_Check15,
__INSERTSORT_Check16,
__INSERTSORT_Check17,
__INSERTSORT_Check18,
__INSERTSORT_Check19,
__INSERTSORT_Check20,
__INSERTSORT_Check21,
__INSERTSORT_Check22,
__INSERTSORT_Check23,
__INSERTSORT_Check24,
__INSERTSORT_Check25,
__INSERTSORT_Check26,
__INSERTSORT_Check27,
__INSERTSORT_Check28,
__INSERTSORT_Check29,
__INSERTSORT_Check30,
__INSERTSORT_Check31,
__INSERTSORT_Check32,
__INSERTSORT_Check33,
__INSERTSORT_Check34,
__INSERTSORT_Check35,
__INSERTSORT_Check36,
__INSERTSORT_Check37,
__INSERTSORT_Check38
};
static int **__INSERTSORT_PCheckArray =  __INSERTSORT_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void INSERTSORT_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __INSERTSORT_show_variable (int __V) {
extern struct __VariableEntry __INSERTSORT_VariableTable[];
struct __VariableEntry* p_var = &__INSERTSORT_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __INSERTSORT_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __INSERTSORT_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __INSERTSORT_InstanceTable [] = {
{"INSERTSORT",0,"/home/student/workspace/eclipse_ws_tutorial/INSERTSORT//src","INSERTSORT.strl",{1,1,1,0},{1,47,1,0},{0,0,0,0}},
};

struct __SignalEntry __INSERTSORT_SignalTable [] = {
{"CARD1_IN",1,0,0,{1,3,7,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD2_IN",1,2,0,{1,3,27,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD3_IN",1,4,0,{1,3,47,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD4_IN",1,6,0,{1,3,67,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD1_OUT",2,8,0,{1,4,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD2_OUT",2,9,0,{1,4,29,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD3_OUT",2,10,0,{1,4,50,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CARD4_OUT",2,11,0,{1,4,71,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"START",33,0,0,{1,5,7,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"FINISHED",34,0,0,{1,6,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,13,7,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __INSERTSORT_InputTable [] = {
{"CARD1_IN",72,"integer",0,-3,0,0,_check_integer,INSERTSORT_IS_CARD1_IN,0,{1,3,7,0}},
{"CARD2_IN",73,"integer",0,-3,0,1,_check_integer,INSERTSORT_IS_CARD2_IN,0,{1,3,27,0}},
{"CARD3_IN",74,"integer",0,-3,0,2,_check_integer,INSERTSORT_IS_CARD3_IN,0,{1,3,47,0}},
{"CARD4_IN",75,"integer",0,-3,0,3,_check_integer,INSERTSORT_IS_CARD4_IN,0,{1,3,67,0}},
{"START",95,0,0,-1,0,8,0,INSERTSORT_IS_START,0,{1,5,7,0}}};

struct __VariableEntry __INSERTSORT_VariableTable [] = {
{"__INSERTSORT_V0","V0","integer",-3,1,0,(char*)&__INSERTSORT_V0,"CARD1_IN",0,0,0,{1,3,7,0}},
{"__INSERTSORT_V1","V1","boolean",-2,2,0,(char*)&__INSERTSORT_V1,"CARD1_IN",0,0,0,{1,3,7,0}},
{"__INSERTSORT_V2","V2","integer",-3,1,0,(char*)&__INSERTSORT_V2,"CARD2_IN",0,0,0,{1,3,27,0}},
{"__INSERTSORT_V3","V3","boolean",-2,2,0,(char*)&__INSERTSORT_V3,"CARD2_IN",0,0,0,{1,3,27,0}},
{"__INSERTSORT_V4","V4","integer",-3,1,0,(char*)&__INSERTSORT_V4,"CARD3_IN",0,0,0,{1,3,47,0}},
{"__INSERTSORT_V5","V5","boolean",-2,2,0,(char*)&__INSERTSORT_V5,"CARD3_IN",0,0,0,{1,3,47,0}},
{"__INSERTSORT_V6","V6","integer",-3,1,0,(char*)&__INSERTSORT_V6,"CARD4_IN",0,0,0,{1,3,67,0}},
{"__INSERTSORT_V7","V7","boolean",-2,2,0,(char*)&__INSERTSORT_V7,"CARD4_IN",0,0,0,{1,3,67,0}},
{"__INSERTSORT_V8","V8","integer",-3,1,0,(char*)&__INSERTSORT_V8,"CARD1_OUT",0,0,0,{1,4,8,0}},
{"__INSERTSORT_V9","V9","integer",-3,1,0,(char*)&__INSERTSORT_V9,"CARD2_OUT",0,0,0,{1,4,29,0}},
{"__INSERTSORT_V10","V10","integer",-3,1,0,(char*)&__INSERTSORT_V10,"CARD3_OUT",0,0,0,{1,4,50,0}},
{"__INSERTSORT_V11","V11","integer",-3,1,0,(char*)&__INSERTSORT_V11,"CARD4_OUT",0,0,0,{1,4,71,0}},
{"__INSERTSORT_V12","V12","boolean",-2,2,0,(char*)&__INSERTSORT_V12,"START",0,0,0,{1,5,7,0}}
};

struct __HaltEntry __INSERTSORT_HaltTable [] = {
{{1,47,1,0}},
{{1,10,6,0}},
{{1,42,2,0}}
};


static void __INSERTSORT__reset_input () {
__INSERTSORT_V1 = _false;
__INSERTSORT_V3 = _false;
__INSERTSORT_V5 = _false;
__INSERTSORT_V7 = _false;
__INSERTSORT_V12 = _false;
}


/* MODULE DATA FOR SIMULATION */

int INSERTSORT();
int INSERTSORT_reset();

static struct __ModuleEntry __INSERTSORT_ModuleData = {
"Simulation interface release 5","INSERTSORT",
1,0,11,5,0,0,5,0,1,0,0,13,0,3,0,0,0,
__INSERTSORT_HaltList,
__INSERTSORT_AwaitedList,
__INSERTSORT_EmittedList,
__INSERTSORT_StartedList,
__INSERTSORT_KilledList,
__INSERTSORT_SuspendedList,
__INSERTSORT_ActiveList,
0,0,
INSERTSORT_initialize,INSERTSORT,INSERTSORT_reset,
__INSERTSORT_show_variable,__INSERTSORT_set_variable,__INSERTSORT_check_value,0,
__INSERTSORT_InstanceTable,
0,
__INSERTSORT_SignalTable,__INSERTSORT_InputTable,0,
0,0,
__INSERTSORT_VariableTable,
0,
__INSERTSORT_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __INSERTSORT_R[3] = {_true,
 _false,
 _false};

/* AUTOMATON ENGINE */

int INSERTSORT () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[14];

__INSERTSORT_ModuleData.awaited_list = __INSERTSORT_AwaitedList;
__ResetModuleEntryBeforeReaction();
E[0] = __INSERTSORT_R[1]&&!(__INSERTSORT_R[0]);
E[1] = E[0]&&(__CheckVariables(__INSERTSORT_CheckArray[5]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 5\n"),
#endif
__INSERTSORT_A5());
E[1] = (__INSERTSORT_R[2]&&!(__INSERTSORT_R[0]))||E[1];
E[2] = E[1]&&(__CheckVariables(__INSERTSORT_CheckArray[28]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 28\n"),
#endif
__INSERTSORT_A28());
if (E[2]) {
__CheckVariables(__INSERTSORT_CheckArray[16]);__INSERTSORT_A16();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A16\n");
#endif
}
if (E[2]) {
__CheckVariables(__INSERTSORT_CheckArray[17]);__INSERTSORT_A17();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A17\n");
#endif
}
if (E[2]) {
__CheckVariables(__INSERTSORT_CheckArray[18]);__INSERTSORT_A18();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A18\n");
#endif
}
if (E[2]) {
__CheckVariables(__INSERTSORT_CheckArray[19]);__INSERTSORT_A19();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A19\n");
#endif
}
E[1] = E[1]&&!(E[2]);
E[3] = E[1]&&(__CheckVariables(__INSERTSORT_CheckArray[29]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 29\n"),
#endif
__INSERTSORT_A29());
if (E[3]) {
__CheckVariables(__INSERTSORT_CheckArray[20]);__INSERTSORT_A20();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A20\n");
#endif
}
if (E[3]) {
__CheckVariables(__INSERTSORT_CheckArray[21]);__INSERTSORT_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A21\n");
#endif
}
if (E[3]) {
__CheckVariables(__INSERTSORT_CheckArray[22]);__INSERTSORT_A22();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A22\n");
#endif
}
if (E[3]) {
__CheckVariables(__INSERTSORT_CheckArray[23]);__INSERTSORT_A23();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A23\n");
#endif
}
E[1] = E[1]&&!(E[3]);
E[4] = E[1]&&(__CheckVariables(__INSERTSORT_CheckArray[30]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 30\n"),
#endif
__INSERTSORT_A30());
if (E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[24]);__INSERTSORT_A24();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A24\n");
#endif
}
if (E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[25]);__INSERTSORT_A25();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A25\n");
#endif
}
if (E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[26]);__INSERTSORT_A26();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A26\n");
#endif
}
if (E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[27]);__INSERTSORT_A27();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A27\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__AppendToList(__INSERTSORT_EmittedList,4);
}
if (E[2]||E[3]||E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[6]);__INSERTSORT_A6();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A6\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__AppendToList(__INSERTSORT_EmittedList,5);
}
if (E[2]||E[3]||E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[7]);__INSERTSORT_A7();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A7\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__AppendToList(__INSERTSORT_EmittedList,6);
}
if (E[2]||E[3]||E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[8]);__INSERTSORT_A8();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A8\n");
#endif
}
if (E[2]||E[3]||E[4]) {
__AppendToList(__INSERTSORT_EmittedList,7);
}
if (E[2]||E[3]||E[4]) {
__CheckVariables(__INSERTSORT_CheckArray[9]);__INSERTSORT_A9();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A9\n");
#endif
}
E[1] = E[1]&&!(E[4]);
if (E[1]) {
__AppendToList(__INSERTSORT_EmittedList,9);
}
if (E[1]) {
__CheckVariables(__INSERTSORT_CheckArray[10]);__INSERTSORT_A10();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A10\n");
#endif
}
E[5] = E[2]||E[3]||E[4];
if (E[5]) {
__AppendToList(__INSERTSORT_EmittedList,10);
}
E[6] = __INSERTSORT_R[0]&&!((__CheckVariables(__INSERTSORT_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__INSERTSORT_A1()));
if (E[6]) {
__CheckVariables(__INSERTSORT_CheckArray[31]);__INSERTSORT_A31();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A31\n");
#endif
}
E[7] = __INSERTSORT_R[0]&&!((__CheckVariables(__INSERTSORT_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__INSERTSORT_A2()));
if (E[7]) {
__CheckVariables(__INSERTSORT_CheckArray[32]);__INSERTSORT_A32();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A32\n");
#endif
}
E[8] = __INSERTSORT_R[0]&&!((__CheckVariables(__INSERTSORT_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__INSERTSORT_A3()));
if (E[8]) {
__CheckVariables(__INSERTSORT_CheckArray[33]);__INSERTSORT_A33();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A33\n");
#endif
}
E[9] = __INSERTSORT_R[0]&&!((__CheckVariables(__INSERTSORT_CheckArray[4]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 4\n"),
#endif
__INSERTSORT_A4()));
if (E[9]) {
__CheckVariables(__INSERTSORT_CheckArray[34]);__INSERTSORT_A34();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A34\n");
#endif
}
if (__INSERTSORT_R[0]) {
__CheckVariables(__INSERTSORT_CheckArray[35]);__INSERTSORT_A35();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A35\n");
#endif
}
if (__INSERTSORT_R[0]) {
__CheckVariables(__INSERTSORT_CheckArray[36]);__INSERTSORT_A36();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A36\n");
#endif
}
if (__INSERTSORT_R[0]) {
__CheckVariables(__INSERTSORT_CheckArray[37]);__INSERTSORT_A37();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A37\n");
#endif
}
if (__INSERTSORT_R[0]) {
__CheckVariables(__INSERTSORT_CheckArray[38]);__INSERTSORT_A38();
#ifdef TRACE_ACTION
fprintf(stderr, "__INSERTSORT_A38\n");
#endif
}
E[10] = !(_true);
E[0] = E[0]&&!((__CheckVariables(__INSERTSORT_CheckArray[5]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 5\n"),
#endif
__INSERTSORT_A5()));
E[0] = __INSERTSORT_R[0]||(__INSERTSORT_R[1]&&E[0]);
E[11] = E[2]||E[3]||E[4]||E[1];
E[12] = E[0]||E[11];
E[13] = __INSERTSORT_R[1]||__INSERTSORT_R[2];
__INSERTSORT_R[0] = !(_true);
__INSERTSORT_R[1] = E[0];
if (__INSERTSORT_R[1]) { __AppendToList(__INSERTSORT_HaltList,1); }
__INSERTSORT_R[2] = E[11];
if (__INSERTSORT_R[2]) { __AppendToList(__INSERTSORT_HaltList,2); }
if (!E[12]) { __AppendToList(__INSERTSORT_HaltList,0); }
__ResetModuleEntryAfterReaction();
__INSERTSORT_ModuleData.awaited_list = __INSERTSORT_AllAwaitedList;
__INSERTSORT__reset_input();
return E[12];
}

/* AUTOMATON RESET */

int INSERTSORT_reset () {
__INSERTSORT_ModuleData.awaited_list = __INSERTSORT_AwaitedList;
__ResetModuleEntry();
__INSERTSORT_ModuleData.awaited_list = __INSERTSORT_AllAwaitedList;
__INSERTSORT_ModuleData.state = 0;
__INSERTSORT_R[0] = _true;
__INSERTSORT_R[1] = _false;
__INSERTSORT_R[2] = _false;
__INSERTSORT__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__INSERTSORT_ModuleData
};
