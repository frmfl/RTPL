/* sscc : C CODE OF SORTED EQUATIONS tutorial_1 - SIMULATION MODE */

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
#define __tutorial_1_GENERIC_TEST(TEST) return TEST;
typedef void (*__tutorial_1_APF)();
static __tutorial_1_APF *__tutorial_1_PActionArray;
static int **__tutorial_1_PCheckArray;
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

static boolean __tutorial_1_V0;
static boolean __tutorial_1_V1;
static boolean __tutorial_1_V2;

static unsigned short __tutorial_1_HaltList[6];
static unsigned short __tutorial_1_AwaitedList[5];
static unsigned short __tutorial_1_EmittedList[5];
static unsigned short __tutorial_1_StartedList[1];
static unsigned short __tutorial_1_KilledList[1];
static unsigned short __tutorial_1_SuspendedList[1];
static unsigned short __tutorial_1_ActiveList[1];
static unsigned short __tutorial_1_AllAwaitedList[5]={3,0,1,2};


/* INPUT FUNCTIONS */

void tutorial_1_I_C () {
__tutorial_1_V0 = _true;
}
void tutorial_1_IS_C () {
__tutorial_1_V0 = _true;
}
void tutorial_1_I_D () {
__tutorial_1_V1 = _true;
}
void tutorial_1_IS_D () {
__tutorial_1_V1 = _true;
}
void tutorial_1_I_R () {
__tutorial_1_V2 = _true;
}
void tutorial_1_IS_R () {
__tutorial_1_V2 = _true;
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int tutorial_1_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __tutorial_1_A1 () {
__tutorial_1_GENERIC_TEST(__tutorial_1_V0);
}
static int __tutorial_1_Check1 [] = {1,0,0};
static int __tutorial_1_A2 () {
__tutorial_1_GENERIC_TEST(__tutorial_1_V1);
}
static int __tutorial_1_Check2 [] = {1,0,0};
static int __tutorial_1_A3 () {
__tutorial_1_GENERIC_TEST(__tutorial_1_V2);
}
static int __tutorial_1_Check3 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __tutorial_1_A4 () {
#ifdef __OUTPUT
tutorial_1_O_O();
#endif
__AppendToList(__tutorial_1_EmittedList,3);
}
static int __tutorial_1_Check4 [] = {1,0,0};

/* ASSIGNMENTS */

static void __tutorial_1_A5 () {
__tutorial_1_V0 = _false;
}
static int __tutorial_1_Check5 [] = {1,0,1,0};
static void __tutorial_1_A6 () {
__tutorial_1_V1 = _false;
}
static int __tutorial_1_Check6 [] = {1,0,1,1};
static void __tutorial_1_A7 () {
__tutorial_1_V2 = _false;
}
static int __tutorial_1_Check7 [] = {1,0,1,2};

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


static int *__tutorial_1_CheckArray[] = {
0,
__tutorial_1_Check1,
__tutorial_1_Check2,
__tutorial_1_Check3,
__tutorial_1_Check4,
__tutorial_1_Check5,
__tutorial_1_Check6,
__tutorial_1_Check7
};
static int **__tutorial_1_PCheckArray =  __tutorial_1_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void tutorial_1_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __tutorial_1_show_variable (int __V) {
extern struct __VariableEntry __tutorial_1_VariableTable[];
struct __VariableEntry* p_var = &__tutorial_1_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __tutorial_1_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __tutorial_1_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __tutorial_1_InstanceTable [] = {
{"tutorial_1",0,"/home/student/workspace/tutorial_1//src","tutorial_1.strl",{1,1,1,0},{1,9,1,0},{0,0,0,0}},
};

struct __SignalEntry __tutorial_1_SignalTable [] = {
{"C",33,0,0,{1,2,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"D",33,0,0,{1,2,10,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"R",33,0,0,{1,2,12,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"O",34,0,0,{1,3,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __tutorial_1_InputTable [] = {
{"C",67,0,0,-1,0,0,0,tutorial_1_IS_C,0,{1,2,8,0}},
{"D",68,0,0,-1,0,1,0,tutorial_1_IS_D,0,{1,2,10,0}},
{"R",82,0,0,-1,0,2,0,tutorial_1_IS_R,0,{1,2,12,0}}};

struct __VariableEntry __tutorial_1_VariableTable [] = {
{"__tutorial_1_V0","V0","boolean",-2,2,0,(char*)&__tutorial_1_V0,"C",0,0,0,{1,2,8,0}},
{"__tutorial_1_V1","V1","boolean",-2,2,0,(char*)&__tutorial_1_V1,"D",0,0,0,{1,2,10,0}},
{"__tutorial_1_V2","V2","boolean",-2,2,0,(char*)&__tutorial_1_V2,"R",0,0,0,{1,2,12,0}}
};

struct __HaltEntry __tutorial_1_HaltTable [] = {
{{1,9,1,0}},
{{1,5,17,0}},
{{1,5,28,0}},
{{1,5,4,0}},
{{1,8,3,0}}
};


static void __tutorial_1__reset_input () {
__tutorial_1_V0 = _false;
__tutorial_1_V1 = _false;
__tutorial_1_V2 = _false;
}


/* MODULE DATA FOR SIMULATION */

int tutorial_1();
int tutorial_1_reset();

static struct __ModuleEntry __tutorial_1_ModuleData = {
"Simulation interface release 5","tutorial_1",
1,0,4,3,0,0,1,0,0,0,0,3,0,5,0,0,0,
__tutorial_1_HaltList,
__tutorial_1_AwaitedList,
__tutorial_1_EmittedList,
__tutorial_1_StartedList,
__tutorial_1_KilledList,
__tutorial_1_SuspendedList,
__tutorial_1_ActiveList,
0,0,
tutorial_1_initialize,tutorial_1,tutorial_1_reset,
__tutorial_1_show_variable,__tutorial_1_set_variable,__tutorial_1_check_value,0,
__tutorial_1_InstanceTable,
0,
__tutorial_1_SignalTable,__tutorial_1_InputTable,0,
0,0,
__tutorial_1_VariableTable,
0,
__tutorial_1_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __tutorial_1_R[5] = {_true,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int tutorial_1 () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[12];

__tutorial_1_ModuleData.awaited_list = __tutorial_1_AwaitedList;
__ResetModuleEntryBeforeReaction();
E[0] = __tutorial_1_R[1]||__tutorial_1_R[2];
E[1] = E[0]||__tutorial_1_R[3];
E[2] = (__tutorial_1_R[4]||E[1])&&!(__tutorial_1_R[0]);
E[3] = E[2]&&!((__CheckVariables(__tutorial_1_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__tutorial_1_A3()));
E[4] = __tutorial_1_R[1]&&E[3];
E[5] = E[4]&&(__CheckVariables(__tutorial_1_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_1_A1());
E[2] = E[2]&&(__CheckVariables(__tutorial_1_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__tutorial_1_A3());
E[2] = E[2]||__tutorial_1_R[0];
E[6] = E[2]&&(__CheckVariables(__tutorial_1_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2());
E[7] = __tutorial_1_R[2]&&E[3];
E[8] = E[7]&&(__CheckVariables(__tutorial_1_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2());
E[9] = (E[0]&&!(__tutorial_1_R[1]))||E[5];
E[10] = (E[0]&&!(__tutorial_1_R[2]))||E[6]||E[8];
E[8] = (E[5]||E[6]||E[8])&&E[9]&&E[10];
if (E[8]) {
__AppendToList(__tutorial_1_EmittedList,3);
}
if (E[8]) {
__CheckVariables(__tutorial_1_CheckArray[4]);__tutorial_1_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__tutorial_1_A4\n");
#endif
}
E[6] = !(_true);
E[4] = E[4]&&!((__CheckVariables(__tutorial_1_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__tutorial_1_A1()));
E[4] = E[2]||(__tutorial_1_R[1]&&E[4]);
E[5] = E[2]&&!((__CheckVariables(__tutorial_1_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2()));
E[7] = E[7]&&!((__CheckVariables(__tutorial_1_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__tutorial_1_A2()));
E[7] = E[5]||(__tutorial_1_R[2]&&E[7]);
E[10] = (E[4]||E[7])&&(E[9]||E[4])&&(E[10]||E[7]);
E[9] = __tutorial_1_R[3]&&E[3];
E[5] = E[9]&&!((__CheckVariables(__tutorial_1_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__tutorial_1_A3()));
E[5] = E[2]||(__tutorial_1_R[3]&&E[5]);
E[0] = (E[1]&&!(E[0]))||E[10];
E[1] = (E[1]&&!(__tutorial_1_R[3]))||E[5];
E[2] = E[0]||E[8];
E[11] = E[8]&&E[2]&&E[1];
E[9] = E[9]&&(__CheckVariables(__tutorial_1_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__tutorial_1_A3());
E[9] = E[9]&&E[2]&&(E[1]||E[9]);
__tutorial_1_R[4] = E[11]||(__tutorial_1_R[4]&&E[3])||E[9];
E[1] = ((E[10]||E[5])&&E[0]&&E[1])||__tutorial_1_R[4];
E[9] = E[11]||E[9];
__tutorial_1_R[1] = E[4]&&!(E[9]);
__tutorial_1_R[2] = E[7]&&!(E[9]);
__tutorial_1_R[3] = E[5]&&!(E[9]);
__tutorial_1_R[0] = !(_true);
if (__tutorial_1_R[1]) { __AppendToList(__tutorial_1_HaltList,1); }
if (__tutorial_1_R[2]) { __AppendToList(__tutorial_1_HaltList,2); }
if (__tutorial_1_R[3]) { __AppendToList(__tutorial_1_HaltList,3); }
if (__tutorial_1_R[4]) { __AppendToList(__tutorial_1_HaltList,4); }
if (!E[1]) { __AppendToList(__tutorial_1_HaltList,0); }
__ResetModuleEntryAfterReaction();
__tutorial_1_ModuleData.awaited_list = __tutorial_1_AllAwaitedList;
__tutorial_1__reset_input();
return E[1];
}

/* AUTOMATON RESET */

int tutorial_1_reset () {
__tutorial_1_ModuleData.awaited_list = __tutorial_1_AwaitedList;
__ResetModuleEntry();
__tutorial_1_ModuleData.awaited_list = __tutorial_1_AllAwaitedList;
__tutorial_1_ModuleData.state = 0;
__tutorial_1_R[0] = _true;
__tutorial_1_R[1] = _false;
__tutorial_1_R[2] = _false;
__tutorial_1_R[3] = _false;
__tutorial_1_R[4] = _false;
__tutorial_1__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__tutorial_1_ModuleData
};
