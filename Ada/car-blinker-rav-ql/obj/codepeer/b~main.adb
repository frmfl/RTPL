pragma Ada_95;
pragma Source_File_Name (ada_main_for_main, Spec_File_Name => "b~main.ads");
pragma Source_File_Name (ada_main_for_main, Body_File_Name => "b~main.adb");

with System.Restrictions;
with Ada.Exceptions;

package body ada_main_for_main is
   pragma Warnings (Off);

   procedure adafinal is
   begin
      System.Standard_Library.Adafinal;
   end adafinal;

   procedure adainit is
   begin
      Ada.Exceptions.Is_Null_Occurrence'Elab_Subp_Body;
      System.Soft_Links'Elab_Spec;
      Ada.Exceptions.Last_Chance_Handler'Elab_Subp_Body;
      System.Exception_Table'Elab_Body;
      Ada.Io_Exceptions'Elab_Spec;
      Ada.Tags'Elab_Spec;
      Ada.Streams'Elab_Spec;
      Interfaces.C'Elab_Spec;
      Interfaces.C.Strings'Elab_Spec;
      System.Exceptions'Elab_Spec;
      System.Finalization_Root'Elab_Spec;
      Ada.Finalization'Elab_Spec;
      System.Storage_Pools'Elab_Spec;
      System.Finalization_Masters'Elab_Spec;
      System.Storage_Pools.Subpools'Elab_Spec;
      System.Task_Info'Elab_Spec;
      System.Pool_Global'Elab_Spec;
      System.File_Control_Block'Elab_Spec;
      System.File_Io'Elab_Body;
      System.Finalization_Masters'Elab_Body;
      Ada.Tags'Elab_Body;
      System.Soft_Links'Elab_Body;
      System.Os_Lib'Elab_Body;
      System.Secondary_Stack'Elab_Body;
      System.Address_Image'Elab_Subp_Body;
      System.Tasking.Initialization'Elab_Body;
      System.Tasking.Protected_Objects'Elab_Body;
      Ada.Real_Time'Elab_Spec;
      Ada.Real_Time'Elab_Body;
      Ada.Text_Io'Elab_Spec;
      Ada.Text_Io'Elab_Body;
      System.Tasking.Protected_Objects.Entries'Elab_Spec;
      System.Tasking.Queuing'Elab_Body;
      System.Tasking.Stages'Elab_Body;
      Bcontrol'Elab_Spec;
      Blinker'Elab_Spec;
      Control'Elab_Spec;
      Control'Elab_Body;
      Blinker'Elab_Body;
      Bcontrol'Elab_Body;
      Main'Elab_Subp_Body;
   end adainit;

   procedure Ada_Main_Program;
   pragma Import (Ada, Ada_Main_Program, "_ada_main");

   procedure call_main_subprogram is 
   begin
      Ada_Main_Program;
   end call_main_subprogram;

   function main
     (argc : Integer;
      argv : System.Address;
      envp : System.Address)
      return Integer
   is
   begin
      adainit;
      call_main_subprogram;
      adafinal;
      return (gnat_exit_status);
   end;

--  BEGIN Object file/option list
   --   -L/mate/uwa/home/lutz/projects/demo/car-blinker-rav-ql/obj/codepeer/
   --   -L/mate/uwa/home/lutz/projects/demo/car-blinker-rav-ql/obj/codepeer/
   --   -L/mate/uwa/home/lutz/projects/demo/common/obj/codepeer/
   --   -L/opt/codepeer/libexec/codepeer/lib/gcc/i686-pc-linux-gnu/4.7.4/adalib/
   --   -static
   --   -lgnarl
   --   -lgnat
   --   -lpthread
--  END Object file/option list   

end ada_main_for_main;
