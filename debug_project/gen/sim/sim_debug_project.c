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

static unsigned short __debug_project_HaltList[15];
static unsigned short __debug_project_AwaitedList[30];
static unsigned short __debug_project_EmittedList[30];
static unsigned short __debug_project_StartedList[1];
static unsigned short __debug_project_KilledList[1];
static unsigned short __debug_project_SuspendedList[1];
static unsigned short __debug_project_ActiveList[1];
static unsigned short __debug_project_AllAwaitedList[30]={3,0,1,2};


/* INPUT FUNCTIONS */

void debug_project_I_RANDOM1 () {
__debug_project_V0 = _true;
}
void debug_project_IS_RANDOM1 () {
__debug_project_V0 = _true;
}
void debug_project_I_RANDOM2 () {
__debug_project_V1 = _true;
}
void debug_project_IS_RANDOM2 () {
__debug_project_V1 = _true;
}
void debug_project_I_RANDOM3 () {
__debug_project_V2 = _true;
}
void debug_project_IS_RANDOM3 () {
__debug_project_V2 = _true;
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
__debug_project_GENERIC_TEST(__debug_project_V2);
}
static int __debug_project_Check3 [] = {1,0,0};

/* OUTPUT ACTIONS */

static void __debug_project_A4 () {
#ifdef __OUTPUT
debug_project_O_TA_INREVIEW();
#endif
__AppendToList(__debug_project_EmittedList,3);
}
static int __debug_project_Check4 [] = {1,0,0};
static void __debug_project_A5 () {
#ifdef __OUTPUT
debug_project_O_TA_SLEEPING();
#endif
__AppendToList(__debug_project_EmittedList,4);
}
static int __debug_project_Check5 [] = {1,0,0};
static void __debug_project_A6 () {
#ifdef __OUTPUT
debug_project_O_WANT_REVIEW();
#endif
__AppendToList(__debug_project_EmittedList,5);
}
static int __debug_project_Check6 [] = {1,0,0};
static void __debug_project_A7 () {
#ifdef __OUTPUT
debug_project_O_STUD_WANTREVIEW();
#endif
__AppendToList(__debug_project_EmittedList,6);
}
static int __debug_project_Check7 [] = {1,0,0};
static void __debug_project_A8 () {
#ifdef __OUTPUT
debug_project_O_STUD_INREVIEW();
#endif
__AppendToList(__debug_project_EmittedList,7);
}
static int __debug_project_Check8 [] = {1,0,0};
static void __debug_project_A9 () {
#ifdef __OUTPUT
debug_project_O_TA_DISMISS_STUD();
#endif
__AppendToList(__debug_project_EmittedList,8);
}
static int __debug_project_Check9 [] = {1,0,0};
static void __debug_project_A10 () {
#ifdef __OUTPUT
debug_project_O_STUDENTS_WAITING(__debug_project_V3);
#endif
__AppendToList(__debug_project_EmittedList,9);
}
static int __debug_project_Check10 [] = {1,0,0};
static void __debug_project_A11 () {
#ifdef __OUTPUT
debug_project_O_TA_INSANE();
#endif
__AppendToList(__debug_project_EmittedList,10);
}
static int __debug_project_Check11 [] = {1,0,0};
static void __debug_project_A12 () {
#ifdef __OUTPUT
debug_project_O_STUD_INSANE();
#endif
__AppendToList(__debug_project_EmittedList,11);
}
static int __debug_project_Check12 [] = {1,0,0};
static void __debug_project_A13 () {
#ifdef __OUTPUT
debug_project_O_RACECONDITION();
#endif
__AppendToList(__debug_project_EmittedList,12);
}
static int __debug_project_Check13 [] = {1,0,0};
static void __debug_project_A14 () {
#ifdef __OUTPUT
debug_project_O_DEADLOCK();
#endif
__AppendToList(__debug_project_EmittedList,13);
}
static int __debug_project_Check14 [] = {1,0,0};
static void __debug_project_A15 () {
#ifdef __OUTPUT
debug_project_O_TA_TOOSLOW();
#endif
__AppendToList(__debug_project_EmittedList,14);
}
static int __debug_project_Check15 [] = {1,0,0};
static void __debug_project_A16 () {
#ifdef __OUTPUT
debug_project_O_num_INREVIEWSTUDS(__debug_project_V5);
#endif
__AppendToList(__debug_project_EmittedList,15);
}
static int __debug_project_Check16 [] = {1,0,0};
static void __debug_project_A17 () {
#ifdef __OUTPUT
debug_project_O_PRIO_counter(__debug_project_V7);
#endif
__AppendToList(__debug_project_EmittedList,16);
}
static int __debug_project_Check17 [] = {1,0,0};
static void __debug_project_A18 () {
#ifdef __OUTPUT
debug_project_O_STUD_WANTREVIEW1();
#endif
__AppendToList(__debug_project_EmittedList,17);
}
static int __debug_project_Check18 [] = {1,0,0};
static void __debug_project_A19 () {
#ifdef __OUTPUT
debug_project_O_STUD_INREVIEW1();
#endif
__AppendToList(__debug_project_EmittedList,18);
}
static int __debug_project_Check19 [] = {1,0,0};
static void __debug_project_A20 () {
#ifdef __OUTPUT
debug_project_O_STUD_WANTREVIEW2();
#endif
__AppendToList(__debug_project_EmittedList,19);
}
static int __debug_project_Check20 [] = {1,0,0};
static void __debug_project_A21 () {
#ifdef __OUTPUT
debug_project_O_STUD_INREVIEW2();
#endif
__AppendToList(__debug_project_EmittedList,20);
}
static int __debug_project_Check21 [] = {1,0,0};
static void __debug_project_A22 () {
#ifdef __OUTPUT
debug_project_O_STUD_WANTREVIEW3();
#endif
__AppendToList(__debug_project_EmittedList,21);
}
static int __debug_project_Check22 [] = {1,0,0};
static void __debug_project_A23 () {
#ifdef __OUTPUT
debug_project_O_STUD_INREVIEW3();
#endif
__AppendToList(__debug_project_EmittedList,22);
}
static int __debug_project_Check23 [] = {1,0,0};

/* ASSIGNMENTS */

static void __debug_project_A24 () {
__debug_project_V0 = _false;
}
static int __debug_project_Check24 [] = {1,0,1,0};
static void __debug_project_A25 () {
__debug_project_V1 = _false;
}
static int __debug_project_Check25 [] = {1,0,1,1};
static void __debug_project_A26 () {
__debug_project_V2 = _false;
}
static int __debug_project_Check26 [] = {1,0,1,2};
static void __debug_project_A27 () {
__debug_project_V4 = _false;
}
static int __debug_project_Check27 [] = {1,0,1,4};
static void __debug_project_A28 () {
__debug_project_V3 = 0;
}
static int __debug_project_Check28 [] = {1,0,1,3};
static void __debug_project_A29 () {
__debug_project_V6 = _false;
}
static int __debug_project_Check29 [] = {1,0,1,6};
static void __debug_project_A30 () {
__debug_project_V5 = 0;
}
static int __debug_project_Check30 [] = {1,0,1,5};
static void __debug_project_A31 () {
__debug_project_V8 = _false;
}
static int __debug_project_Check31 [] = {1,0,1,8};
static void __debug_project_A32 () {
__debug_project_V7 = 0;
}
static int __debug_project_Check32 [] = {1,0,1,7};
static void __debug_project_A33 () {
__debug_project_V9 = 0;
}
static int __debug_project_Check33 [] = {1,0,1,9};
static void __debug_project_A34 () {
__debug_project_V9 = __debug_project_V3;
}
static int __debug_project_Check34 [] = {1,1,3,1,9};
static void __debug_project_A35 () {
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(__debug_project_V9)),(__debug_project_V4=_true,__debug_project_V9));
}
static int __debug_project_Check35 [] = {1,1,9,1,3};
static void __debug_project_A36 () {
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(-(1))),(__debug_project_V4=_true,-(1)));
}
static int __debug_project_Check36 [] = {1,0,1,3};
static void __debug_project_A37 () {
__debug_project_V10 = 0;
}
static int __debug_project_Check37 [] = {1,0,1,10};
static void __debug_project_A38 () {
__debug_project_V7 = _COND(__debug_project_V8,(__debug_project_V7+(1)),(__debug_project_V8=_true,1));
}
static int __debug_project_Check38 [] = {1,0,1,7};
static void __debug_project_A39 () {
__debug_project_V10 = __debug_project_V9;
}
static int __debug_project_Check39 [] = {1,1,9,1,10};
static void __debug_project_A40 () {
__debug_project_V10 = __debug_project_V9+1;
}
static int __debug_project_Check40 [] = {1,1,9,1,10};
static void __debug_project_A41 () {
__debug_project_V10 = __debug_project_V9;
}
static int __debug_project_Check41 [] = {1,1,9,1,10};
static void __debug_project_A42 () {
__debug_project_V10 = __debug_project_V9;
}
static int __debug_project_Check42 [] = {1,1,9,1,10};
static void __debug_project_A43 () {
__debug_project_V10 = __debug_project_V9+1;
}
static int __debug_project_Check43 [] = {1,1,9,1,10};
static void __debug_project_A44 () {
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1));
}
static int __debug_project_Check44 [] = {1,0,1,3};
static void __debug_project_A45 () {
__debug_project_V10 = __debug_project_V10-1;
}
static int __debug_project_Check45 [] = {1,1,10,1,10};
static void __debug_project_A46 () {
__debug_project_V11 = 0;
}
static int __debug_project_Check46 [] = {1,0,1,11};
static void __debug_project_A47 () {
__debug_project_V7 = _COND(__debug_project_V8,(__debug_project_V7+(2)),(__debug_project_V8=_true,2));
}
static int __debug_project_Check47 [] = {1,0,1,7};
static void __debug_project_A48 () {
__debug_project_V11 = __debug_project_V9;
}
static int __debug_project_Check48 [] = {1,1,9,1,11};
static void __debug_project_A49 () {
__debug_project_V11 = __debug_project_V9+1;
}
static int __debug_project_Check49 [] = {1,1,9,1,11};
static void __debug_project_A50 () {
__debug_project_V11 = __debug_project_V9;
}
static int __debug_project_Check50 [] = {1,1,9,1,11};
static void __debug_project_A51 () {
__debug_project_V11 = __debug_project_V9;
}
static int __debug_project_Check51 [] = {1,1,9,1,11};
static void __debug_project_A52 () {
__debug_project_V11 = __debug_project_V9+1;
}
static int __debug_project_Check52 [] = {1,1,9,1,11};
static void __debug_project_A53 () {
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1));
}
static int __debug_project_Check53 [] = {1,0,1,3};
static void __debug_project_A54 () {
__debug_project_V11 = __debug_project_V11-1;
}
static int __debug_project_Check54 [] = {1,1,11,1,11};
static void __debug_project_A55 () {
__debug_project_V12 = 0;
}
static int __debug_project_Check55 [] = {1,0,1,12};
static void __debug_project_A56 () {
__debug_project_V7 = _COND(__debug_project_V8,(__debug_project_V7+(3)),(__debug_project_V8=_true,3));
}
static int __debug_project_Check56 [] = {1,0,1,7};
static void __debug_project_A57 () {
__debug_project_V12 = __debug_project_V9;
}
static int __debug_project_Check57 [] = {1,1,9,1,12};
static void __debug_project_A58 () {
__debug_project_V12 = __debug_project_V9+1;
}
static int __debug_project_Check58 [] = {1,1,9,1,12};
static void __debug_project_A59 () {
__debug_project_V12 = __debug_project_V9;
}
static int __debug_project_Check59 [] = {1,1,9,1,12};
static void __debug_project_A60 () {
__debug_project_V12 = __debug_project_V9;
}
static int __debug_project_Check60 [] = {1,1,9,1,12};
static void __debug_project_A61 () {
__debug_project_V12 = __debug_project_V9+1;
}
static int __debug_project_Check61 [] = {1,1,9,1,12};
static void __debug_project_A62 () {
__debug_project_V3 = _COND(__debug_project_V4,(__debug_project_V3+(1)),(__debug_project_V4=_true,1));
}
static int __debug_project_Check62 [] = {1,0,1,3};
static void __debug_project_A63 () {
__debug_project_V12 = __debug_project_V12-1;
}
static int __debug_project_Check63 [] = {1,1,12,1,12};
static void __debug_project_A64 () {
__debug_project_V5 = _COND(__debug_project_V6,(__debug_project_V5+(1)),(__debug_project_V6=_true,1));
}
static int __debug_project_Check64 [] = {1,0,1,5};
static void __debug_project_A65 () {
__debug_project_V5 = _COND(__debug_project_V6,(__debug_project_V5+(1)),(__debug_project_V6=_true,1));
}
static int __debug_project_Check65 [] = {1,0,1,5};
static void __debug_project_A66 () {
__debug_project_V5 = _COND(__debug_project_V6,(__debug_project_V5+(1)),(__debug_project_V6=_true,1));
}
static int __debug_project_Check66 [] = {1,0,1,5};

/* PROCEDURE CALLS */

/* CONDITIONS */

static int __debug_project_A67 () {
__debug_project_GENERIC_TEST(__debug_project_V9<2);
}
static int __debug_project_Check67 [] = {1,1,9,0};
static int __debug_project_A68 () {
__debug_project_GENERIC_TEST(1==3);
}
static int __debug_project_Check68 [] = {1,0,0};
static int __debug_project_A69 () {
__debug_project_GENERIC_TEST(1==2);
}
static int __debug_project_Check69 [] = {1,0,0};
static int __debug_project_A70 () {
__debug_project_GENERIC_TEST(__debug_project_V7>=5);
}
static int __debug_project_Check70 [] = {1,1,7,0};
static int __debug_project_A71 () {
__debug_project_GENERIC_TEST(__debug_project_V7==1);
}
static int __debug_project_Check71 [] = {1,1,7,0};
static int __debug_project_A72 () {
__debug_project_GENERIC_TEST((__debug_project_V7==3)||(__debug_project_V7==4));
}
static int __debug_project_Check72 [] = {1,2,7,7,0};
static int __debug_project_A73 () {
__debug_project_GENERIC_TEST(__debug_project_V10<1);
}
static int __debug_project_Check73 [] = {1,1,10,0};
static int __debug_project_A74 () {
__debug_project_GENERIC_TEST(__debug_project_V9<2);
}
static int __debug_project_Check74 [] = {1,1,9,0};
static int __debug_project_A75 () {
__debug_project_GENERIC_TEST(2==3);
}
static int __debug_project_Check75 [] = {1,0,0};
static int __debug_project_A76 () {
__debug_project_GENERIC_TEST(2==2);
}
static int __debug_project_Check76 [] = {1,0,0};
static int __debug_project_A77 () {
__debug_project_GENERIC_TEST(__debug_project_V7>=5);
}
static int __debug_project_Check77 [] = {1,1,7,0};
static int __debug_project_A78 () {
__debug_project_GENERIC_TEST(__debug_project_V7==1);
}
static int __debug_project_Check78 [] = {1,1,7,0};
static int __debug_project_A79 () {
__debug_project_GENERIC_TEST((__debug_project_V7==3)||(__debug_project_V7==4));
}
static int __debug_project_Check79 [] = {1,2,7,7,0};
static int __debug_project_A80 () {
__debug_project_GENERIC_TEST(__debug_project_V11<1);
}
static int __debug_project_Check80 [] = {1,1,11,0};
static int __debug_project_A81 () {
__debug_project_GENERIC_TEST(__debug_project_V9<2);
}
static int __debug_project_Check81 [] = {1,1,9,0};
static int __debug_project_A82 () {
__debug_project_GENERIC_TEST(3==3);
}
static int __debug_project_Check82 [] = {1,0,0};
static int __debug_project_A83 () {
__debug_project_GENERIC_TEST(3==2);
}
static int __debug_project_Check83 [] = {1,0,0};
static int __debug_project_A84 () {
__debug_project_GENERIC_TEST(__debug_project_V7>=5);
}
static int __debug_project_Check84 [] = {1,1,7,0};
static int __debug_project_A85 () {
__debug_project_GENERIC_TEST(__debug_project_V7==1);
}
static int __debug_project_Check85 [] = {1,1,7,0};
static int __debug_project_A86 () {
__debug_project_GENERIC_TEST((__debug_project_V7==3)||(__debug_project_V7==4));
}
static int __debug_project_Check86 [] = {1,2,7,7,0};
static int __debug_project_A87 () {
__debug_project_GENERIC_TEST(__debug_project_V12<1);
}
static int __debug_project_Check87 [] = {1,1,12,0};
static int __debug_project_A88 () {
__debug_project_GENERIC_TEST(__debug_project_V5>1);
}
static int __debug_project_Check88 [] = {1,1,5,0};

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
__debug_project_Check11,
__debug_project_Check12,
__debug_project_Check13,
__debug_project_Check14,
__debug_project_Check15,
__debug_project_Check16,
__debug_project_Check17,
__debug_project_Check18,
__debug_project_Check19,
__debug_project_Check20,
__debug_project_Check21,
__debug_project_Check22,
__debug_project_Check23,
__debug_project_Check24,
__debug_project_Check25,
__debug_project_Check26,
__debug_project_Check27,
__debug_project_Check28,
__debug_project_Check29,
__debug_project_Check30,
__debug_project_Check31,
__debug_project_Check32,
__debug_project_Check33,
__debug_project_Check34,
__debug_project_Check35,
__debug_project_Check36,
__debug_project_Check37,
__debug_project_Check38,
__debug_project_Check39,
__debug_project_Check40,
__debug_project_Check41,
__debug_project_Check42,
__debug_project_Check43,
__debug_project_Check44,
__debug_project_Check45,
__debug_project_Check46,
__debug_project_Check47,
__debug_project_Check48,
__debug_project_Check49,
__debug_project_Check50,
__debug_project_Check51,
__debug_project_Check52,
__debug_project_Check53,
__debug_project_Check54,
__debug_project_Check55,
__debug_project_Check56,
__debug_project_Check57,
__debug_project_Check58,
__debug_project_Check59,
__debug_project_Check60,
__debug_project_Check61,
__debug_project_Check62,
__debug_project_Check63,
__debug_project_Check64,
__debug_project_Check65,
__debug_project_Check66,
__debug_project_Check67,
__debug_project_Check68,
__debug_project_Check69,
__debug_project_Check70,
__debug_project_Check71,
__debug_project_Check72,
__debug_project_Check73,
__debug_project_Check74,
__debug_project_Check75,
__debug_project_Check76,
__debug_project_Check77,
__debug_project_Check78,
__debug_project_Check79,
__debug_project_Check80,
__debug_project_Check81,
__debug_project_Check82,
__debug_project_Check83,
__debug_project_Check84,
__debug_project_Check85,
__debug_project_Check86,
__debug_project_Check87,
__debug_project_Check88
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
{"debug_project",0,"/home/student/Documents/RTPL/RTPL/debug_project//src","debug_project.strl",{1,1,1,0},{1,58,1,0},{0,0,0,0}},
{"TA",0,"/home/student/Documents/RTPL/RTPL/debug_project//src","debug_project.strl",{1,171,1,1},{1,197,1,1},{1,18,2,0}},
{"KEVIN",0,"/home/student/Documents/RTPL/RTPL/debug_project//src","debug_project.strl",{1,62,1,2},{1,165,1,2},{1,24,3,0}},
{"STUART",0,"/home/student/Documents/RTPL/RTPL/debug_project//src","debug_project.strl",{1,62,1,3},{1,165,1,3},{1,29,3,0}},
{"BOB",0,"/home/student/Documents/RTPL/RTPL/debug_project//src","debug_project.strl",{1,62,1,4},{1,165,1,4},{1,34,3,0}},
{"OBSERVER",0,"/home/student/Documents/RTPL/RTPL/debug_project//src","debug_project.strl",{1,203,1,5},{1,266,1,5},{1,55,2,0}},
};

struct __SignalEntry __debug_project_SignalTable [] = {
{"RANDOM1",33,0,0,{1,3,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RANDOM2",33,0,0,{1,3,17,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RANDOM3",33,0,0,{1,3,26,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_INREVIEW",34,0,0,{1,4,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_SLEEPING",34,0,0,{1,4,22,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"WANT_REVIEW",34,0,0,{1,6,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW",34,0,0,{1,7,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW",34,0,0,{1,7,26,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_DISMISS_STUD",34,0,0,{1,8,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUDENTS_WAITING",66,3,0,{1,9,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_INSANE",34,0,0,{1,10,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INSANE",34,0,0,{1,10,20,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RACECONDITION",34,0,0,{1,10,33,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"DEADLOCK",34,0,0,{1,10,48,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_TOOSLOW",34,0,0,{1,10,58,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"num_INREVIEWSTUDS",66,5,0,{1,12,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"PRIO_counter",66,7,0,{1,13,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW1",34,0,0,{1,15,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW1",34,0,0,{1,15,27,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW2",34,0,0,{1,15,43,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW2",34,0,0,{1,15,61,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW3",34,0,0,{1,15,77,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW3",34,0,0,{1,15,95,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T0",48,0,0,{1,82,9,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,125,10,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T0",48,0,0,{1,82,9,3},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,125,10,3},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T0",48,0,0,{1,82,9,4},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,125,10,4},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __debug_project_InputTable [] = {
{"RANDOM1",94,0,0,-1,0,0,0,debug_project_IS_RANDOM1,0,{1,3,8,0}},
{"RANDOM2",95,0,0,-1,0,1,0,debug_project_IS_RANDOM2,0,{1,3,17,0}},
{"RANDOM3",96,0,0,-1,0,2,0,debug_project_IS_RANDOM3,0,{1,3,26,0}}};

struct __VariableEntry __debug_project_VariableTable [] = {
{"__debug_project_V0","V0","boolean",-2,2,0,(char*)&__debug_project_V0,"RANDOM1",0,0,0,{1,3,8,0}},
{"__debug_project_V1","V1","boolean",-2,2,0,(char*)&__debug_project_V1,"RANDOM2",0,0,0,{1,3,17,0}},
{"__debug_project_V2","V2","boolean",-2,2,0,(char*)&__debug_project_V2,"RANDOM3",0,0,0,{1,3,26,0}},
{"__debug_project_V3","V3","integer",-3,1,0,(char*)&__debug_project_V3,"STUDENTS_WAITING",0,0,0,{1,9,9,0}},
{"__debug_project_V4","V4","boolean",-2,2,0,(char*)&__debug_project_V4,"STUDENTS_WAITING",0,0,0,{1,9,9,0}},
{"__debug_project_V5","V5","integer",-3,1,0,(char*)&__debug_project_V5,"num_INREVIEWSTUDS",0,0,0,{1,12,9,0}},
{"__debug_project_V6","V6","boolean",-2,2,0,(char*)&__debug_project_V6,"num_INREVIEWSTUDS",0,0,0,{1,12,9,0}},
{"__debug_project_V7","V7","integer",-3,1,0,(char*)&__debug_project_V7,"PRIO_counter",0,0,0,{1,13,9,0}},
{"__debug_project_V8","V8","boolean",-2,2,0,(char*)&__debug_project_V8,"PRIO_counter",0,0,0,{1,13,9,0}},
{"__debug_project_V9","V9","integer",-3,10,0,(char*)&__debug_project_V9,"STUDENTS_WAITING",0,0,0,{1,173,8,1}},
{"__debug_project_V10","V10","integer",-3,0,0,(char*)&__debug_project_V10,"WL_position",0,0,0,{1,77,6,2}},
{"__debug_project_V11","V11","integer",-3,0,0,(char*)&__debug_project_V11,"WL_position",0,0,0,{1,77,6,3}},
{"__debug_project_V12","V12","integer",-3,0,0,(char*)&__debug_project_V12,"WL_position",0,0,0,{1,77,6,4}}
};

struct __HaltEntry __debug_project_HaltTable [] = {
{{1,58,1,0}},
{{1,23,7,0}},
{{1,28,7,0}},
{{1,33,7,0}},
{{1,42,3,0}},
{{1,50,3,0}},
{{1,194,3,1}},
{{1,142,7,2}},
{{1,151,4,2}},
{{1,142,7,3}},
{{1,151,4,3}},
{{1,142,7,4}},
{{1,151,4,4}},
{{1,264,3,5}}
};


static void __debug_project__reset_input () {
__debug_project_V0 = _false;
__debug_project_V1 = _false;
__debug_project_V2 = _false;
__debug_project_V4 = _false;
__debug_project_V6 = _false;
__debug_project_V8 = _false;
}


/* MODULE DATA FOR SIMULATION */

int debug_project();
int debug_project_reset();

static struct __ModuleEntry __debug_project_ModuleData = {
"Simulation interface release 5","debug_project",
6,0,29,3,0,0,20,0,6,0,0,13,0,14,0,0,0,
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

static __SSC_BIT_TYPE __debug_project_R[16] = {_false,
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

__debug_project_ModuleData.awaited_list = __debug_project_AwaitedList;
__ResetModuleEntryBeforeReaction();
if (__debug_project_R[2]) {
__CheckVariables(__debug_project_CheckArray[28]);__debug_project_A28();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A28\n");
#endif
}
if (__debug_project_R[2]) {
__CheckVariables(__debug_project_CheckArray[33]);__debug_project_A33();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A33\n");
#endif
}
if (__debug_project_R[2]) {
__CheckVariables(__debug_project_CheckArray[30]);__debug_project_A30();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A30\n");
#endif
}
if (__debug_project_R[2]) {
__CheckVariables(__debug_project_CheckArray[32]);__debug_project_A32();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A32\n");
#endif
}
E[0] = __debug_project_R[2]||(__debug_project_R[8]&&!(__debug_project_R[2]));
if (E[0]) {
__CheckVariables(__debug_project_CheckArray[35]);__debug_project_A35();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A35\n");
#endif
}
E[1] = E[0]&&__debug_project_R[0];
if (E[1]) {
__AppendToList(__debug_project_EmittedList,3);
}
if (E[1]) {
__CheckVariables(__debug_project_CheckArray[4]);__debug_project_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A4\n");
#endif
}
E[2] = E[0]&&!(__debug_project_R[0]);
if (E[2]) {
__AppendToList(__debug_project_EmittedList,4);
}
if (E[2]) {
__CheckVariables(__debug_project_CheckArray[5]);__debug_project_A5();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A5\n");
#endif
}
if (!(_true)) {
__CheckVariables(__debug_project_CheckArray[6]);__debug_project_A6();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A6\n");
#endif
}
E[3] = (__debug_project_R[6]&&!(__debug_project_R[2]))||__debug_project_R[2];
E[4] = __debug_project_R[3]&&!(__debug_project_R[2]);
E[5] = E[4]&&(__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1());
if (E[5]) {
__CheckVariables(__debug_project_CheckArray[37]);__debug_project_A37();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A37\n");
#endif
}
if (E[5]) {
__CheckVariables(__debug_project_CheckArray[38]);__debug_project_A38();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A38\n");
#endif
}
E[6] = E[5]&&(__CheckVariables(__debug_project_CheckArray[67]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 67\n"),
#endif
__debug_project_A67());
E[7] = E[6]&&(__CheckVariables(__debug_project_CheckArray[68]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 68\n"),
#endif
__debug_project_A68());
if (E[7]) {
__CheckVariables(__debug_project_CheckArray[39]);__debug_project_A39();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A39\n");
#endif
}
E[8] = E[6]&&!(E[7]);
E[9] = E[8]&&(__CheckVariables(__debug_project_CheckArray[69]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 69\n"),
#endif
__debug_project_A69());
E[10] = __debug_project_R[4]&&!(__debug_project_R[2]);
E[11] = E[10]&&(__CheckVariables(__debug_project_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2());
if (E[11]) {
__CheckVariables(__debug_project_CheckArray[46]);__debug_project_A46();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A46\n");
#endif
}
if (E[11]) {
__CheckVariables(__debug_project_CheckArray[47]);__debug_project_A47();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A47\n");
#endif
}
E[12] = __debug_project_R[5]&&!(__debug_project_R[2]);
E[13] = E[12]&&(__CheckVariables(__debug_project_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3());
if (E[13]) {
__CheckVariables(__debug_project_CheckArray[55]);__debug_project_A55();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A55\n");
#endif
}
if (E[13]) {
__CheckVariables(__debug_project_CheckArray[56]);__debug_project_A56();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A56\n");
#endif
}
E[14] = E[9]&&(__CheckVariables(__debug_project_CheckArray[70]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 70\n"),
#endif
__debug_project_A70());
if (E[14]) {
__CheckVariables(__debug_project_CheckArray[40]);__debug_project_A40();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A40\n");
#endif
}
E[15] = E[9]&&!(E[14]);
if (E[15]) {
__CheckVariables(__debug_project_CheckArray[41]);__debug_project_A41();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A41\n");
#endif
}
E[9] = E[8]&&!(E[9]);
E[8] = E[9]&&(__CheckVariables(__debug_project_CheckArray[71]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 71\n"),
#endif
__debug_project_A71());
if (E[8]) {
__CheckVariables(__debug_project_CheckArray[42]);__debug_project_A42();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A42\n");
#endif
}
E[9] = E[9]&&!(E[8]);
E[16] = E[9]&&(__CheckVariables(__debug_project_CheckArray[72]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 72\n"),
#endif
__debug_project_A72());
if (E[16]) {
__CheckVariables(__debug_project_CheckArray[43]);__debug_project_A43();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A43\n");
#endif
}
E[17] = E[7]||E[14]||E[15]||E[8]||E[16];
if (E[17]) {
__CheckVariables(__debug_project_CheckArray[44]);__debug_project_A44();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A44\n");
#endif
}
E[18] = E[17]||(__debug_project_R[9]&&!(__debug_project_R[2]));
if (E[18]) {
__AppendToList(__debug_project_EmittedList,17);
}
E[19] = E[11]&&(__CheckVariables(__debug_project_CheckArray[74]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 74\n"),
#endif
__debug_project_A74());
E[20] = E[19]&&(__CheckVariables(__debug_project_CheckArray[75]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 75\n"),
#endif
__debug_project_A75());
if (E[20]) {
__CheckVariables(__debug_project_CheckArray[48]);__debug_project_A48();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A48\n");
#endif
}
E[21] = E[19]&&!(E[20]);
E[22] = E[21]&&(__CheckVariables(__debug_project_CheckArray[76]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 76\n"),
#endif
__debug_project_A76());
E[23] = E[22]&&(__CheckVariables(__debug_project_CheckArray[77]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 77\n"),
#endif
__debug_project_A77());
if (E[23]) {
__CheckVariables(__debug_project_CheckArray[49]);__debug_project_A49();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A49\n");
#endif
}
E[24] = E[22]&&!(E[23]);
if (E[24]) {
__CheckVariables(__debug_project_CheckArray[50]);__debug_project_A50();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A50\n");
#endif
}
E[22] = E[21]&&!(E[22]);
E[21] = E[22]&&(__CheckVariables(__debug_project_CheckArray[78]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 78\n"),
#endif
__debug_project_A78());
if (E[21]) {
__CheckVariables(__debug_project_CheckArray[51]);__debug_project_A51();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A51\n");
#endif
}
E[22] = E[22]&&!(E[21]);
E[25] = E[22]&&(__CheckVariables(__debug_project_CheckArray[79]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 79\n"),
#endif
__debug_project_A79());
if (E[25]) {
__CheckVariables(__debug_project_CheckArray[52]);__debug_project_A52();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A52\n");
#endif
}
E[26] = E[20]||E[23]||E[24]||E[21]||E[25];
if (E[26]) {
__CheckVariables(__debug_project_CheckArray[53]);__debug_project_A53();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A53\n");
#endif
}
E[27] = E[26]||(__debug_project_R[11]&&!(__debug_project_R[2]));
if (E[27]) {
__AppendToList(__debug_project_EmittedList,19);
}
E[28] = E[13]&&(__CheckVariables(__debug_project_CheckArray[81]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 81\n"),
#endif
__debug_project_A81());
E[29] = E[28]&&(__CheckVariables(__debug_project_CheckArray[82]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 82\n"),
#endif
__debug_project_A82());
if (E[29]) {
__CheckVariables(__debug_project_CheckArray[57]);__debug_project_A57();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A57\n");
#endif
}
E[30] = E[28]&&!(E[29]);
E[31] = E[30]&&(__CheckVariables(__debug_project_CheckArray[83]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 83\n"),
#endif
__debug_project_A83());
E[32] = E[31]&&(__CheckVariables(__debug_project_CheckArray[84]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 84\n"),
#endif
__debug_project_A84());
if (E[32]) {
__CheckVariables(__debug_project_CheckArray[58]);__debug_project_A58();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A58\n");
#endif
}
E[33] = E[31]&&!(E[32]);
if (E[33]) {
__CheckVariables(__debug_project_CheckArray[59]);__debug_project_A59();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A59\n");
#endif
}
E[31] = E[30]&&!(E[31]);
E[30] = E[31]&&(__CheckVariables(__debug_project_CheckArray[85]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 85\n"),
#endif
__debug_project_A85());
if (E[30]) {
__CheckVariables(__debug_project_CheckArray[60]);__debug_project_A60();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A60\n");
#endif
}
E[31] = E[31]&&!(E[30]);
E[34] = E[31]&&(__CheckVariables(__debug_project_CheckArray[86]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 86\n"),
#endif
__debug_project_A86());
if (E[34]) {
__CheckVariables(__debug_project_CheckArray[61]);__debug_project_A61();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A61\n");
#endif
}
E[35] = E[29]||E[32]||E[33]||E[30]||E[34];
if (E[35]) {
__CheckVariables(__debug_project_CheckArray[62]);__debug_project_A62();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A62\n");
#endif
}
E[36] = E[35]||(__debug_project_R[13]&&!(__debug_project_R[2]));
if (E[36]) {
__AppendToList(__debug_project_EmittedList,21);
}
E[37] = E[18]||E[27]||E[36];
E[38] = E[3]&&E[37];
if (E[38]) {
__AppendToList(__debug_project_EmittedList,6);
}
if (E[38]) {
__CheckVariables(__debug_project_CheckArray[7]);__debug_project_A7();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A7\n");
#endif
}
if (E[1]) {
__CheckVariables(__debug_project_CheckArray[36]);__debug_project_A36();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A36\n");
#endif
}
E[39] = E[1]||E[2];
E[40] = __debug_project_R[10]&&!(__debug_project_R[2]);
if (E[40]) {
__AppendToList(__debug_project_EmittedList,18);
}
if (E[9]&&!(E[16])) {
__AppendToList(__debug_project_EmittedList,23);
}
E[4] = E[4]&&!((__CheckVariables(__debug_project_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__debug_project_A1()));
E[4] = __debug_project_R[2]||E[40]||(E[9]&&!(E[16]))||(E[5]&&!(E[6]))||(__debug_project_R[3]&&E[4]);
E[6] = E[18]&&(__CheckVariables(__debug_project_CheckArray[73]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 73\n"),
#endif
__debug_project_A73());
if (E[6]) {
__AppendToList(__debug_project_EmittedList,24);
}
E[9] = E[18]&&!(E[6]);
if (E[9]) {
__CheckVariables(__debug_project_CheckArray[45]);__debug_project_A45();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A45\n");
#endif
}
E[41] = E[6]||E[9];
E[42] = __debug_project_R[12]&&!(__debug_project_R[2]);
if (E[42]) {
__AppendToList(__debug_project_EmittedList,20);
}
if (E[22]&&!(E[25])) {
__AppendToList(__debug_project_EmittedList,25);
}
E[10] = E[10]&&!((__CheckVariables(__debug_project_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__debug_project_A2()));
E[10] = __debug_project_R[2]||E[42]||(E[22]&&!(E[25]))||(E[11]&&!(E[19]))||(__debug_project_R[4]&&E[10]);
E[19] = E[27]&&(__CheckVariables(__debug_project_CheckArray[80]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 80\n"),
#endif
__debug_project_A80());
if (E[19]) {
__AppendToList(__debug_project_EmittedList,26);
}
E[22] = E[27]&&!(E[19]);
if (E[22]) {
__CheckVariables(__debug_project_CheckArray[54]);__debug_project_A54();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A54\n");
#endif
}
E[43] = E[19]||E[22];
E[44] = __debug_project_R[14]&&!(__debug_project_R[2]);
if (E[44]) {
__AppendToList(__debug_project_EmittedList,22);
}
if (E[31]&&!(E[34])) {
__AppendToList(__debug_project_EmittedList,27);
}
E[12] = E[12]&&!((__CheckVariables(__debug_project_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__debug_project_A3()));
E[12] = __debug_project_R[2]||E[44]||(E[31]&&!(E[34]))||(E[13]&&!(E[28]))||(__debug_project_R[5]&&E[12]);
E[28] = E[36]&&(__CheckVariables(__debug_project_CheckArray[87]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 87\n"),
#endif
__debug_project_A87());
if (E[28]) {
__AppendToList(__debug_project_EmittedList,28);
}
E[31] = E[36]&&!(E[28]);
if (E[31]) {
__CheckVariables(__debug_project_CheckArray[63]);__debug_project_A63();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A63\n");
#endif
}
E[45] = E[28]||E[31];
E[37] = E[38]||(E[3]&&!(E[37]));
E[3] = (__debug_project_R[7]&&!(__debug_project_R[2]))||__debug_project_R[2];
E[46] = E[40]||E[42]||E[44];
E[47] = E[3]&&E[46];
if (E[47]) {
__AppendToList(__debug_project_EmittedList,7);
}
E[46] = E[47]||(E[3]&&!(E[46]));
E[3] = (__debug_project_R[15]&&!(__debug_project_R[2]))||__debug_project_R[2];
E[48] = E[1]&&E[2];
E[49] = E[3]&&E[48];
if (E[49]) {
__AppendToList(__debug_project_EmittedList,10);
}
E[48] = E[49]||(E[3]&&!(E[48]));
E[3] = E[40]&&E[18];
E[50] = E[48]&&E[3];
E[3] = E[50]||(E[48]&&!(E[3]));
E[48] = E[42]&&E[27];
E[51] = E[3]&&E[48];
E[48] = E[51]||(E[3]&&!(E[48]));
E[3] = E[44]&&E[36];
E[52] = E[48]&&E[3];
E[3] = E[52]||(E[48]&&!(E[3]));
E[48] = E[3]&&E[40];
if (E[48]) {
__CheckVariables(__debug_project_CheckArray[64]);__debug_project_A64();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A64\n");
#endif
}
E[3] = E[48]||(E[3]&&!(E[40]));
E[53] = E[3]&&E[42];
if (E[53]) {
__CheckVariables(__debug_project_CheckArray[65]);__debug_project_A65();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A65\n");
#endif
}
E[3] = E[53]||(E[3]&&!(E[42]));
E[54] = E[3]&&E[44];
if (E[54]) {
__CheckVariables(__debug_project_CheckArray[66]);__debug_project_A66();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A66\n");
#endif
}
E[3] = E[54]||(E[3]&&!(E[44]));
E[55] = E[3]&&(__CheckVariables(__debug_project_CheckArray[88]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 88\n"),
#endif
__debug_project_A88());
if (E[55]) {
__AppendToList(__debug_project_EmittedList,12);
}
E[3] = E[55]||(E[3]&&!(E[55]));
E[56] = E[2]&&E[38];
E[57] = E[3]&&E[56];
if (E[57]) {
__AppendToList(__debug_project_EmittedList,13);
}
E[56] = E[57]||(E[3]&&!(E[56]));
E[3] = E[56]&&__debug_project_R[1];
E[58] = E[3]&&E[57];
if (E[58]) {
__AppendToList(__debug_project_EmittedList,14);
}
E[56] = E[58]||(E[3]&&!(E[57]))||(E[56]&&!(__debug_project_R[1]));
E[3] = __debug_project_R[3]||__debug_project_R[10]||__debug_project_R[9];
E[59] = __debug_project_R[4]||__debug_project_R[12]||__debug_project_R[11];
E[60] = __debug_project_R[5]||__debug_project_R[14]||__debug_project_R[13];
E[61] = __debug_project_R[8]||E[3]||E[59]||E[60]||__debug_project_R[6]||__debug_project_R[7]||__debug_project_R[15];
E[61] = (E[39]||E[4]||E[41]||E[10]||E[43]||E[12]||E[45]||E[37]||E[46]||E[56])&&((E[61]&&!(__debug_project_R[8]))||E[39])&&((E[61]&&!(E[3]))||E[4]||E[41])&&((E[61]&&!(E[59]))||E[10]||E[43])&&((E[61]&&!(E[60]))||E[12]||E[45])&&((E[61]&&!(__debug_project_R[6]))||E[37])&&((E[61]&&!(__debug_project_R[7]))||E[46])&&((E[61]&&!(__debug_project_R[15]))||E[56]);
__debug_project_R[0] = E[38]&&E[61];
if (E[47]) {
__CheckVariables(__debug_project_CheckArray[8]);__debug_project_A8();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A8\n");
#endif
}
if (!(_true)) {
__CheckVariables(__debug_project_CheckArray[9]);__debug_project_A9();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A9\n");
#endif
}
E[45] = E[0]||E[1]||E[17]||E[26]||E[35];
if (E[45]) {
__AppendToList(__debug_project_EmittedList,9);
}
if (E[45]) {
__CheckVariables(__debug_project_CheckArray[10]);__debug_project_A10();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A10\n");
#endif
}
if (E[45]&&E[61]) {
__CheckVariables(__debug_project_CheckArray[34]);__debug_project_A34();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A34\n");
#endif
}
if (E[49]) {
__CheckVariables(__debug_project_CheckArray[11]);__debug_project_A11();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A11\n");
#endif
}
if (E[50]||E[51]||E[52]) {
__AppendToList(__debug_project_EmittedList,11);
}
if (E[50]||E[51]||E[52]) {
__CheckVariables(__debug_project_CheckArray[12]);__debug_project_A12();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A12\n");
#endif
}
if (E[55]) {
__CheckVariables(__debug_project_CheckArray[13]);__debug_project_A13();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A13\n");
#endif
}
if (E[57]) {
__CheckVariables(__debug_project_CheckArray[14]);__debug_project_A14();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A14\n");
#endif
}
__debug_project_R[1] = E[57]&&E[61];
if (E[58]) {
__CheckVariables(__debug_project_CheckArray[15]);__debug_project_A15();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A15\n");
#endif
}
if (E[48]||E[53]||E[54]) {
__AppendToList(__debug_project_EmittedList,15);
}
if (E[48]||E[53]||E[54]) {
__CheckVariables(__debug_project_CheckArray[16]);__debug_project_A16();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A16\n");
#endif
}
if (E[5]||E[11]||E[13]) {
__AppendToList(__debug_project_EmittedList,16);
}
if (E[5]||E[11]||E[13]) {
__CheckVariables(__debug_project_CheckArray[17]);__debug_project_A17();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A17\n");
#endif
}
if (E[18]) {
__CheckVariables(__debug_project_CheckArray[18]);__debug_project_A18();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A18\n");
#endif
}
if (E[40]) {
__CheckVariables(__debug_project_CheckArray[19]);__debug_project_A19();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A19\n");
#endif
}
if (E[27]) {
__CheckVariables(__debug_project_CheckArray[20]);__debug_project_A20();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A20\n");
#endif
}
if (E[42]) {
__CheckVariables(__debug_project_CheckArray[21]);__debug_project_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A21\n");
#endif
}
if (E[36]) {
__CheckVariables(__debug_project_CheckArray[22]);__debug_project_A22();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A22\n");
#endif
}
if (E[44]) {
__CheckVariables(__debug_project_CheckArray[23]);__debug_project_A23();
#ifdef TRACE_ACTION
fprintf(stderr, "__debug_project_A23\n");
#endif
}
E[60] = !(_true);
__debug_project_R[2] = !(_true);
__debug_project_R[3] = E[4];
if (__debug_project_R[3]) { __AppendToList(__debug_project_HaltList,1); }
__debug_project_R[4] = E[10];
if (__debug_project_R[4]) { __AppendToList(__debug_project_HaltList,2); }
__debug_project_R[5] = E[12];
if (__debug_project_R[5]) { __AppendToList(__debug_project_HaltList,3); }
__debug_project_R[6] = E[37];
if (__debug_project_R[6]) { __AppendToList(__debug_project_HaltList,4); }
__debug_project_R[7] = E[46];
if (__debug_project_R[7]) { __AppendToList(__debug_project_HaltList,5); }
__debug_project_R[8] = E[39];
if (__debug_project_R[8]) { __AppendToList(__debug_project_HaltList,6); }
__debug_project_R[9] = E[9];
if (__debug_project_R[9]) { __AppendToList(__debug_project_HaltList,7); }
__debug_project_R[10] = E[6];
if (__debug_project_R[10]) { __AppendToList(__debug_project_HaltList,8); }
__debug_project_R[11] = E[22];
if (__debug_project_R[11]) { __AppendToList(__debug_project_HaltList,9); }
__debug_project_R[12] = E[19];
if (__debug_project_R[12]) { __AppendToList(__debug_project_HaltList,10); }
__debug_project_R[13] = E[31];
if (__debug_project_R[13]) { __AppendToList(__debug_project_HaltList,11); }
__debug_project_R[14] = E[28];
if (__debug_project_R[14]) { __AppendToList(__debug_project_HaltList,12); }
__debug_project_R[15] = E[56];
if (__debug_project_R[15]) { __AppendToList(__debug_project_HaltList,13); }
if (!E[61]) { __AppendToList(__debug_project_HaltList,0); }
__ResetModuleEntryAfterReaction();
__debug_project_ModuleData.awaited_list = __debug_project_AllAwaitedList;
__debug_project__reset_input();
return E[61];
}

/* AUTOMATON RESET */

int debug_project_reset () {
__debug_project_ModuleData.awaited_list = __debug_project_AwaitedList;
__ResetModuleEntry();
__debug_project_ModuleData.awaited_list = __debug_project_AllAwaitedList;
__debug_project_ModuleData.state = 0;
__debug_project_R[0] = _false;
__debug_project_R[1] = _false;
__debug_project_R[2] = _true;
__debug_project_R[3] = _false;
__debug_project_R[4] = _false;
__debug_project_R[5] = _false;
__debug_project_R[6] = _false;
__debug_project_R[7] = _false;
__debug_project_R[8] = _false;
__debug_project_R[9] = _false;
__debug_project_R[10] = _false;
__debug_project_R[11] = _false;
__debug_project_R[12] = _false;
__debug_project_R[13] = _false;
__debug_project_R[14] = _false;
__debug_project_R[15] = _false;
__debug_project__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__debug_project_ModuleData
};
