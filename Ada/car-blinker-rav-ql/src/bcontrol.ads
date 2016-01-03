with System;use System;
package Bcontrol is
   --type Command_Type is new String(1..3);
   type Command_Type is (BLE, BLS, BRS, EMS, STR, STP);

   protected type Command_Access is
      procedure Send( Cmd: Command_Type);
      entry Receive(Cmd : out Command_Type);
   private
      Command : Command_Type;
      New_Command : Boolean := False;
   end Command_Access;


   Command : Command_Access;

   task type Blinker_Control_Type is
      --pragma Priority (System.Priority'Last - 1);
   end Blinker_Control_Type;

   task type Stim_Control_Type is
      --pragma Priority (System.Priority'Last - 1);
   end Stim_Control_Type;
   --      entry Blink_Left;
--      entry Blink_Right;
--      entry Blink_Emergency;
--      entry Blink_Stop;
end Bcontrol;
