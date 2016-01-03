pragma Ada_95;
pragma Source_File_Name (ada_main, Spec_File_Name => "b__main.ads");
pragma Source_File_Name (ada_main, Body_File_Name => "b__main.adb");
pragma Suppress (Overflow_Check);

package body ada_main is
   pragma Warnings (Off);

   E082 : Short_Integer; pragma Import (Ada, E082, "ada__tags_E");
   E097 : Short_Integer; pragma Import (Ada, E097, "system__bb__timing_events_E");
   E041 : Short_Integer; pragma Import (Ada, E041, "system__soft_links_E");
   E119 : Short_Integer; pragma Import (Ada, E119, "ada__text_io_E");
   E039 : Short_Integer; pragma Import (Ada, E039, "system__exception_table_E");
   E115 : Short_Integer; pragma Import (Ada, E115, "system__tasking__restricted__stages_E");
   E006 : Short_Integer; pragma Import (Ada, E006, "ada__real_time_E");
   E103 : Short_Integer; pragma Import (Ada, E103, "bcontrol_E");
   E107 : Short_Integer; pragma Import (Ada, E107, "blinker_E");
   E109 : Short_Integer; pragma Import (Ada, E109, "control_E");
   E111 : Short_Integer; pragma Import (Ada, E111, "gio_E");
   E113 : Short_Integer; pragma Import (Ada, E113, "reg_het_E");

   Local_Priority_Specific_Dispatching : constant String := "";
   Local_Interrupt_States : constant String := "";

   Is_Elaborated : Boolean := False;

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

      System.Bb.Timing_Events'Elab_Spec;
      E097 := E097 + 1;
      System.Soft_Links'Elab_Spec;
      E041 := E041 + 1;
      Ada.Text_Io'Elab_Body;
      E119 := E119 + 1;
      System.Exception_Table'Elab_Body;
      E039 := E039 + 1;
      Ada.Tags'Elab_Body;
      E082 := E082 + 1;
      System.Tasking.Restricted.Stages'Elab_Body;
      E115 := E115 + 1;
      Ada.Real_Time'Elab_Spec;
      Ada.Real_Time'Elab_Body;
      E006 := E006 + 1;
      Blinker'Elab_Body;
      E107 := E107 + 1;
      E111 := E111 + 1;
      Reg_Het'Elab_Spec;
      E113 := E113 + 1;
      E109 := E109 + 1;
      Bcontrol'Elab_Body;
      E103 := E103 + 1;
   end adainit;

   procedure Ada_Main_Program;
   pragma Import (Ada, Ada_Main_Program, "_ada_main");

   procedure main is
      procedure Initialize (Addr : System.Address);
      pragma Import (C, Initialize, "__gnat_initialize");

      procedure Finalize;
      pragma Import (C, Finalize, "__gnat_finalize");
      SEH : aliased array (1 .. 2) of Integer;

      Ensure_Reference : aliased System.Address := Ada_Main_Program_Name'Address;
      pragma Volatile (Ensure_Reference);

   begin
      Initialize (SEH'Address);
      adainit;
      Ada_Main_Program;
      adafinal;
      Finalize;
   end;

--  BEGIN Object file/option list
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\car-blinker-rav\obj\blinker.o
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\common\obj\reg_gio.o
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\common\obj\gio.o
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\common\obj\reg_het.o
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\common\obj\control.o
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\car-blinker-rav\obj\bcontrol.o
   --   C:\Users\hp\Mediencenter\GnatProjects\arm-eabi\car-blinker-rav\obj\main.o
   --   -LC:\Users\hp\Mediencenter\GnatProjects\arm-eabi\car-blinker-rav\obj\
   --   -LC:\Users\hp\Mediencenter\GnatProjects\arm-eabi\car-blinker-rav\obj\
   --   -LC:\Users\hp\Mediencenter\GnatProjects\arm-eabi\common\obj\
   --   -LC:\GNATPRO\7.3.0w-20140517\lib\gnat\arm-eabi\ravenscar-full-tms570\adalib\
--  END Object file/option list   

end ada_main;
