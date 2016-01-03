with System;use System;
package Blinker is
   type Cmd_Type is (START, STOP, QUIT);
   --   type Cmd_Ptr_Type is access all Cmd_Type;
   --   Cmd_Ptr : constant Cmd_Ptr_Type := Command'Access;
   type Blinker_Enum is (L, R, E);
   task type Blinker_Type(c: Blinker_Enum; Cmd : access Cmd_Type) is
      pragma Priority (System.Priority'Last);
   end Blinker_Type;
end Blinker;
