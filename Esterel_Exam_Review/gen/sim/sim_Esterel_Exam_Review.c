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
static integer __Esterel_Exam_Review_V5;
static boolean __Esterel_Exam_Review_V6;
static integer __Esterel_Exam_Review_V7;
static boolean __Esterel_Exam_Review_V8;
static integer __Esterel_Exam_Review_V9;
static integer __Esterel_Exam_Review_V10;
static integer __Esterel_Exam_Review_V11;
static integer __Esterel_Exam_Review_V12;
static integer __Esterel_Exam_Review_V13;
static integer __Esterel_Exam_Review_V14;
static integer __Esterel_Exam_Review_V15;
static integer __Esterel_Exam_Review_V16;
static integer __Esterel_Exam_Review_V17;
static integer __Esterel_Exam_Review_V18;

static unsigned short __Esterel_Exam_Review_HaltList[15];
static unsigned short __Esterel_Exam_Review_AwaitedList[46];
static unsigned short __Esterel_Exam_Review_EmittedList[46];
static unsigned short __Esterel_Exam_Review_StartedList[1];
static unsigned short __Esterel_Exam_Review_KilledList[1];
static unsigned short __Esterel_Exam_Review_SuspendedList[1];
static unsigned short __Esterel_Exam_Review_ActiveList[1];
static unsigned short __Esterel_Exam_Review_AllAwaitedList[46]={3,0,1,2};


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
Esterel_Exam_Review_O_TA_DISMISS_STUD();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,8);
}
static int __Esterel_Exam_Review_Check9 [] = {1,0,0};
static void __Esterel_Exam_Review_A10 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUDENTS_WAITING(__Esterel_Exam_Review_V3);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,9);
}
static int __Esterel_Exam_Review_Check10 [] = {1,0,0};
static void __Esterel_Exam_Review_A11 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_TA_INSANE();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,10);
}
static int __Esterel_Exam_Review_Check11 [] = {1,0,0};
static void __Esterel_Exam_Review_A12 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_INSANE();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,11);
}
static int __Esterel_Exam_Review_Check12 [] = {1,0,0};
static void __Esterel_Exam_Review_A13 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_RACECONDITION();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,12);
}
static int __Esterel_Exam_Review_Check13 [] = {1,0,0};
static void __Esterel_Exam_Review_A14 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_DEADLOCK();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,13);
}
static int __Esterel_Exam_Review_Check14 [] = {1,0,0};
static void __Esterel_Exam_Review_A15 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_TA_TOOSLOW();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,14);
}
static int __Esterel_Exam_Review_Check15 [] = {1,0,0};
static void __Esterel_Exam_Review_A16 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_STARVATION();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,15);
}
static int __Esterel_Exam_Review_Check16 [] = {1,0,0};
static void __Esterel_Exam_Review_A17 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WAITING1();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,16);
}
static int __Esterel_Exam_Review_Check17 [] = {1,0,0};
static void __Esterel_Exam_Review_A18 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WAITING2();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,17);
}
static int __Esterel_Exam_Review_Check18 [] = {1,0,0};
static void __Esterel_Exam_Review_A19 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WAITING3();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,18);
}
static int __Esterel_Exam_Review_Check19 [] = {1,0,0};
static void __Esterel_Exam_Review_A20 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_num_INREVIEWSTUDS(__Esterel_Exam_Review_V5);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,19);
}
static int __Esterel_Exam_Review_Check20 [] = {1,0,0};
static void __Esterel_Exam_Review_A21 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_PRIO_counter(__Esterel_Exam_Review_V7);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,20);
}
static int __Esterel_Exam_Review_Check21 [] = {1,0,0};
static void __Esterel_Exam_Review_A22 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_cycles_STARVATION1(__Esterel_Exam_Review_V9);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,21);
}
static int __Esterel_Exam_Review_Check22 [] = {1,0,0};
static void __Esterel_Exam_Review_A23 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_cycles_STARVATION2(__Esterel_Exam_Review_V10);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,22);
}
static int __Esterel_Exam_Review_Check23 [] = {1,0,0};
static void __Esterel_Exam_Review_A24 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_cycles_STARVATION3(__Esterel_Exam_Review_V11);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,23);
}
static int __Esterel_Exam_Review_Check24 [] = {1,0,0};
static void __Esterel_Exam_Review_A25 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_WL_position_sig_1(__Esterel_Exam_Review_V12);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,24);
}
static int __Esterel_Exam_Review_Check25 [] = {1,0,0};
static void __Esterel_Exam_Review_A26 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_WL_position_sig_2(__Esterel_Exam_Review_V13);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,25);
}
static int __Esterel_Exam_Review_Check26 [] = {1,0,0};
static void __Esterel_Exam_Review_A27 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_WL_position_sig_3(__Esterel_Exam_Review_V14);
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,26);
}
static int __Esterel_Exam_Review_Check27 [] = {1,0,0};
static void __Esterel_Exam_Review_A28 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WANTREVIEW1();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,27);
}
static int __Esterel_Exam_Review_Check28 [] = {1,0,0};
static void __Esterel_Exam_Review_A29 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_INREVIEW1();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,28);
}
static int __Esterel_Exam_Review_Check29 [] = {1,0,0};
static void __Esterel_Exam_Review_A30 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WANTREVIEW2();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,29);
}
static int __Esterel_Exam_Review_Check30 [] = {1,0,0};
static void __Esterel_Exam_Review_A31 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_INREVIEW2();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,30);
}
static int __Esterel_Exam_Review_Check31 [] = {1,0,0};
static void __Esterel_Exam_Review_A32 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_WANTREVIEW3();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,31);
}
static int __Esterel_Exam_Review_Check32 [] = {1,0,0};
static void __Esterel_Exam_Review_A33 () {
#ifdef __OUTPUT
Esterel_Exam_Review_O_STUD_INREVIEW3();
#endif
__AppendToList(__Esterel_Exam_Review_EmittedList,32);
}
static int __Esterel_Exam_Review_Check33 [] = {1,0,0};

/* ASSIGNMENTS */

static void __Esterel_Exam_Review_A34 () {
__Esterel_Exam_Review_V0 = _false;
}
static int __Esterel_Exam_Review_Check34 [] = {1,0,1,0};
static void __Esterel_Exam_Review_A35 () {
__Esterel_Exam_Review_V1 = _false;
}
static int __Esterel_Exam_Review_Check35 [] = {1,0,1,1};
static void __Esterel_Exam_Review_A36 () {
__Esterel_Exam_Review_V2 = _false;
}
static int __Esterel_Exam_Review_Check36 [] = {1,0,1,2};
static void __Esterel_Exam_Review_A37 () {
__Esterel_Exam_Review_V4 = _false;
}
static int __Esterel_Exam_Review_Check37 [] = {1,0,1,4};
static void __Esterel_Exam_Review_A38 () {
__Esterel_Exam_Review_V3 = 0;
}
static int __Esterel_Exam_Review_Check38 [] = {1,0,1,3};
static void __Esterel_Exam_Review_A39 () {
__Esterel_Exam_Review_V6 = _false;
}
static int __Esterel_Exam_Review_Check39 [] = {1,0,1,6};
static void __Esterel_Exam_Review_A40 () {
__Esterel_Exam_Review_V5 = 0;
}
static int __Esterel_Exam_Review_Check40 [] = {1,0,1,5};
static void __Esterel_Exam_Review_A41 () {
__Esterel_Exam_Review_V8 = _false;
}
static int __Esterel_Exam_Review_Check41 [] = {1,0,1,8};
static void __Esterel_Exam_Review_A42 () {
__Esterel_Exam_Review_V7 = 0;
}
static int __Esterel_Exam_Review_Check42 [] = {1,0,1,7};
static void __Esterel_Exam_Review_A43 () {
__Esterel_Exam_Review_V9 = 0;
}
static int __Esterel_Exam_Review_Check43 [] = {1,0,1,9};
static void __Esterel_Exam_Review_A44 () {
__Esterel_Exam_Review_V10 = 0;
}
static int __Esterel_Exam_Review_Check44 [] = {1,0,1,10};
static void __Esterel_Exam_Review_A45 () {
__Esterel_Exam_Review_V11 = 0;
}
static int __Esterel_Exam_Review_Check45 [] = {1,0,1,11};
static void __Esterel_Exam_Review_A46 () {
__Esterel_Exam_Review_V12 = 0;
}
static int __Esterel_Exam_Review_Check46 [] = {1,0,1,12};
static void __Esterel_Exam_Review_A47 () {
__Esterel_Exam_Review_V13 = 0;
}
static int __Esterel_Exam_Review_Check47 [] = {1,0,1,13};
static void __Esterel_Exam_Review_A48 () {
__Esterel_Exam_Review_V14 = 0;
}
static int __Esterel_Exam_Review_Check48 [] = {1,0,1,14};
static void __Esterel_Exam_Review_A49 () {
__Esterel_Exam_Review_V15 = 0;
}
static int __Esterel_Exam_Review_Check49 [] = {1,0,1,15};
static void __Esterel_Exam_Review_A50 () {
__Esterel_Exam_Review_V15 = __Esterel_Exam_Review_V3;
}
static int __Esterel_Exam_Review_Check50 [] = {1,1,3,1,15};
static void __Esterel_Exam_Review_A51 () {
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(__Esterel_Exam_Review_V15)),(__Esterel_Exam_Review_V4=_true,__Esterel_Exam_Review_V15));
}
static int __Esterel_Exam_Review_Check51 [] = {1,1,15,1,3};
static void __Esterel_Exam_Review_A52 () {
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(-(1))),(__Esterel_Exam_Review_V4=_true,-(1)));
}
static int __Esterel_Exam_Review_Check52 [] = {1,0,1,3};
static void __Esterel_Exam_Review_A53 () {
__Esterel_Exam_Review_V16 = 0;
}
static int __Esterel_Exam_Review_Check53 [] = {1,0,1,16};
static void __Esterel_Exam_Review_A54 () {
__Esterel_Exam_Review_V16 = __Esterel_Exam_Review_V12;
}
static int __Esterel_Exam_Review_Check54 [] = {1,1,12,1,16};
static void __Esterel_Exam_Review_A55 () {
__Esterel_Exam_Review_V7 = _COND(__Esterel_Exam_Review_V8,(__Esterel_Exam_Review_V7+(1)),(__Esterel_Exam_Review_V8=_true,1));
}
static int __Esterel_Exam_Review_Check55 [] = {1,0,1,7};
static void __Esterel_Exam_Review_A56 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check56 [] = {1,1,15,1,12};
static void __Esterel_Exam_Review_A57 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V15+1;
}
static int __Esterel_Exam_Review_Check57 [] = {1,1,15,1,12};
static void __Esterel_Exam_Review_A58 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check58 [] = {1,1,15,1,12};
static void __Esterel_Exam_Review_A59 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check59 [] = {1,1,15,1,12};
static void __Esterel_Exam_Review_A60 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V15+1;
}
static int __Esterel_Exam_Review_Check60 [] = {1,1,15,1,12};
static void __Esterel_Exam_Review_A61 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V15+2;
}
static int __Esterel_Exam_Review_Check61 [] = {1,1,15,1,12};
static void __Esterel_Exam_Review_A62 () {
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(1)),(__Esterel_Exam_Review_V4=_true,1));
}
static int __Esterel_Exam_Review_Check62 [] = {1,0,1,3};
static void __Esterel_Exam_Review_A63 () {
__Esterel_Exam_Review_V12 = __Esterel_Exam_Review_V16-1;
}
static int __Esterel_Exam_Review_Check63 [] = {1,1,16,1,12};
static void __Esterel_Exam_Review_A64 () {
__Esterel_Exam_Review_V17 = 0;
}
static int __Esterel_Exam_Review_Check64 [] = {1,0,1,17};
static void __Esterel_Exam_Review_A65 () {
__Esterel_Exam_Review_V17 = __Esterel_Exam_Review_V13;
}
static int __Esterel_Exam_Review_Check65 [] = {1,1,13,1,17};
static void __Esterel_Exam_Review_A66 () {
__Esterel_Exam_Review_V7 = _COND(__Esterel_Exam_Review_V8,(__Esterel_Exam_Review_V7+(2)),(__Esterel_Exam_Review_V8=_true,2));
}
static int __Esterel_Exam_Review_Check66 [] = {1,0,1,7};
static void __Esterel_Exam_Review_A67 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check67 [] = {1,1,15,1,13};
static void __Esterel_Exam_Review_A68 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V15+1;
}
static int __Esterel_Exam_Review_Check68 [] = {1,1,15,1,13};
static void __Esterel_Exam_Review_A69 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check69 [] = {1,1,15,1,13};
static void __Esterel_Exam_Review_A70 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check70 [] = {1,1,15,1,13};
static void __Esterel_Exam_Review_A71 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V15+1;
}
static int __Esterel_Exam_Review_Check71 [] = {1,1,15,1,13};
static void __Esterel_Exam_Review_A72 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V15+2;
}
static int __Esterel_Exam_Review_Check72 [] = {1,1,15,1,13};
static void __Esterel_Exam_Review_A73 () {
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(1)),(__Esterel_Exam_Review_V4=_true,1));
}
static int __Esterel_Exam_Review_Check73 [] = {1,0,1,3};
static void __Esterel_Exam_Review_A74 () {
__Esterel_Exam_Review_V13 = __Esterel_Exam_Review_V17-1;
}
static int __Esterel_Exam_Review_Check74 [] = {1,1,17,1,13};
static void __Esterel_Exam_Review_A75 () {
__Esterel_Exam_Review_V18 = 0;
}
static int __Esterel_Exam_Review_Check75 [] = {1,0,1,18};
static void __Esterel_Exam_Review_A76 () {
__Esterel_Exam_Review_V18 = __Esterel_Exam_Review_V14;
}
static int __Esterel_Exam_Review_Check76 [] = {1,1,14,1,18};
static void __Esterel_Exam_Review_A77 () {
__Esterel_Exam_Review_V7 = _COND(__Esterel_Exam_Review_V8,(__Esterel_Exam_Review_V7+(3)),(__Esterel_Exam_Review_V8=_true,3));
}
static int __Esterel_Exam_Review_Check77 [] = {1,0,1,7};
static void __Esterel_Exam_Review_A78 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check78 [] = {1,1,15,1,14};
static void __Esterel_Exam_Review_A79 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V15+1;
}
static int __Esterel_Exam_Review_Check79 [] = {1,1,15,1,14};
static void __Esterel_Exam_Review_A80 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check80 [] = {1,1,15,1,14};
static void __Esterel_Exam_Review_A81 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V15;
}
static int __Esterel_Exam_Review_Check81 [] = {1,1,15,1,14};
static void __Esterel_Exam_Review_A82 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V15+1;
}
static int __Esterel_Exam_Review_Check82 [] = {1,1,15,1,14};
static void __Esterel_Exam_Review_A83 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V15+2;
}
static int __Esterel_Exam_Review_Check83 [] = {1,1,15,1,14};
static void __Esterel_Exam_Review_A84 () {
__Esterel_Exam_Review_V3 = _COND(__Esterel_Exam_Review_V4,(__Esterel_Exam_Review_V3+(1)),(__Esterel_Exam_Review_V4=_true,1));
}
static int __Esterel_Exam_Review_Check84 [] = {1,0,1,3};
static void __Esterel_Exam_Review_A85 () {
__Esterel_Exam_Review_V14 = __Esterel_Exam_Review_V18-1;
}
static int __Esterel_Exam_Review_Check85 [] = {1,1,18,1,14};

/* PROCEDURE CALLS */

/* CONDITIONS */

static int __Esterel_Exam_Review_A86 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V15<2);
}
static int __Esterel_Exam_Review_Check86 [] = {1,1,15,0};
static int __Esterel_Exam_Review_A87 () {
__Esterel_Exam_Review_GENERIC_TEST(1==3);
}
static int __Esterel_Exam_Review_Check87 [] = {1,0,0};
static int __Esterel_Exam_Review_A88 () {
__Esterel_Exam_Review_GENERIC_TEST(1==2);
}
static int __Esterel_Exam_Review_Check88 [] = {1,0,0};
static int __Esterel_Exam_Review_A89 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V7>=5);
}
static int __Esterel_Exam_Review_Check89 [] = {1,1,7,0};
static int __Esterel_Exam_Review_A90 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V7==1);
}
static int __Esterel_Exam_Review_Check90 [] = {1,1,7,0};
static int __Esterel_Exam_Review_A91 () {
__Esterel_Exam_Review_GENERIC_TEST((__Esterel_Exam_Review_V7==3)||(__Esterel_Exam_Review_V7==4));
}
static int __Esterel_Exam_Review_Check91 [] = {1,2,7,7,0};
static int __Esterel_Exam_Review_A92 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V12<1);
}
static int __Esterel_Exam_Review_Check92 [] = {1,1,12,0};
static int __Esterel_Exam_Review_A93 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V12<1);
}
static int __Esterel_Exam_Review_Check93 [] = {1,1,12,0};
static int __Esterel_Exam_Review_A94 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V15<2);
}
static int __Esterel_Exam_Review_Check94 [] = {1,1,15,0};
static int __Esterel_Exam_Review_A95 () {
__Esterel_Exam_Review_GENERIC_TEST(2==3);
}
static int __Esterel_Exam_Review_Check95 [] = {1,0,0};
static int __Esterel_Exam_Review_A96 () {
__Esterel_Exam_Review_GENERIC_TEST(2==2);
}
static int __Esterel_Exam_Review_Check96 [] = {1,0,0};
static int __Esterel_Exam_Review_A97 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V7>=5);
}
static int __Esterel_Exam_Review_Check97 [] = {1,1,7,0};
static int __Esterel_Exam_Review_A98 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V7==1);
}
static int __Esterel_Exam_Review_Check98 [] = {1,1,7,0};
static int __Esterel_Exam_Review_A99 () {
__Esterel_Exam_Review_GENERIC_TEST((__Esterel_Exam_Review_V7==3)||(__Esterel_Exam_Review_V7==4));
}
static int __Esterel_Exam_Review_Check99 [] = {1,2,7,7,0};
static int __Esterel_Exam_Review_A100 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V13<1);
}
static int __Esterel_Exam_Review_Check100 [] = {1,1,13,0};
static int __Esterel_Exam_Review_A101 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V13<1);
}
static int __Esterel_Exam_Review_Check101 [] = {1,1,13,0};
static int __Esterel_Exam_Review_A102 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V15<2);
}
static int __Esterel_Exam_Review_Check102 [] = {1,1,15,0};
static int __Esterel_Exam_Review_A103 () {
__Esterel_Exam_Review_GENERIC_TEST(3==3);
}
static int __Esterel_Exam_Review_Check103 [] = {1,0,0};
static int __Esterel_Exam_Review_A104 () {
__Esterel_Exam_Review_GENERIC_TEST(3==2);
}
static int __Esterel_Exam_Review_Check104 [] = {1,0,0};
static int __Esterel_Exam_Review_A105 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V7>=5);
}
static int __Esterel_Exam_Review_Check105 [] = {1,1,7,0};
static int __Esterel_Exam_Review_A106 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V7==1);
}
static int __Esterel_Exam_Review_Check106 [] = {1,1,7,0};
static int __Esterel_Exam_Review_A107 () {
__Esterel_Exam_Review_GENERIC_TEST((__Esterel_Exam_Review_V7==3)||(__Esterel_Exam_Review_V7==4));
}
static int __Esterel_Exam_Review_Check107 [] = {1,2,7,7,0};
static int __Esterel_Exam_Review_A108 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V14<1);
}
static int __Esterel_Exam_Review_Check108 [] = {1,1,14,0};
static int __Esterel_Exam_Review_A109 () {
__Esterel_Exam_Review_GENERIC_TEST(__Esterel_Exam_Review_V14<1);
}
static int __Esterel_Exam_Review_Check109 [] = {1,1,14,0};

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
__Esterel_Exam_Review_Check15,
__Esterel_Exam_Review_Check16,
__Esterel_Exam_Review_Check17,
__Esterel_Exam_Review_Check18,
__Esterel_Exam_Review_Check19,
__Esterel_Exam_Review_Check20,
__Esterel_Exam_Review_Check21,
__Esterel_Exam_Review_Check22,
__Esterel_Exam_Review_Check23,
__Esterel_Exam_Review_Check24,
__Esterel_Exam_Review_Check25,
__Esterel_Exam_Review_Check26,
__Esterel_Exam_Review_Check27,
__Esterel_Exam_Review_Check28,
__Esterel_Exam_Review_Check29,
__Esterel_Exam_Review_Check30,
__Esterel_Exam_Review_Check31,
__Esterel_Exam_Review_Check32,
__Esterel_Exam_Review_Check33,
__Esterel_Exam_Review_Check34,
__Esterel_Exam_Review_Check35,
__Esterel_Exam_Review_Check36,
__Esterel_Exam_Review_Check37,
__Esterel_Exam_Review_Check38,
__Esterel_Exam_Review_Check39,
__Esterel_Exam_Review_Check40,
__Esterel_Exam_Review_Check41,
__Esterel_Exam_Review_Check42,
__Esterel_Exam_Review_Check43,
__Esterel_Exam_Review_Check44,
__Esterel_Exam_Review_Check45,
__Esterel_Exam_Review_Check46,
__Esterel_Exam_Review_Check47,
__Esterel_Exam_Review_Check48,
__Esterel_Exam_Review_Check49,
__Esterel_Exam_Review_Check50,
__Esterel_Exam_Review_Check51,
__Esterel_Exam_Review_Check52,
__Esterel_Exam_Review_Check53,
__Esterel_Exam_Review_Check54,
__Esterel_Exam_Review_Check55,
__Esterel_Exam_Review_Check56,
__Esterel_Exam_Review_Check57,
__Esterel_Exam_Review_Check58,
__Esterel_Exam_Review_Check59,
__Esterel_Exam_Review_Check60,
__Esterel_Exam_Review_Check61,
__Esterel_Exam_Review_Check62,
__Esterel_Exam_Review_Check63,
__Esterel_Exam_Review_Check64,
__Esterel_Exam_Review_Check65,
__Esterel_Exam_Review_Check66,
__Esterel_Exam_Review_Check67,
__Esterel_Exam_Review_Check68,
__Esterel_Exam_Review_Check69,
__Esterel_Exam_Review_Check70,
__Esterel_Exam_Review_Check71,
__Esterel_Exam_Review_Check72,
__Esterel_Exam_Review_Check73,
__Esterel_Exam_Review_Check74,
__Esterel_Exam_Review_Check75,
__Esterel_Exam_Review_Check76,
__Esterel_Exam_Review_Check77,
__Esterel_Exam_Review_Check78,
__Esterel_Exam_Review_Check79,
__Esterel_Exam_Review_Check80,
__Esterel_Exam_Review_Check81,
__Esterel_Exam_Review_Check82,
__Esterel_Exam_Review_Check83,
__Esterel_Exam_Review_Check84,
__Esterel_Exam_Review_Check85,
__Esterel_Exam_Review_Check86,
__Esterel_Exam_Review_Check87,
__Esterel_Exam_Review_Check88,
__Esterel_Exam_Review_Check89,
__Esterel_Exam_Review_Check90,
__Esterel_Exam_Review_Check91,
__Esterel_Exam_Review_Check92,
__Esterel_Exam_Review_Check93,
__Esterel_Exam_Review_Check94,
__Esterel_Exam_Review_Check95,
__Esterel_Exam_Review_Check96,
__Esterel_Exam_Review_Check97,
__Esterel_Exam_Review_Check98,
__Esterel_Exam_Review_Check99,
__Esterel_Exam_Review_Check100,
__Esterel_Exam_Review_Check101,
__Esterel_Exam_Review_Check102,
__Esterel_Exam_Review_Check103,
__Esterel_Exam_Review_Check104,
__Esterel_Exam_Review_Check105,
__Esterel_Exam_Review_Check106,
__Esterel_Exam_Review_Check107,
__Esterel_Exam_Review_Check108,
__Esterel_Exam_Review_Check109
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
{"Esterel_Exam_Review",0,"/home/student/Documents/RTPL/RTPL/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,1,1,0},{1,76,1,0},{0,0,0,0}},
{"TA",0,"/home/student/Documents/RTPL/RTPL/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,200,1,1},{1,224,1,1},{1,22,2,0}},
{"KEVIN",0,"/home/student/Documents/RTPL/RTPL/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,80,1,2},{1,194,1,2},{1,33,3,0}},
{"STUART",0,"/home/student/Documents/RTPL/RTPL/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,80,1,3},{1,194,1,3},{1,42,3,0}},
{"BOB",0,"/home/student/Documents/RTPL/RTPL/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,80,1,4},{1,194,1,4},{1,51,3,0}},
{"OBSERVER",0,"/home/student/Documents/RTPL/RTPL/Esterel_Exam_Review//src","Esterel_Exam_Review.strl",{1,230,1,5},{1,295,1,5},{1,73,2,0}},
};

struct __SignalEntry __Esterel_Exam_Review_SignalTable [] = {
{"RANDOM1",33,0,0,{1,2,8,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RANDOM2",33,0,0,{1,2,17,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RANDOM3",33,0,0,{1,2,26,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_INREVIEW",34,0,0,{1,3,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_SLEEPING",34,0,0,{1,3,22,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"WANT_REVIEW",34,0,0,{1,4,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW",34,0,0,{1,5,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW",34,0,0,{1,5,26,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_DISMISS_STUD",34,0,0,{1,6,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUDENTS_WAITING",66,3,0,{1,7,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_INSANE",34,0,0,{1,8,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INSANE",34,0,0,{1,8,20,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"RACECONDITION",34,0,0,{1,8,33,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"DEADLOCK",34,0,0,{1,8,48,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_TOOSLOW",34,0,0,{1,8,58,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_STARVATION",34,0,0,{1,8,70,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WAITING1",34,0,0,{1,8,87,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WAITING2",34,0,0,{1,8,102,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WAITING3",34,0,0,{1,8,117,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"num_INREVIEWSTUDS",66,5,0,{1,10,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"PRIO_counter",66,7,0,{1,11,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"cycles_STARVATION1",2,9,0,{1,12,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"cycles_STARVATION2",2,10,0,{1,13,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"cycles_STARVATION3",2,11,0,{1,14,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"WL_position_sig_1",2,12,0,{1,15,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"WL_position_sig_2",2,13,0,{1,16,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"WL_position_sig_3",2,14,0,{1,17,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW1",34,0,0,{1,19,9,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW1",34,0,0,{1,19,27,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW2",34,0,0,{1,19,43,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW2",34,0,0,{1,19,61,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_WANTREVIEW3",34,0,0,{1,19,77,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"STUD_INREVIEW3",34,0,0,{1,19,95,0},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_WAS_SLEEPING",40,0,0,{1,95,9,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T0",48,0,0,{1,101,9,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T2",48,0,0,{1,137,10,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,139,11,2},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_WAS_SLEEPING",40,0,0,{1,95,9,3},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T0",48,0,0,{1,101,9,3},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T2",48,0,0,{1,137,10,3},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,139,11,3},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"TA_WAS_SLEEPING",40,0,0,{1,95,9,4},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T0",48,0,0,{1,101,9,4},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T2",48,0,0,{1,137,10,4},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL},
{"T1",48,0,0,{1,139,11,4},0,(void*) NULL,0,(void*) NULL,0,(void*) NULL}};

struct __InputEntry __Esterel_Exam_Review_InputTable [] = {
{"RANDOM1",94,0,0,-1,0,0,0,Esterel_Exam_Review_IS_RANDOM1,0,{1,2,8,0}},
{"RANDOM2",95,0,0,-1,0,1,0,Esterel_Exam_Review_IS_RANDOM2,0,{1,2,17,0}},
{"RANDOM3",96,0,0,-1,0,2,0,Esterel_Exam_Review_IS_RANDOM3,0,{1,2,26,0}}};

struct __VariableEntry __Esterel_Exam_Review_VariableTable [] = {
{"__Esterel_Exam_Review_V0","V0","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V0,"RANDOM1",0,0,0,{1,2,8,0}},
{"__Esterel_Exam_Review_V1","V1","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V1,"RANDOM2",0,0,0,{1,2,17,0}},
{"__Esterel_Exam_Review_V2","V2","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V2,"RANDOM3",0,0,0,{1,2,26,0}},
{"__Esterel_Exam_Review_V3","V3","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V3,"STUDENTS_WAITING",0,0,0,{1,7,9,0}},
{"__Esterel_Exam_Review_V4","V4","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V4,"STUDENTS_WAITING",0,0,0,{1,7,9,0}},
{"__Esterel_Exam_Review_V5","V5","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V5,"num_INREVIEWSTUDS",0,0,0,{1,10,9,0}},
{"__Esterel_Exam_Review_V6","V6","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V6,"num_INREVIEWSTUDS",0,0,0,{1,10,9,0}},
{"__Esterel_Exam_Review_V7","V7","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V7,"PRIO_counter",0,0,0,{1,11,9,0}},
{"__Esterel_Exam_Review_V8","V8","boolean",-2,2,0,(char*)&__Esterel_Exam_Review_V8,"PRIO_counter",0,0,0,{1,11,9,0}},
{"__Esterel_Exam_Review_V9","V9","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V9,"cycles_STARVATION1",0,0,0,{1,12,9,0}},
{"__Esterel_Exam_Review_V10","V10","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V10,"cycles_STARVATION2",0,0,0,{1,13,9,0}},
{"__Esterel_Exam_Review_V11","V11","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V11,"cycles_STARVATION3",0,0,0,{1,14,9,0}},
{"__Esterel_Exam_Review_V12","V12","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V12,"WL_position_sig_1",0,0,0,{1,15,9,0}},
{"__Esterel_Exam_Review_V13","V13","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V13,"WL_position_sig_2",0,0,0,{1,16,9,0}},
{"__Esterel_Exam_Review_V14","V14","integer",-3,1,0,(char*)&__Esterel_Exam_Review_V14,"WL_position_sig_3",0,0,0,{1,17,9,0}},
{"__Esterel_Exam_Review_V15","V15","integer",-3,10,0,(char*)&__Esterel_Exam_Review_V15,"STUDENTS_WAITING",0,0,0,{1,202,8,1}},
{"__Esterel_Exam_Review_V16","V16","integer",-3,10,0,(char*)&__Esterel_Exam_Review_V16,"WL_position_sig_1",0,0,0,{1,88,8,2}},
{"__Esterel_Exam_Review_V17","V17","integer",-3,10,0,(char*)&__Esterel_Exam_Review_V17,"WL_position_sig_2",0,0,0,{1,88,8,3}},
{"__Esterel_Exam_Review_V18","V18","integer",-3,10,0,(char*)&__Esterel_Exam_Review_V18,"WL_position_sig_3",0,0,0,{1,88,8,4}}
};

struct __HaltEntry __Esterel_Exam_Review_HaltTable [] = {
{{1,76,1,0}},
{{1,28,7,0}},
{{1,38,7,0}},
{{1,47,7,0}},
{{1,60,3,0}},
{{1,68,3,0}},
{{1,221,3,1}},
{{1,156,7,2}},
{{1,177,4,2}},
{{1,156,7,3}},
{{1,177,4,3}},
{{1,156,7,4}},
{{1,177,4,4}},
{{1,293,3,5}}
};


static void __Esterel_Exam_Review__reset_input () {
__Esterel_Exam_Review_V0 = _false;
__Esterel_Exam_Review_V1 = _false;
__Esterel_Exam_Review_V2 = _false;
__Esterel_Exam_Review_V4 = _false;
__Esterel_Exam_Review_V6 = _false;
__Esterel_Exam_Review_V8 = _false;
}


/* MODULE DATA FOR SIMULATION */

int Esterel_Exam_Review();
int Esterel_Exam_Review_reset();

static struct __ModuleEntry __Esterel_Exam_Review_ModuleData = {
"Simulation interface release 5","Esterel_Exam_Review",
6,0,45,3,0,0,30,3,9,0,0,19,0,14,0,0,0,
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

static __SSC_BIT_TYPE __Esterel_Exam_Review_R[25] = {_false,
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

int Esterel_Exam_Review () {
/* AUXILIARY VARIABLES */

static __SSC_BIT_TYPE E[86];

__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AwaitedList;
__ResetModuleEntryBeforeReaction();
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[38]);__Esterel_Exam_Review_A38();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A38\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[49]);__Esterel_Exam_Review_A49();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A49\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[40]);__Esterel_Exam_Review_A40();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A40\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[42]);__Esterel_Exam_Review_A42();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A42\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[43]);__Esterel_Exam_Review_A43();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A43\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[44]);__Esterel_Exam_Review_A44();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A44\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[45]);__Esterel_Exam_Review_A45();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A45\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[46]);__Esterel_Exam_Review_A46();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A46\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[53]);__Esterel_Exam_Review_A53();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A53\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[47]);__Esterel_Exam_Review_A47();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A47\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[64]);__Esterel_Exam_Review_A64();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A64\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[48]);__Esterel_Exam_Review_A48();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A48\n");
#endif
}
if (__Esterel_Exam_Review_R[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[75]);__Esterel_Exam_Review_A75();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A75\n");
#endif
}
E[0] = __Esterel_Exam_Review_R[11]||(__Esterel_Exam_Review_R[17]&&!(__Esterel_Exam_Review_R[11]));
if (E[0]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[51]);__Esterel_Exam_Review_A51();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A51\n");
#endif
}
E[1] = E[0]&&__Esterel_Exam_Review_R[0];
if (E[1]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,3);
}
if (E[1]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[4]);__Esterel_Exam_Review_A4();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A4\n");
#endif
}
E[2] = E[0]&&!(__Esterel_Exam_Review_R[0]);
if (E[2]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,4);
}
if (E[2]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[5]);__Esterel_Exam_Review_A5();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A5\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[6]);__Esterel_Exam_Review_A6();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A6\n");
#endif
}
E[3] = (__Esterel_Exam_Review_R[15]&&!(__Esterel_Exam_Review_R[11]))||__Esterel_Exam_Review_R[11];
E[4] = __Esterel_Exam_Review_R[12]&&!(__Esterel_Exam_Review_R[11]);
E[5] = E[4]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__Esterel_Exam_Review_A1());
E[6] = __Esterel_Exam_Review_R[2]||__Esterel_Exam_Review_R[3];
E[7] = E[5]&&!(E[6]);
if (E[7]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[55]);__Esterel_Exam_Review_A55();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A55\n");
#endif
}
E[8] = E[7]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[86]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 86\n"),
#endif
__Esterel_Exam_Review_A86());
E[9] = E[8]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[87]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 87\n"),
#endif
__Esterel_Exam_Review_A87());
if (E[9]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[56]);__Esterel_Exam_Review_A56();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A56\n");
#endif
}
E[10] = E[8]&&!(E[9]);
E[11] = E[10]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[88]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 88\n"),
#endif
__Esterel_Exam_Review_A88());
E[12] = __Esterel_Exam_Review_R[13]&&!(__Esterel_Exam_Review_R[11]);
E[13] = E[12]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__Esterel_Exam_Review_A2());
E[14] = __Esterel_Exam_Review_R[4]||__Esterel_Exam_Review_R[5];
E[15] = E[13]&&!(E[14]);
if (E[15]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[66]);__Esterel_Exam_Review_A66();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A66\n");
#endif
}
E[16] = __Esterel_Exam_Review_R[14]&&!(__Esterel_Exam_Review_R[11]);
E[17] = E[16]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__Esterel_Exam_Review_A3());
E[18] = __Esterel_Exam_Review_R[6]||__Esterel_Exam_Review_R[7];
E[19] = E[17]&&!(E[18]);
if (E[19]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[77]);__Esterel_Exam_Review_A77();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A77\n");
#endif
}
E[20] = E[11]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[89]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 89\n"),
#endif
__Esterel_Exam_Review_A89());
if (E[20]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[57]);__Esterel_Exam_Review_A57();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A57\n");
#endif
}
E[21] = E[11]&&!(E[20]);
if (E[21]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[58]);__Esterel_Exam_Review_A58();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A58\n");
#endif
}
E[11] = E[10]&&!(E[11]);
E[10] = E[11]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[90]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 90\n"),
#endif
__Esterel_Exam_Review_A90());
if (E[10]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[59]);__Esterel_Exam_Review_A59();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A59\n");
#endif
}
E[11] = E[11]&&!(E[10]);
E[22] = E[11]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[91]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 91\n"),
#endif
__Esterel_Exam_Review_A91());
if (E[22]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[60]);__Esterel_Exam_Review_A60();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A60\n");
#endif
}
E[11] = E[11]&&!(E[22]);
if (E[11]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[61]);__Esterel_Exam_Review_A61();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A61\n");
#endif
}
E[23] = E[9]||E[20]||E[21]||E[10]||E[22]||E[11];
if (E[23]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[62]);__Esterel_Exam_Review_A62();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A62\n");
#endif
}
E[24] = E[23]&&E[2];
E[25] = E[24]||(E[23]&&!(E[2]));
E[26] = __Esterel_Exam_Review_R[18]&&!(__Esterel_Exam_Review_R[11]);
E[27] = E[26]&&__Esterel_Exam_Review_R[8];
E[26] = E[27]||(E[26]&&!(__Esterel_Exam_Review_R[8]));
if (E[26]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[63]);__Esterel_Exam_Review_A63();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A63\n");
#endif
}
E[28] = E[26]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[93]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 93\n"),
#endif
__Esterel_Exam_Review_A93());
E[29] = (E[28]&&__Esterel_Exam_Review_R[8])||(E[26]&&!(E[28]));
E[30] = E[25]||E[29];
if (E[30]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,27);
}
E[31] = E[15]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[94]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 94\n"),
#endif
__Esterel_Exam_Review_A94());
E[32] = E[31]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[95]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 95\n"),
#endif
__Esterel_Exam_Review_A95());
if (E[32]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[67]);__Esterel_Exam_Review_A67();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A67\n");
#endif
}
E[33] = E[31]&&!(E[32]);
E[34] = E[33]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[96]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 96\n"),
#endif
__Esterel_Exam_Review_A96());
E[35] = E[34]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[97]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 97\n"),
#endif
__Esterel_Exam_Review_A97());
if (E[35]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[68]);__Esterel_Exam_Review_A68();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A68\n");
#endif
}
E[36] = E[34]&&!(E[35]);
if (E[36]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[69]);__Esterel_Exam_Review_A69();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A69\n");
#endif
}
E[34] = E[33]&&!(E[34]);
E[33] = E[34]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[98]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 98\n"),
#endif
__Esterel_Exam_Review_A98());
if (E[33]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[70]);__Esterel_Exam_Review_A70();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A70\n");
#endif
}
E[34] = E[34]&&!(E[33]);
E[37] = E[34]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[99]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 99\n"),
#endif
__Esterel_Exam_Review_A99());
if (E[37]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[71]);__Esterel_Exam_Review_A71();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A71\n");
#endif
}
E[34] = E[34]&&!(E[37]);
if (E[34]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[72]);__Esterel_Exam_Review_A72();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A72\n");
#endif
}
E[38] = E[32]||E[35]||E[36]||E[33]||E[37]||E[34];
if (E[38]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[73]);__Esterel_Exam_Review_A73();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A73\n");
#endif
}
E[39] = E[38]&&E[2];
E[40] = E[39]||(E[38]&&!(E[2]));
E[41] = __Esterel_Exam_Review_R[20]&&!(__Esterel_Exam_Review_R[11]);
E[42] = E[41]&&__Esterel_Exam_Review_R[9];
E[41] = E[42]||(E[41]&&!(__Esterel_Exam_Review_R[9]));
if (E[41]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[74]);__Esterel_Exam_Review_A74();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A74\n");
#endif
}
E[43] = E[41]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[101]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 101\n"),
#endif
__Esterel_Exam_Review_A101());
E[44] = (E[43]&&__Esterel_Exam_Review_R[9])||(E[41]&&!(E[43]));
E[45] = E[40]||E[44];
if (E[45]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,29);
}
E[46] = E[19]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[102]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 102\n"),
#endif
__Esterel_Exam_Review_A102());
E[47] = E[46]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[103]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 103\n"),
#endif
__Esterel_Exam_Review_A103());
if (E[47]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[78]);__Esterel_Exam_Review_A78();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A78\n");
#endif
}
E[48] = E[46]&&!(E[47]);
E[49] = E[48]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[104]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 104\n"),
#endif
__Esterel_Exam_Review_A104());
E[50] = E[49]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[105]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 105\n"),
#endif
__Esterel_Exam_Review_A105());
if (E[50]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[79]);__Esterel_Exam_Review_A79();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A79\n");
#endif
}
E[51] = E[49]&&!(E[50]);
if (E[51]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[80]);__Esterel_Exam_Review_A80();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A80\n");
#endif
}
E[49] = E[48]&&!(E[49]);
E[48] = E[49]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[106]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 106\n"),
#endif
__Esterel_Exam_Review_A106());
if (E[48]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[81]);__Esterel_Exam_Review_A81();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A81\n");
#endif
}
E[49] = E[49]&&!(E[48]);
E[52] = E[49]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[107]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 107\n"),
#endif
__Esterel_Exam_Review_A107());
if (E[52]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[82]);__Esterel_Exam_Review_A82();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A82\n");
#endif
}
E[49] = E[49]&&!(E[52]);
if (E[49]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[83]);__Esterel_Exam_Review_A83();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A83\n");
#endif
}
E[53] = E[47]||E[50]||E[51]||E[48]||E[52]||E[49];
if (E[53]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[84]);__Esterel_Exam_Review_A84();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A84\n");
#endif
}
E[54] = E[53]&&E[2];
E[55] = E[54]||(E[53]&&!(E[2]));
E[56] = __Esterel_Exam_Review_R[22]&&!(__Esterel_Exam_Review_R[11]);
E[57] = E[56]&&__Esterel_Exam_Review_R[10];
E[56] = E[57]||(E[56]&&!(__Esterel_Exam_Review_R[10]));
if (E[56]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[85]);__Esterel_Exam_Review_A85();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A85\n");
#endif
}
E[58] = E[56]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[109]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 109\n"),
#endif
__Esterel_Exam_Review_A109());
E[59] = (E[58]&&__Esterel_Exam_Review_R[10])||(E[56]&&!(E[58]));
E[60] = E[55]||E[59];
if (E[60]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,31);
}
E[61] = E[30]||E[45]||E[60];
E[62] = E[3]&&E[61];
if (E[62]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,6);
}
if (E[62]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[7]);__Esterel_Exam_Review_A7();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A7\n");
#endif
}
if (E[1]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[52]);__Esterel_Exam_Review_A52();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A52\n");
#endif
}
E[63] = E[1]||E[2];
E[28] = E[28]&&!(__Esterel_Exam_Review_R[8]);
if (E[28]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,35);
}
E[64] = (__Esterel_Exam_Review_R[19]&&!(__Esterel_Exam_Review_R[11]))||E[28];
if (E[64]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,28);
}
E[4] = E[4]&&!((__CheckVariables(__Esterel_Exam_Review_CheckArray[1]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 1\n"),
#endif
__Esterel_Exam_Review_A1()));
E[4] = __Esterel_Exam_Review_R[11]||(E[5]&&E[6])||(E[7]&&!(E[8]))||E[64]||(__Esterel_Exam_Review_R[12]&&E[4]);
E[8] = E[25]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[92]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 92\n"),
#endif
__Esterel_Exam_Review_A92());
E[25] = E[25]&&!(E[8]);
E[6] = E[8]||E[25];
E[5] = E[29]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[92]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 92\n"),
#endif
__Esterel_Exam_Review_A92());
E[29] = E[29]&&!(E[5]);
E[65] = E[5]||E[29];
E[43] = E[43]&&!(__Esterel_Exam_Review_R[9]);
if (E[43]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,39);
}
E[66] = (__Esterel_Exam_Review_R[21]&&!(__Esterel_Exam_Review_R[11]))||E[43];
if (E[66]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,30);
}
E[12] = E[12]&&!((__CheckVariables(__Esterel_Exam_Review_CheckArray[2]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 2\n"),
#endif
__Esterel_Exam_Review_A2()));
E[12] = __Esterel_Exam_Review_R[11]||(E[13]&&E[14])||(E[15]&&!(E[31]))||E[66]||(__Esterel_Exam_Review_R[13]&&E[12]);
E[31] = E[40]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[100]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 100\n"),
#endif
__Esterel_Exam_Review_A100());
E[40] = E[40]&&!(E[31]);
E[14] = E[31]||E[40];
E[13] = E[44]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[100]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 100\n"),
#endif
__Esterel_Exam_Review_A100());
E[44] = E[44]&&!(E[13]);
E[67] = E[13]||E[44];
E[58] = E[58]&&!(__Esterel_Exam_Review_R[10]);
if (E[58]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,43);
}
E[68] = (__Esterel_Exam_Review_R[23]&&!(__Esterel_Exam_Review_R[11]))||E[58];
if (E[68]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,32);
}
E[16] = E[16]&&!((__CheckVariables(__Esterel_Exam_Review_CheckArray[3]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 3\n"),
#endif
__Esterel_Exam_Review_A3()));
E[16] = __Esterel_Exam_Review_R[11]||(E[17]&&E[18])||(E[19]&&!(E[46]))||E[68]||(__Esterel_Exam_Review_R[14]&&E[16]);
E[46] = E[55]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[108]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 108\n"),
#endif
__Esterel_Exam_Review_A108());
E[55] = E[55]&&!(E[46]);
E[18] = E[46]||E[55];
E[17] = E[59]&&(__CheckVariables(__Esterel_Exam_Review_CheckArray[108]),
#ifdef TRACE_ACTION
fprintf(stderr, "test 108\n"),
#endif
__Esterel_Exam_Review_A108());
E[59] = E[59]&&!(E[17]);
E[69] = E[17]||E[59];
E[61] = E[62]||(E[3]&&!(E[61]));
E[3] = (__Esterel_Exam_Review_R[16]&&!(__Esterel_Exam_Review_R[11]))||__Esterel_Exam_Review_R[11];
E[70] = E[64]||E[66]||E[68];
E[71] = E[3]&&E[70];
if (E[71]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,7);
}
E[70] = E[71]||(E[3]&&!(E[70]));
E[3] = (__Esterel_Exam_Review_R[24]&&!(__Esterel_Exam_Review_R[11]))||__Esterel_Exam_Review_R[11];
E[72] = E[1]&&E[2];
E[73] = E[3]&&E[72];
if (E[73]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,10);
}
E[72] = E[73]||(E[3]&&!(E[72]));
E[3] = E[64]&&E[30];
E[74] = E[72]&&E[3];
E[3] = E[74]||(E[72]&&!(E[3]));
E[72] = E[66]&&E[45];
E[75] = E[3]&&E[72];
E[72] = E[75]||(E[3]&&!(E[72]));
E[3] = E[68]&&E[60];
E[76] = E[72]&&E[3];
E[3] = E[76]||(E[72]&&!(E[3]));
E[72] = E[64]&&E[66];
E[77] = E[3]&&E[72];
E[72] = E[77]||(E[3]&&!(E[72]));
E[3] = E[66]&&E[68];
E[78] = E[72]&&E[3];
E[3] = E[78]||(E[72]&&!(E[3]));
E[72] = E[64]&&E[68];
E[79] = E[3]&&E[72];
E[72] = E[79]||(E[3]&&!(E[72]));
E[3] = E[2]&&E[62];
E[80] = E[72]&&E[3];
if (E[80]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,13);
}
E[3] = E[80]||(E[72]&&!(E[3]));
E[72] = E[3]&&__Esterel_Exam_Review_R[1];
E[81] = E[72]&&E[80];
if (E[81]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,14);
}
E[3] = E[81]||(E[72]&&!(E[80]))||(E[3]&&!(__Esterel_Exam_Review_R[1]));
E[72] = __Esterel_Exam_Review_R[12]||__Esterel_Exam_Review_R[19]||__Esterel_Exam_Review_R[18];
E[82] = __Esterel_Exam_Review_R[13]||__Esterel_Exam_Review_R[21]||__Esterel_Exam_Review_R[20];
E[83] = __Esterel_Exam_Review_R[14]||__Esterel_Exam_Review_R[23]||__Esterel_Exam_Review_R[22];
E[84] = __Esterel_Exam_Review_R[17]||E[72]||E[82]||E[83]||__Esterel_Exam_Review_R[15]||__Esterel_Exam_Review_R[16]||__Esterel_Exam_Review_R[24];
E[84] = (E[63]||E[4]||E[6]||E[65]||E[12]||E[14]||E[67]||E[16]||E[18]||E[69]||E[61]||E[70]||E[3])&&((E[84]&&!(__Esterel_Exam_Review_R[17]))||E[63])&&((E[84]&&!(E[72]))||E[4]||E[6]||E[65])&&((E[84]&&!(E[82]))||E[12]||E[14]||E[67])&&((E[84]&&!(E[83]))||E[16]||E[18]||E[69])&&((E[84]&&!(__Esterel_Exam_Review_R[15]))||E[61])&&((E[84]&&!(__Esterel_Exam_Review_R[16]))||E[70])&&((E[84]&&!(__Esterel_Exam_Review_R[24]))||E[3]);
__Esterel_Exam_Review_R[0] = E[62]&&E[84];
if (E[71]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[8]);__Esterel_Exam_Review_A8();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A8\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[9]);__Esterel_Exam_Review_A9();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A9\n");
#endif
}
E[83] = E[0]||E[1]||E[23]||E[38]||E[53];
if (E[83]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,9);
}
if (E[83]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[10]);__Esterel_Exam_Review_A10();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A10\n");
#endif
}
if (E[83]&&E[84]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[50]);__Esterel_Exam_Review_A50();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A50\n");
#endif
}
if (E[73]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[11]);__Esterel_Exam_Review_A11();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A11\n");
#endif
}
if (E[74]||E[75]||E[76]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,11);
}
if (E[74]||E[75]||E[76]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[12]);__Esterel_Exam_Review_A12();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A12\n");
#endif
}
if (E[77]||E[78]||E[79]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,12);
}
if (E[77]||E[78]||E[79]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[13]);__Esterel_Exam_Review_A13();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A13\n");
#endif
}
if (E[80]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[14]);__Esterel_Exam_Review_A14();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A14\n");
#endif
}
__Esterel_Exam_Review_R[1] = E[80]&&E[84];
if (E[81]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[15]);__Esterel_Exam_Review_A15();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A15\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[16]);__Esterel_Exam_Review_A16();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A16\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[17]);__Esterel_Exam_Review_A17();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A17\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[18]);__Esterel_Exam_Review_A18();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A18\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[19]);__Esterel_Exam_Review_A19();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A19\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[20]);__Esterel_Exam_Review_A20();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A20\n");
#endif
}
if (E[7]||E[15]||E[19]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,20);
}
if (E[7]||E[15]||E[19]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[21]);__Esterel_Exam_Review_A21();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A21\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[22]);__Esterel_Exam_Review_A22();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A22\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[23]);__Esterel_Exam_Review_A23();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A23\n");
#endif
}
if (!(_true)) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[24]);__Esterel_Exam_Review_A24();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A24\n");
#endif
}
E[82] = E[9]||E[26]||E[20]||E[21]||E[10]||E[22]||E[11];
if (E[82]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,24);
}
if (E[82]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[25]);__Esterel_Exam_Review_A25();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A25\n");
#endif
}
if (E[82]&&E[84]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[54]);__Esterel_Exam_Review_A54();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A54\n");
#endif
}
E[72] = E[32]||E[41]||E[35]||E[36]||E[33]||E[37]||E[34];
if (E[72]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,25);
}
if (E[72]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[26]);__Esterel_Exam_Review_A26();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A26\n");
#endif
}
if (E[72]&&E[84]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[65]);__Esterel_Exam_Review_A65();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A65\n");
#endif
}
E[85] = E[47]||E[56]||E[50]||E[51]||E[48]||E[52]||E[49];
if (E[85]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,26);
}
if (E[85]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[27]);__Esterel_Exam_Review_A27();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A27\n");
#endif
}
if (E[85]&&E[84]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[76]);__Esterel_Exam_Review_A76();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A76\n");
#endif
}
if (E[30]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[28]);__Esterel_Exam_Review_A28();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A28\n");
#endif
}
__Esterel_Exam_Review_R[2] = E[30]&&E[84];
if (E[64]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[29]);__Esterel_Exam_Review_A29();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A29\n");
#endif
}
__Esterel_Exam_Review_R[3] = E[64]&&E[84];
if (E[45]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[30]);__Esterel_Exam_Review_A30();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A30\n");
#endif
}
__Esterel_Exam_Review_R[4] = E[45]&&E[84];
if (E[66]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[31]);__Esterel_Exam_Review_A31();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A31\n");
#endif
}
__Esterel_Exam_Review_R[5] = E[66]&&E[84];
if (E[60]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[32]);__Esterel_Exam_Review_A32();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A32\n");
#endif
}
__Esterel_Exam_Review_R[6] = E[60]&&E[84];
if (E[68]) {
__CheckVariables(__Esterel_Exam_Review_CheckArray[33]);__Esterel_Exam_Review_A33();
#ifdef TRACE_ACTION
fprintf(stderr, "__Esterel_Exam_Review_A33\n");
#endif
}
__Esterel_Exam_Review_R[7] = E[68]&&E[84];
__Esterel_Exam_Review_R[8] = (E[24]&&E[6])||(E[27]&&E[65]);
E[27] = E[24]||E[27];
if (E[27]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,33);
}
E[24] = E[8]||E[5];
if (E[24]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,36);
}
__Esterel_Exam_Review_R[9] = (E[39]&&E[14])||(E[42]&&E[67]);
E[42] = E[39]||E[42];
if (E[42]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,37);
}
E[39] = E[31]||E[13];
if (E[39]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,40);
}
__Esterel_Exam_Review_R[10] = (E[54]&&E[18])||(E[57]&&E[69]);
E[57] = E[54]||E[57];
if (E[57]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,41);
}
E[54] = E[46]||E[17];
if (E[54]) {
__AppendToList(__Esterel_Exam_Review_EmittedList,44);
}
E[69] = !(_true);
__Esterel_Exam_Review_R[18] = E[25]||(E[29]&&!(E[28]));
__Esterel_Exam_Review_R[19] = E[8]||E[5];
__Esterel_Exam_Review_R[20] = E[40]||(E[44]&&!(E[43]));
__Esterel_Exam_Review_R[21] = E[31]||E[13];
__Esterel_Exam_Review_R[22] = E[55]||(E[59]&&!(E[58]));
__Esterel_Exam_Review_R[23] = E[46]||E[17];
__Esterel_Exam_Review_R[11] = !(_true);
__Esterel_Exam_Review_R[12] = E[4];
if (__Esterel_Exam_Review_R[12]) { __AppendToList(__Esterel_Exam_Review_HaltList,1); }
__Esterel_Exam_Review_R[13] = E[12];
if (__Esterel_Exam_Review_R[13]) { __AppendToList(__Esterel_Exam_Review_HaltList,2); }
__Esterel_Exam_Review_R[14] = E[16];
if (__Esterel_Exam_Review_R[14]) { __AppendToList(__Esterel_Exam_Review_HaltList,3); }
__Esterel_Exam_Review_R[15] = E[61];
if (__Esterel_Exam_Review_R[15]) { __AppendToList(__Esterel_Exam_Review_HaltList,4); }
__Esterel_Exam_Review_R[16] = E[70];
if (__Esterel_Exam_Review_R[16]) { __AppendToList(__Esterel_Exam_Review_HaltList,5); }
__Esterel_Exam_Review_R[17] = E[63];
if (__Esterel_Exam_Review_R[17]) { __AppendToList(__Esterel_Exam_Review_HaltList,6); }
if (__Esterel_Exam_Review_R[18]) { __AppendToList(__Esterel_Exam_Review_HaltList,7); }
if (__Esterel_Exam_Review_R[19]) { __AppendToList(__Esterel_Exam_Review_HaltList,8); }
if (__Esterel_Exam_Review_R[20]) { __AppendToList(__Esterel_Exam_Review_HaltList,9); }
if (__Esterel_Exam_Review_R[21]) { __AppendToList(__Esterel_Exam_Review_HaltList,10); }
if (__Esterel_Exam_Review_R[22]) { __AppendToList(__Esterel_Exam_Review_HaltList,11); }
if (__Esterel_Exam_Review_R[23]) { __AppendToList(__Esterel_Exam_Review_HaltList,12); }
__Esterel_Exam_Review_R[24] = E[3];
if (__Esterel_Exam_Review_R[24]) { __AppendToList(__Esterel_Exam_Review_HaltList,13); }
if (!E[84]) { __AppendToList(__Esterel_Exam_Review_HaltList,0); }
__ResetModuleEntryAfterReaction();
__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AllAwaitedList;
__Esterel_Exam_Review__reset_input();
return E[84];
}

/* AUTOMATON RESET */

int Esterel_Exam_Review_reset () {
__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AwaitedList;
__ResetModuleEntry();
__Esterel_Exam_Review_ModuleData.awaited_list = __Esterel_Exam_Review_AllAwaitedList;
__Esterel_Exam_Review_ModuleData.state = 0;
__Esterel_Exam_Review_R[0] = _false;
__Esterel_Exam_Review_R[1] = _false;
__Esterel_Exam_Review_R[2] = _false;
__Esterel_Exam_Review_R[3] = _false;
__Esterel_Exam_Review_R[4] = _false;
__Esterel_Exam_Review_R[5] = _false;
__Esterel_Exam_Review_R[6] = _false;
__Esterel_Exam_Review_R[7] = _false;
__Esterel_Exam_Review_R[8] = _false;
__Esterel_Exam_Review_R[9] = _false;
__Esterel_Exam_Review_R[10] = _false;
__Esterel_Exam_Review_R[11] = _true;
__Esterel_Exam_Review_R[12] = _false;
__Esterel_Exam_Review_R[13] = _false;
__Esterel_Exam_Review_R[14] = _false;
__Esterel_Exam_Review_R[15] = _false;
__Esterel_Exam_Review_R[16] = _false;
__Esterel_Exam_Review_R[17] = _false;
__Esterel_Exam_Review_R[18] = _false;
__Esterel_Exam_Review_R[19] = _false;
__Esterel_Exam_Review_R[20] = _false;
__Esterel_Exam_Review_R[21] = _false;
__Esterel_Exam_Review_R[22] = _false;
__Esterel_Exam_Review_R[23] = _false;
__Esterel_Exam_Review_R[24] = _false;
__Esterel_Exam_Review__reset_input();
return 0;
}
char* CompilationType = "Compiled Sorted Equations";

int __NumberOfModules = 1;
struct __ModuleEntry* __ModuleTable[] = {
&__Esterel_Exam_Review_ModuleData
};
