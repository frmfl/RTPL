with System;use System;
package Blinker is
--   type Cmd_Type is (START, STOP, QUIT);
   type Cmd_Type is (STOP, START);
   type Id_Type is ( R, L, E);
   type Command_To_Type is record
      Cmd : Cmd_Type;
      Receiver : Id_Type;
   end record;
   Id : Id_Type;
--   type Cmd_Ptr_Type is access all Cmd_Type;
--   Cmd_Ptr : constant Cmd_Ptr_Type := Command'Access;
   protected type Cmd_Type_Access is
      procedure Send( Cmd : Command_To_Type );
      entry Receive( Cmd : out COmmand_To_Type);
   private
      Command_To : Command_To_Type;
      Command_Is_New : Boolean := False;
   end Cmd_Type_Access;

   task type Blinker_Type is
      --pragma Priority (System.Priority'Last);
   end Blinker_Type;

   Protected_Command : Cmd_Type_Access;
end Blinker;
