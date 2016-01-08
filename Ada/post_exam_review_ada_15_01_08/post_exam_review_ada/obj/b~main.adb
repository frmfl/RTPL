pragma Ada_95;
pragma Source_File_Name (ada_main, Spec_File_Name => "b~main.ads");
pragma Source_File_Name (ada_main, Body_File_Name => "b~main.adb");
with Ada.Exceptions;

package body ada_main is
   pragma Warnings (Off);

   E121 : Short_Integer; pragma Import (Ada, E121, "system__os_lib_E");
   E016 : Short_Integer; pragma Import (Ada, E016, "system__soft_links_E");
   E026 : Short_Integer; pragma Import (Ada, E026, "system__exception_table_E");
   E111 : Short_Integer; pragma Import (Ada, E111, "ada__io_exceptions_E");
   E096 : Short_Integer; pragma Import (Ada, E096, "ada__tags_E");
   E110 : Short_Integer; pragma Import (Ada, E110, "ada__streams_E");
   E052 : Short_Integer; pragma Import (Ada, E052, "interfaces__c_E");
   E028 : Short_Integer; pragma Import (Ada, E028, "system__exceptions_E");
   E119 : Short_Integer; pragma Import (Ada, E119, "system__finalization_root_E");
   E117 : Short_Integer; pragma Import (Ada, E117, "ada__finalization_E");
   E130 : Short_Integer; pragma Import (Ada, E130, "system__storage_pools_E");
   E126 : Short_Integer; pragma Import (Ada, E126, "system__finalization_masters_E");
   E136 : Short_Integer; pragma Import (Ada, E136, "system__storage_pools__subpools_E");
   E070 : Short_Integer; pragma Import (Ada, E070, "system__task_info_E");
   E162 : Short_Integer; pragma Import (Ada, E162, "system__assertions_E");
   E132 : Short_Integer; pragma Import (Ada, E132, "system__pool_global_E");
   E124 : Short_Integer; pragma Import (Ada, E124, "system__file_control_block_E");
   E115 : Short_Integer; pragma Import (Ada, E115, "system__file_io_E");
   E020 : Short_Integer; pragma Import (Ada, E020, "system__secondary_stack_E");
   E006 : Short_Integer; pragma Import (Ada, E006, "ada__real_time_E");
   E108 : Short_Integer; pragma Import (Ada, E108, "ada__text_io_E");
   E145 : Short_Integer; pragma Import (Ada, E145, "system__tasking__protected_objects_E");
   E153 : Short_Integer; pragma Import (Ada, E153, "system__tasking__restricted__stages_E");
   E140 : Short_Integer; pragma Import (Ada, E140, "busy_wait_E");
   E141 : Short_Integer; pragma Import (Ada, E141, "review_settings_E");
   E092 : Short_Integer; pragma Import (Ada, E092, "students_E");
   E158 : Short_Integer; pragma Import (Ada, E158, "ta_E");
   E156 : Short_Integer; pragma Import (Ada, E156, "waiting_room_E");

   Local_Priority_Specific_Dispatching : constant String := "";
   Local_Interrupt_States : constant String := "";

   Is_Elaborated : Boolean := False;

   procedure finalize_library is
   begin
      E156 := E156 - 1;
      declare
         procedure F1;
         pragma Import (Ada, F1, "waiting_room__finalize_spec");
      begin
         F1;
      end;
      E108 := E108 - 1;
      declare
         procedure F2;
         pragma Import (Ada, F2, "ada__text_io__finalize_spec");
      begin
         F2;
      end;
      E126 := E126 - 1;
      E136 := E136 - 1;
      declare
         procedure F3;
         pragma Import (Ada, F3, "system__file_io__finalize_body");
      begin
         E115 := E115 - 1;
         F3;
      end;
      declare
         procedure F4;
         pragma Import (Ada, F4, "system__file_control_block__finalize_spec");
      begin
         E124 := E124 - 1;
         F4;
      end;
      E132 := E132 - 1;
      declare
         procedure F5;
         pragma Import (Ada, F5, "system__pool_global__finalize_spec");
      begin
         F5;
      end;
      declare
         procedure F6;
         pragma Import (Ada, F6, "system__storage_pools__subpools__finalize_spec");
      begin
         F6;
      end;
      declare
         procedure F7;
         pragma Import (Ada, F7, "system__finalization_masters__finalize_spec");
      begin
         F7;
      end;
      declare
         procedure Reraise_Library_Exception_If_Any;
            pragma Import (Ada, Reraise_Library_Exception_If_Any, "__gnat_reraise_library_exception_if_any");
      begin
         Reraise_Library_Exception_If_Any;
      end;
   end finalize_library;

   procedure adafinal is
      procedure s_stalib_adafinal;
      pragma Import (C, s_stalib_adafinal, "system__standard_library__adafinal");
   begin
      if not Is_Elaborated then
         return;
      end if;
      Is_Elaborated := False;
      s_stalib_adafinal;
   end adafinal;

   type No_Param_Proc is access procedure;

   procedure adainit is
      Main_Priority : Integer;
      pragma Import (C, Main_Priority, "__gl_main_priority");
      Time_Slice_Value : Integer;
      pragma Import (C, Time_Slice_Value, "__gl_time_slice_val");
      WC_Encoding : Character;
      pragma Import (C, WC_Encoding, "__gl_wc_encoding");
      Locking_Policy : Character;
      pragma Import (C, Locking_Policy, "__gl_locking_policy");
      Queuing_Policy : Character;
      pragma Import (C, Queuing_Policy, "__gl_queuing_policy");
      Task_Dispatching_Policy : Character;
      pragma Import (C, Task_Dispatching_Policy, "__gl_task_dispatching_policy");
      Priority_Specific_Dispatching : System.Address;
      pragma Import (C, Priority_Specific_Dispatching, "__gl_priority_specific_dispatching");
      Num_Specific_Dispatching : Integer;
      pragma Import (C, Num_Specific_Dispatching, "__gl_num_specific_dispatching");
      Main_CPU : Integer;
      pragma Import (C, Main_CPU, "__gl_main_cpu");
      Interrupt_States : System.Address;
      pragma Import (C, Interrupt_States, "__gl_interrupt_states");
      Num_Interrupt_States : Integer;
      pragma Import (C, Num_Interrupt_States, "__gl_num_interrupt_states");
      Unreserve_All_Interrupts : Integer;
      pragma Import (C, Unreserve_All_Interrupts, "__gl_unreserve_all_interrupts");
      Detect_Blocking : Integer;
      pragma Import (C, Detect_Blocking, "__gl_detect_blocking");
      Default_Stack_Size : Integer;
      pragma Import (C, Default_Stack_Size, "__gl_default_stack_size");
      Leap_Seconds_Support : Integer;
      pragma Import (C, Leap_Seconds_Support, "__gl_leap_seconds_support");

      procedure Install_Handler;
      pragma Import (C, Install_Handler, "__gnat_install_handler");

      Handler_Installed : Integer;
      pragma Import (C, Handler_Installed, "__gnat_handler_installed");

      Finalize_Library_Objects : No_Param_Proc;
      pragma Import (C, Finalize_Library_Objects, "__gnat_finalize_library_objects");
   begin
      if Is_Elaborated then
         return;
      end if;
      Is_Elaborated := True;
      Main_Priority := 0;
      Time_Slice_Value := 0;
      WC_Encoding := 'b';
      Locking_Policy := 'C';
      Queuing_Policy := ' ';
      Task_Dispatching_Policy := 'F';
      Priority_Specific_Dispatching :=
        Local_Priority_Specific_Dispatching'Address;
      Num_Specific_Dispatching := 0;
      Main_CPU := -1;
      Interrupt_States := Local_Interrupt_States'Address;
      Num_Interrupt_States := 0;
      Unreserve_All_Interrupts := 0;
      Detect_Blocking := 1;
      Default_Stack_Size := -1;
      Leap_Seconds_Support := 0;

      if Handler_Installed = 0 then
         Install_Handler;
      end if;

      Finalize_Library_Objects := finalize_library'access;

      System.Soft_Links'Elab_Spec;
      System.Exception_Table'Elab_Body;
      E026 := E026 + 1;
      Ada.Io_Exceptions'Elab_Spec;
      E111 := E111 + 1;
      Ada.Tags'Elab_Spec;
      Ada.Streams'Elab_Spec;
      E110 := E110 + 1;
      Interfaces.C'Elab_Spec;
      System.Exceptions'Elab_Spec;
      E028 := E028 + 1;
      System.Finalization_Root'Elab_Spec;
      E119 := E119 + 1;
      Ada.Finalization'Elab_Spec;
      E117 := E117 + 1;
      System.Storage_Pools'Elab_Spec;
      E130 := E130 + 1;
      System.Finalization_Masters'Elab_Spec;
      System.Storage_Pools.Subpools'Elab_Spec;
      System.Task_Info'Elab_Spec;
      E070 := E070 + 1;
      System.Assertions'Elab_Spec;
      E162 := E162 + 1;
      System.Pool_Global'Elab_Spec;
      E132 := E132 + 1;
      System.File_Control_Block'Elab_Spec;
      E124 := E124 + 1;
      System.File_Io'Elab_Body;
      E115 := E115 + 1;
      E136 := E136 + 1;
      System.Finalization_Masters'Elab_Body;
      E126 := E126 + 1;
      E052 := E052 + 1;
      Ada.Tags'Elab_Body;
      E096 := E096 + 1;
      System.Soft_Links'Elab_Body;
      E016 := E016 + 1;
      System.Os_Lib'Elab_Body;
      E121 := E121 + 1;
      System.Secondary_Stack'Elab_Body;
      E020 := E020 + 1;
      Ada.Real_Time'Elab_Spec;
      Ada.Real_Time'Elab_Body;
      E006 := E006 + 1;
      Ada.Text_Io'Elab_Spec;
      Ada.Text_Io'Elab_Body;
      E108 := E108 + 1;
      System.Tasking.Protected_Objects'Elab_Body;
      E145 := E145 + 1;
      System.Tasking.Restricted.Stages'Elab_Body;
      E153 := E153 + 1;
      E140 := E140 + 1;
      Review_Settings'Elab_Spec;
      E141 := E141 + 1;
      students'elab_spec;
      TA'ELAB_SPEC;
      waiting_room'elab_spec;
      E156 := E156 + 1;
      TA'ELAB_BODY;
      E158 := E158 + 1;
      students'elab_body;
      E092 := E092 + 1;
   end adainit;

   procedure Ada_Main_Program;
   pragma Import (Ada, Ada_Main_Program, "_ada_main");

   function main
     (argc : Integer;
      argv : System.Address;
      envp : System.Address)
      return Integer
   is
      procedure Initialize (Addr : System.Address);
      pragma Import (C, Initialize, "__gnat_initialize");

      procedure Finalize;
      pragma Import (C, Finalize, "__gnat_finalize");
      SEH : aliased array (1 .. 2) of Integer;

      Ensure_Reference : aliased System.Address := Ada_Main_Program_Name'Address;
      pragma Volatile (Ensure_Reference);

   begin
      gnat_argc := argc;
      gnat_argv := argv;
      gnat_envp := envp;

      Initialize (SEH'Address);
      adainit;
      Ada_Main_Program;
      adafinal;
      Finalize;
      return (gnat_exit_status);
   end;

--  BEGIN Object file/option list
   --   /home/student/workspace/post_exam_review_ada/obj/busy_wait.o
   --   /home/student/workspace/post_exam_review_ada/obj/review_settings.o
   --   /home/student/workspace/post_exam_review_ada/obj/main.o
   --   /home/student/workspace/post_exam_review_ada/obj/waiting_room.o
   --   /home/student/workspace/post_exam_review_ada/obj/ta.o
   --   /home/student/workspace/post_exam_review_ada/obj/students.o
   --   -L/home/student/workspace/post_exam_review_ada/obj/
   --   -L/home/student/workspace/post_exam_review_ada/obj/
   --   -L/usr/gnat/lib/gcc/i686-pc-linux-gnu/4.7.4/adalib/
   --   -static
   --   -lgnarl
   --   -lgnat
   --   -lpthread
--  END Object file/option list   

end ada_main;
