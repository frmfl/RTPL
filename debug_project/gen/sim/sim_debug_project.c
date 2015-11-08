/* sscc : C CODE OF SORTED EQUATIONS debug_project - SIMULATION MODE */

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
#define __debug_project_GENERIC_TEST(TEST) return TEST;
typedef void (*__debug_project_APF)();
static __debug_project_APF *__debug_project_PActionArray;
static int **__debug_project_PCheckArray;
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

static boolean __debug_project_V0;
static boolean __debug_project_V1;
static integer __debug_project_V2;
static boolean __debug_project_V3;

static unsigned short __debug_project_HaltList[6];
static unsigned short __debug_project_AwaitedList[7];
static unsigned short __debug_project_EmittedList[7];
static unsigned short __debug_project_StartedList[1];
static unsigned short __debug_project_KilledList[1];
static unsigned short __debug_project_SuspendedList[1];
static unsigned short __debug_project_ActiveList[1];
static unsigned short __debug_project_AllAwaitedList[7]={3,0,1,2};


/* INPUT FUNCTIONS */

void debug_project_I_TA_INREVIEW () {
__debug_project_V0 = _true;
}
void debug_project_IS_TA_INREVIEW () {
__debug_project_V0 = _true;
}
void debug_project_I_TA_SLEEPING () {
__debug_project_V1 = _true;
}
void debug_project_IS_TA_SLEEPING () {
__debug_project_V1 = _true;
}
void debug_project_I_STUDENTS_WAITING (integer __V) {
__WriteVariable(2);
__debug_project_V2 = _COND(__debug_project_V3,(__debug_project_V2+(__V)),(__debug_project_V3=_true,__V));
}
void debug_project_IS_STUDENTS_WAITING (string __V) {
static integer __SV;
__WriteVariable(2);
_text_to_integer(&__SV,__V);
__debug_project_V2 = _COND(__debug_project_V3,(__debug_project_V2+(__SV)),(__debug_project_V3=_true,__SV));
}

/* FUNCTIONS RETURNING NUMBER OF EXEC */

int debug_project_number_of_execs () {
return (0);
}


/* AUTOMATON (STATE ACTION-TREES) */

/* ACTIONS */

/* PREDEFINED ACTIONS */

/* PRESENT SIGNAL TESTS */

static int __debug_project_A1 () {
__debug_project_GENERIC_TEST(__debug_project_V0);
}
static int __debug_project_Check1 [] = {1,0,0};
static int __debug_project_A2 () {
__debug_project_GENERIC_TEST(__debug_project_V1);
}
static int __debug_project_Check2 [] = {1,0,0};
static int __debug_project_A3 () {
__debug_project_GENERIC_TEST(__debug_project_V3);
}
static int __debug_project_Check3 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __debug_project_A4 () {
#ifdef __OUTPUT
debug_project_O_STUD_INREVIEW();
#endif
__AppendToList(__debug_project_EmittedList,3);
}
static int __debug_project_Check4 [] = {1,0,0};
static void __debug_project_A5 () {
#ifdef __OUTPUT
debug_project_O_STUD_WANTREVIEW();
#endif
__AppendToList(__debug_project_EmittedList,4);
}
static int __debug_project_Check5 [] = {1,0,0};

/* ASSIGNMENTS */

static void __debug_project_A6 () {
__debug_project_V0 = _false;
}
static int __debug_project_Check6 [] = {1,0,1,0};
static void __debug_project_A7 () {
__debug_project_V1 = _false;
}
static int __debug_project_Check7 [] = {1,0,1,1};
static void __debug_project_A8 () {
__debug_project_V3 = _false;
}
static int __debug_project_Check8 [] = {1,0,1,3};
static void __debug_project_A9 () {
__debug_project_V2 = 0;
}
static int __debug_project_Check9 [] = {1,0,1,2};
static void __debug_project_A10 () {
__debug_project_V2 = _COND(__debug_project_V3,(__debug_project_V2+(1)),(__debug_project_V3=_true,1));
}
static int __debug_project_Check10 [] = {1,0,1,2};

/* PROCEDURE CALLS */

/* CONDITIONS */

static int __debug_project_A11 () {
__debug_project_GENERIC_TEST(__debug_project_V2<2);
}
static int __debug_project_Check11 [] = {1,1,2,0};

/* DECREMENTS */

/* START ACTIONS */

/* KILL ACTIONS */

/* SUSPEND ACTIONS */

/* ACTIVATE ACTIONS */

/* WRITE ARGS ACTIONS */

/* RESET ACTIONS */

/* ACTION SEQUENCES */


static int *__debug_project_CheckArray[] = {
0,
__debug_project_Check1,
__debug_project_Check2,
__debug_project_Check3,
__debug_project_Check4,
__debug_project_Check5,
__debug_project_Check6,
__debug_project_Check7,
__debug_project_Check8,
__debug_project_Check9,
__debug_project_Check10,
__debug_project_Check11
};
static int **__debug_project_PCheckArray =  __debug_project_CheckArray;

/* INIT FUNCTION */

#ifndef NO_INIT
void debug_project_initialize () {
}
#endif

/* SHOW VARIABLE FUNCTION */

char* __debug_project_show_variable (int __V) {
extern struct __VariableEntry __debug_project_VariableTable[];
struct __VariableEntry* p_var = &__debug_project_VariableTable[__V];
if (p_var->type_code < 0) {return __PredefinedTypeToText(p_var->type_code, p_var->p_variable);
} else {
switch (p_var->type_code) {
default: return 0;
}
}
}

/* SET VARIABLE FUNCTION */

static void __debug_project_set_variable(int __Type, char* __pVar, char* __Text) {
}

/* CHECK VALUE FUNCTION */

static int __debug_project_check_value (int __Type, char* __Text) {
return 0;
}

/* SIMULATION TABLES */

struct __InstanceEntry __debug_project_InstanceTable [] = {
{"debug_project",0,"/home/student/Desktop/RTPL_Windows/debug_project//src","debug_project.strl",{1,1,1,0},{1,58,1,0},{0,0,0,0}},
};

struct __SignalEntry __debug_project_SignalTable [] = {
{"TA_INREVIEW",33,0,0,{1,3,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_SLEEPING",33,0,0,{1,3,21,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUDENTS_WAITING",65,2,0,{1,5,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW",34,0,0,{1,8,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW",34,0,0,{1,8,24,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,35,10,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __debug_project_InputTable [] = {
{"TA_INREVIEW",53,0,0,-1,0,0,0,debug_project_IS_TA_INREVIEW,0,{1,3,8,0}},
{"TA_SLEEPING",35,0,0,-1,0,1,0,debug_project_IS_TA_SLEEPING,0,{1,3,21,0}},
{"STUDENTS_WAITING",48,"integer",0,-3,1,2,_check_integer,debug_project_IS_STUDENTS_WAITING,0,{1,5,8,0}}};

struct __VariableEntry __debug_project_VariableTable [] = {
{"__debug_project_V0","V0","boolean",-2,2,0,(char*)&__debug_project_V0,"TA_INREVIEW",0,0,0,{1,3,8,0}},
{"__debug_project_V1","V1","boolean",-2,2,0,(char*)&__debug_project_V1,"TA_SLEEPING",0,0,0,{1,3,21,0}},
{"__debug_project_V2","V2","integer",-3,1,0,(char*)&__debug_project_V2,"STUDENTS_WAITING",0,0,0,{1,5,8,0}},
{"__debug_project_V3","V3","boolean",-2,2,0,(char*)&__debug_project_V3,"STUDENTS_WAITING",0,0,0,{1,5,8,0}}
};

struct __HaltEntry __debug_project_HaltTable [] = {
{{1,58,1,0}},
{{1,22,4,0}},
{{1,31,5,0}},
{{1,38,31,0}},
{{1,43,6,0}}
};


static void __debug_project__reset_input () {
__debug_project_V0 = _false;
__debug_project_V1 = _false;
__debug_project_V3 = _false;
}


/* MODULE DATA FOR SIMULATION */

int debug_project();
int debug_project_reset();

static struct __ModuleEntry __debug_project_ModuleData = {
"Simulation interface release 5","debug_project",
1,0,6,3,0,0,2,0,1,0,0,4,0,5,0,0,0,
__debug_project_HaltList,
__debug_project_AwaitedList,
__debug_project_EmittedList,
__debug_project_StartedList,
__debug_project_KilledList,
__debug_project_SuspendedList,
__debug_project_ActiveList,
0,0,
debug_project_initialize,debug_project,debug_project_reset,
__debug_project_show_variable,__debug_project_set_variable,__debug_project_check_value,0,
__debug_project_InstanceTable,
0,
__debug_project_SignalTable,__debug_project_InputTable,0,
0,0,
__debug_project_VariableTable,
0,
__debug_project_HaltTable,
0};

/* REDEFINABLE BIT TYPE */

#ifndef __SSC_BIT_TYPE_DEFINED
typedef char __SSC_BIT_TYPE;
#endif

/* REGISTER VARIABLES */

static __SSC_BIT_TYPE __debug_project_R[5] = {_true,
 _false,
 _false,
 _false,
 _false};

/* AUTOMATON ENGINE */

int debug_project () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[14];

__debug_project_ModuleData.awaited_list = __debug_project_AwaitedList;
__ResetModuleEntryBeforeReaction();
E[0] = __debug_project_R[2]&&!(__debug_project_R[0]);
E[1] = (__CheckVariables(__debug_project_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3())||E[0];
if (E[1]) {
__AppendToList(__debug_project_EmittedList,2);
}
if (E[0]) {
__CheckVariables(__debug_project_CheckArray[10]);__debug_project_A10();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A10\n");
#endif
}
E[2] = __debug_project_R[1]&&!(__debug_project_R[0]);
E[3] = E[2]&&!((__CheckVariables(__debug_project_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2()));
E[4] = E[0]&&!((__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1()));
E[5] = __debug_project_R[4]&&!(__debug_project_R[0]);
E[6] = E[5]&&!((__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1()));
E[6] = E[4]||E[6];
if (E[6]) {
__AppendToList(__debug_project_EmittedList,5);
}
E[4] = __debug_project_R[3]||__debug_project_R[4];
E[7] = E[0]&&!((__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1()));
E[8] = E[0]&&(__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1());
E[8] = E[8]||(__debug_project_R[3]&&!(__debug_project_R[0]));
E[7] = (E[4]&&!(__debug_project_R[3]))||E[7]||E[8];
E[9] = E[0]&&(__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1());
E[5] = E[5]&&(__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1());
E[5] = E[9]||(__debug_project_R[4]&&E[5]);
E[9] = (E[4]&&!(__debug_project_R[4]))||E[5];
E[6] = E[6]&&E[7]&&(E[9]||E[6]);
if (E[3]||E[6]) {
__AppendToList(__debug_project_EmittedList,3);
}
if (E[3]||E[6]) {
__CheckVariables(__debug_project_CheckArray[4]);__debug_project_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A4\n");
#endif
}
E[10] = __debug_project_R[0]&&!((__CheckVariables(__debug_project_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3()));
if (E[10]) {
__CheckVariables(__debug_project_CheckArray[9]);__debug_project_A9();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A9\n");
#endif
}
E[11] = __debug_project_R[0]&&(__CheckVariables(__debug_project_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2());
if (E[11]||E[8]) {
__AppendToList(__debug_project_EmittedList,4);
}
if (E[11]||E[8]) {
__CheckVariables(__debug_project_CheckArray[5]);__debug_project_A5();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A5\n");
#endif
}
E[12] = __debug_project_R[0]&&!((__CheckVariables(__debug_project_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2()));
E[13] = E[12]&&(__CheckVariables(__debug_project_CheckArray[11]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 11\n"),
#endif
__debug_project_A11());
E[12] = E[3]||E[6]||(E[12]&&!(E[13]));
E[2] = E[2]&&(__CheckVariables(__debug_project_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2());
E[2] = E[11]||(__debug_project_R[1]&&E[2]);
E[9] = E[2]||E[13]||((E[8]||E[5])&&E[7]&&E[9]);
E[4] = __debug_project_R[1]||__debug_project_R[2]||E[4];
__debug_project_R[3] = E[8]&&!(E[6]);
__debug_project_R[4] = E[5]&&!(E[6]);
__debug_project_R[0] = !(_true);
__debug_project_R[1] = E[2];
if (__debug_project_R[1]) { __AppendToList(__debug_project_HaltList,1); }
__debug_project_R[2] = E[13];
if (__debug_project_R[2]) { __AppendToList(__debug_project_HaltList,2); }
if (__debug_project_R[3]) { __AppendToList(__debug_project_HaltList,3); }
if (__debug_project_R[4]) { __AppendToList(__debug_project_HaltList,4); }
if (!E[9]) { __AppendToList(__debug_project_HaltList,0); }
__ResetModuleEntryAfterReaction();
__debug_project_ModuleData.awaited_list = __debug_project_AllAwaitedList;
__debug_project__reset_input();
return E[9];
}

/* AUTOMATON RESET */

int debug_project_reset () {
__debug_project_ModuleData.awaited_list = __debug_project_AwaitedList;
__ResetModuleEntry();
__debug_project_ModuleData.awaited_list = __debug_project_AllAwaitedList;
__debug_project_ModuleData.state = 0;
__debug_project_R[0] = _true;
__debug_project_R[1] = _false;
__debug_project_R[2] = _false;
__debug_project_R[3] = _false;
__debug_project_R[4] = _false;
__debug_project__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__debug_project_ModuleData
};
