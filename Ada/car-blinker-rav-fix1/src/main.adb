pragma Profile(Ravenscar);
with Bcontrol;use Bcontrol;
with Control; use Control;
--with Gio;
--with Reg_Het;
with System; use System;


with Ada.Real_Time;use Ada.Real_Time;
procedure Main is
   pragma Priority(Priority'Last);

   Stop : Boolean := False;
   S: String(1..5) := (others => ASCII.NUL);
   --CMD : BControl.Command_Type := (1 => 'b', 2 => 'l', 3 => 's');
   CMD : BControl.Command_Type;
begin
--   Init;
--   Gio.Gio_Set_Direction(Reg_Het.hetPort1'Access, 16#FFFFFFFF#);

   loop
      Control.Put_Line("Before Get_Line");
      S := Control.Get_Line;
      Control.Put_Line("Got Data");
      Control.Put_Line(S);
      --CMD := Bcontrol.Command_Type(S(1..3));
      CMD := BControl.Command_Type'Value(S(1..3));

      Bcontrol.Command := CMD;
   end loop;


   --     Blinker_Control.Blink_Stop;
end;
