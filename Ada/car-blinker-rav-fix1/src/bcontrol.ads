with System;use System;
package Bcontrol is
   --type Command_Type is new String(1..3);
   type Command_Type is (BLE, BLS, BRS, EMS, STR, STP);
   type Command_Ptr_Type is access all Command_Type;

   Command : aliased Command_Type := BLE;
   --Command : aliased Command_Type := (1 => 'b', 2 => 'l', 3 => 'e');
   Command_Ptr : constant Command_Ptr_Type := Command'Access;

   task type Blinker_Control_Type(Cmd: access Command_Type) is
      pragma Priority (System.Priority'Last - 1);
   end Blinker_Control_Type;

   task type Stim_Control_Type(Cmd: access Command_Type) is
      pragma Priority (System.Priority'Last - 1);
   end Stim_Control_Type;
   --      entry Blink_Left;
--      entry Blink_Right;
--      entry Blink_Emergency;
--      entry Blink_Stop;
end Bcontrol;
