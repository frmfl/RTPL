with Control;
with Ada.Real_Time;use Ada.Real_Time;
package body Blinker is
   task body Blinker_Type is
      Id : constant Blinker_Enum := c;
      Next_Time : Time := Clock + Milliseconds(250);
      Blinker_Stopped: Boolean := False;
      On : Boolean := False;
   begin
      loop
         case Cmd.all is
         when QUIT =>
            Control.Put_Line("Quit");
            exit;
         when START =>
            Blinker_Stopped := False;
            On := not On;
            if On then
               Control.Put_Line("B" & Blinker_Enum'Image(Id) & "S");
            else
               Control.Put_Line("B" & Blinker_Enum'Image(Id) & "E");
            end if;
            case Id is
               when R => Control.Toggle_LedR;
               when L => Control.Toggle_LedL;
               when E => Control.Toggle_LedL;
                  Control.Toggle_LedR;
               when others => null;
            end case;


         when STOP =>
            if not Blinker_Stopped then
               Control.Put_Line("ABS");
               Blinker_Stopped := True;
               Control.Off_LedL;
               Control.Off_LedR;

            end if;

         end case;
         Next_Time := Next_Time + Milliseconds(250);
         delay until Next_Time;

      end loop;

   end Blinker_Type;
end Blinker;
