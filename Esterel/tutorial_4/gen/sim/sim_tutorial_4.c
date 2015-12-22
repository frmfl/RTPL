/* sscc : C CODE OF SORTED EQUATIONS tutorial_4 - SIMULATION MODE */

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
#define __tutorial_4_GENERIC_TEST(TEST) return TEST;
typedef void (*__tutorial_4_APF)();
static __tutorial_4_APF *__tutorial_4_PActionArray;
static int **__tutorial_4_PCheckArray;
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

static boolean __tutorial_4_V0;
static boolean __tutorial_4_V1;
static integer __tutorial_4_V2;

static unsigned short __tutorial_4_HaltList[10];
static unsigned short __tutorial_4_AwaitedList[8];
static unsigned short __tutorial_4_EmittedList[8];
static unsigned short __tutorial_4_StartedList[1];
static unsigned short __tutorial_4_KilledList[1];
static unsigned short __tutorial_4_SuspendedList[1];
static unsigned short __tutorial_4_ActiveList[1];
static unsigned short __tutorial_4_AllAwaitedList[8]={2,0,1};


/* INPUT FUNCTIONS */

void tutorial_4_I_MANUAL_TRIGGER () {
__tutorial_4_V0 = _true;
}
void tutorial_4_IS_MANUAL_TRIGGER () {
__tutorial_4_V0 = _true;
}
void tutorial_4_I_MAYBE_CRITICAL () {
__tutorial_4_V1 = _true;
}
void tutorial_4_IS_MAYBE_CRITICAL () {
__tutorial_4_V1 = _true;
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int tutorial_4_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __tutorial_4_A1 () {
__tutorial_4_GENERIC_TEST(__tutorial_4_V0);
}
static int __tutorial_4_Check1 [] = {1,0,0};
static int __tutorial_4_A2 () {
__tutorial_4_GENERIC_TEST(__tutorial_4_V1);
}
static int __tutorial_4_Check2 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __tutorial_4_A3 () {
#ifdef __OUTPUT
tutorial_4_O_SAFETY_FAIL();
#endif
__AppendToList(__tutorial_4_EmittedList,2);
}
static int __tutorial_4_Check3 [] = {1,0,0};
static void __tutorial_4_A4 () {
#ifdef __OUTPUT
tutorial_4_O_RELEASE_PARACHUTE();
#endif
__AppendToList(__tutorial_4_EmittedList,3);
}
static int __tutorial_4_Check4 [] = {1,0,0};

/* ASSIGNMENTS */

static void __tutorial_4_A5 () {
__tutorial_4_V0 = _false;
}
static int __tutorial_4_Check5 [] = {1,0,1,0};
static void __tutorial_4_A6 () {
__tutorial_4_V1 = _false;
}
static int __tutorial_4_Check6 [] = {1,0,1,1};
static void __tutorial_4_A7 () {
__tutorial_4_V2 = 2;
}
static int __tutorial_4_Check7 [] = {1,0,1,2};

/* PROCEDURE CALLS */

/* CONDITIONS */

/* DECREMENTS */

static int __tutorial_4_A8 () {
__tutorial_4_GENERIC_TEST(__DSZ(__tutorial_4_V2));
}
static int __tutorial_4_Check8 [] = {1,1,2,1,2};

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */


static int *__tutorial_4_CheckArray[] = {
0,
__tutorial_4_Check1,
__tutorial_4_Check2,
__tutorial_4_Check3,
__tutorial_4_Check4,
__tutorial_4_Check5,
__tutorial_4_Check6,
__tutorial_4_Check7,
__tutorial_4_Check8
};
static int **__tutorial_4_PCheckArray =  __tutorial_4_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void tutorial_4_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __tutorial_4_show_variable (int __V) {
extern struct __VariableEntry __tutorial_4_VariableTable[];
struct __VariableEntry* p_var = &__tutorial_4_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __tutorial_4_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __tutorial_4_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __tutorial_4_InstanceTable [] = {
{"tutorial_4",0,"/home/student/workspace/eclipse_ws_tutorial/tutorial_4//src","tutorial_4.strl",{1,1,1,0},{1,17,1,0},{0,0,0,0}},
{"Par1",0,"/home/student/workspace/eclipse_ws_tutorial/tutorial_4//src","tutorial_4.strl",{1,22,1,1},{1,35,1,1},{1,6,2,0}},
{"Observer",0,"/home/student/workspace/eclipse_ws_tutorial/tutorial_4//src","tutorial_4.strl",{1,39,1,2},{1,64,1,2},{1,13,3,0}},
};

struct __SignalEntry __tutorial_4_SignalTable [] = {
{"MANUAL_TRIGGER",33,0,0,{1,3,7,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"MAYBE_CRITICAL",33,0,0,{1,3,23,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"SAFETY_FAIL",34,0,0,{1,4,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RELEASE_PARACHUTE",34,0,0,{1,4,21,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"CRITICAL",40,0,0,{1,25,8,1},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,27,8,1},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"deadline",48,0,0,{1,49,7,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __tutorial_4_InputTable [] = {
{"MANUAL_TRIGGER",63,0,0,-1,0,0,0,tutorial_4_IS_MANUAL_TRIGGER,0,{1,3,7,0}},
{"MAYBE_CRITICAL",38,0,0,-1,0,1,0,tutorial_4_IS_MAYBE_CRITICAL,0,{1,3,23,0}}};

struct __VariableEntry __tutorial_4_VariableTable [] = {
{"__tutorial_4_V0","V0","boolean",-2,2,0,(char*)&__tutorial_4_V0,"MANUAL_TRIGGER",0,0,0,{1,3,7,0}},
{"__tutorial_4_V1","V1","boolean",-2,2,0,(char*)&__tutorial_4_V1,"MAYBE_CRITICAL",0,0,0,{1,3,23,0}},
{"__tutorial_4_V2","V2","integer",-3,3,0,(char*)&__tutorial_4_V2,"0",0,0,0,{1,28,11,1}}
};

struct __HaltEntry __tutorial_4_HaltTable [] = {
{{1,17,1,0}},
{{1,28,5,1}},
{{1,29,5,1}},
{{1,30,41,1}},
{{1,33,2,1}},
{{1,47,2,2}},
{{1,51,3,2}},
{{1,57,3,2}},
{{1,57,10,2}}
};


static void __tutorial_4__reset_input () {
__tutorial_4_V0 = _false;
__tutorial_4_V1 = _false;
}


/* MODULE DATA FOR SIMULATION */

int tutorial_4();
int tutorial_4_reset();

static struct __ModuleEntry __tutorial_4_ModuleData = {
"Simulation interface release 5","tutorial_4",
3,0,7,2,0,0,2,1,2,0,0,3,0,9,0,0,0,
__tutorial_4_HaltList,
__tutorial_4_AwaitedList,
__tutorial_4_EmittedList,
__tutorial_4_StartedList,
__tutorial_4_KilledList,
__tutorial_4_SuspendedList,
__tutorial_4_ActiveList,
0,0,
tutorial_4_initialize,tutorial_4,tutorial_4_reset,
__tutorial_4_show_variable,__tutorial_4_set_variable,__tutorial_4_check_value,0,
__tutorial_4_InstanceTable,
0,
__tutorial_4_SignalTable,__tutorial_4_InputTable,0,
0,0,
__tutorial_4_VariableTable,
0,
__tutorial_4_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __tutorial_4_R[9] = {_true,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int tutorial_4 () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[18];

__tutorial_4_ModuleData.awaited_list = __tutorial_4_AwaitedList;
__ResetModuleEntryBeforeReaction();
E[0] = __tutorial_4_R[8]&&!(__tutorial_4_R[0]);
if (E[0]) {
__AppendToList(__tutorial_4_EmittedList,2);
}
if (E[0]) {
__CheckVariables(__tutorial_4_CheckArray[3]);__tutorial_4_A3();
#ifdef TRACE_ACTION
fprintf(stderr, "__tutorial_4_A3\n");
#endif
}
E[1] = __tutorial_4_R[0]&&!((__CheckVariables(__tutorial_4_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_4_A1()));
E[2] = __tutorial_4_R[1]&&!(__tutorial_4_R[0]);
E[3] = E[2]&&(__CheckVariables(__tutorial_4_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_4_A2());
E[4] = E[3]&&(__CheckVariables(__tutorial_4_CheckArray[8]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 8\n"),
#endif
__tutorial_4_A8());
E[5] = __tutorial_4_R[2]&&!(__tutorial_4_R[0]);
E[6] = E[5]&&(__CheckVariables(__tutorial_4_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_4_A1());
E[7] = E[4]||E[6];
if (E[7]) {
__AppendToList(__tutorial_4_EmittedList,4);
}
E[8] = E[1]&&E[7];
if (E[8]) {
__AppendToList(__tutorial_4_EmittedList,5);
}
E[9] = __tutorial_4_R[1]||__tutorial_4_R[2]||__tutorial_4_R[3];
E[10] = (E[9]&&!(__tutorial_4_R[1]))||E[4];
if (E[1]) {
__CheckVariables(__tutorial_4_CheckArray[7]);__tutorial_4_A7();
#ifdef TRACE_ACTION
fprintf(stderr, "__tutorial_4_A7\n");
#endif
}
E[2] = E[2]&&!((__CheckVariables(__tutorial_4_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_4_A2()));
E[2] = E[1]||(__tutorial_4_R[1]&&((E[3]&&!(E[4]))||E[2]));
E[3] = E[10]||E[2];
E[11] = (E[9]&&!(__tutorial_4_R[2]))||E[6];
E[5] = E[5]&&!((__CheckVariables(__tutorial_4_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_4_A1()));
E[5] = E[1]||(__tutorial_4_R[2]&&E[5]);
E[12] = E[11]||E[5];
E[13] = __tutorial_4_R[3]&&!(__tutorial_4_R[0]);
E[14] = (E[9]&&!(__tutorial_4_R[3]))||E[13];
E[7] = E[1]&&!(E[7]);
E[15] = E[14]||E[7];
E[8] = E[8]&&E[3]&&E[12]&&(E[15]||E[8]);
E[16] = __tutorial_4_R[0]&&(__CheckVariables(__tutorial_4_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_4_A1());
E[16] = E[8]||((E[4]||E[6]||E[13])&&E[10]&&E[11]&&E[14])||(__tutorial_4_R[4]&&!(__tutorial_4_R[0]))||E[16];
if (E[16]) {
__AppendToList(__tutorial_4_EmittedList,3);
}
if (E[16]) {
__CheckVariables(__tutorial_4_CheckArray[4]);__tutorial_4_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__tutorial_4_A4\n");
#endif
}
E[14] = __tutorial_4_R[6]&&!(__tutorial_4_R[0]);
E[11] = E[14]&&E[16];
if (E[11]) {
__AppendToList(__tutorial_4_EmittedList,6);
}
E[10] = !(_true);
E[15] = E[16]||((E[2]||E[5]||E[7])&&E[3]&&E[12]&&E[15]);
E[12] = __tutorial_4_R[7]||__tutorial_4_R[8];
E[3] = __tutorial_4_R[6]||E[12];
E[13] = __tutorial_4_R[5]&&!(__tutorial_4_R[0]);
E[6] = E[13]&&(__CheckVariables(__tutorial_4_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_4_A1());
E[14] = E[6]||(__tutorial_4_R[6]&&E[14]&&!(E[16]));
E[4] = (E[3]&&!(__tutorial_4_R[6]))||E[14];
E[17] = __tutorial_4_R[7]&&!(__tutorial_4_R[0]);
E[12] = (E[3]&&!(E[12]))||E[0]||E[6]||E[17];
E[11] = E[11]&&(E[4]||E[11])&&E[12];
E[13] = E[13]&&!((__CheckVariables(__tutorial_4_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_4_A1()));
E[13] = __tutorial_4_R[0]||E[11]||(__tutorial_4_R[5]&&E[13]);
E[12] = (E[14]||E[6]||E[17])&&E[4]&&E[12];
E[9] = __tutorial_4_R[4]||E[9];
E[3] = __tutorial_4_R[5]||E[3];
E[4] = E[9]||E[3];
E[12] = (E[15]||E[13]||E[12])&&((E[4]&&!(E[9]))||E[15])&&((E[4]&&!(E[3]))||E[13]||E[12]);
__tutorial_4_R[1] = E[2]&&!(E[8]);
__tutorial_4_R[2] = E[5]&&!(E[8]);
__tutorial_4_R[3] = E[7]&&!(E[8]);
__tutorial_4_R[6] = E[14]&&!(E[11]);
__tutorial_4_R[7] = E[6]&&!(E[11]);
__tutorial_4_R[8] = E[17]&&!(E[11]);
__tutorial_4_R[0] = !(_true);
if (__tutorial_4_R[1]) { __AppendToList(__tutorial_4_HaltList,1); }
if (__tutorial_4_R[2]) { __AppendToList(__tutorial_4_HaltList,2); }
if (__tutorial_4_R[3]) { __AppendToList(__tutorial_4_HaltList,3); }
__tutorial_4_R[4] = E[16];
if (__tutorial_4_R[4]) { __AppendToList(__tutorial_4_HaltList,4); }
__tutorial_4_R[5] = E[13];
if (__tutorial_4_R[5]) { __AppendToList(__tutorial_4_HaltList,5); }
if (__tutorial_4_R[6]) { __AppendToList(__tutorial_4_HaltList,6); }
if (__tutorial_4_R[7]) { __AppendToList(__tutorial_4_HaltList,7); }
if (__tutorial_4_R[8]) { __AppendToList(__tutorial_4_HaltList,8); }
if (!E[12]) { __AppendToList(__tutorial_4_HaltList,0); }
__ResetModuleEntryAfterReaction();
__tutorial_4_ModuleData.awaited_list = __tutorial_4_AllAwaitedList;
__tutorial_4__reset_input();
return E[12];
}

/* AUTOMATON RESET */

int tutorial_4_reset () {
__tutorial_4_ModuleData.awaited_list = __tutorial_4_AwaitedList;
__ResetModuleEntry();
__tutorial_4_ModuleData.awaited_list = __tutorial_4_AllAwaitedList;
__tutorial_4_ModuleData.state = 0;
__tutorial_4_R[0] = _true;
__tutorial_4_R[1] = _false;
__tutorial_4_R[2] = _false;
__tutorial_4_R[3] = _false;
__tutorial_4_R[4] = _false;
__tutorial_4_R[5] = _false;
__tutorial_4_R[6] = _false;
__tutorial_4_R[7] = _false;
__tutorial_4_R[8] = _false;
__tutorial_4__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__tutorial_4_ModuleData
};
