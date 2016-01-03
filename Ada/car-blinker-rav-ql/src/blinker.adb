with Control;
with Ada.Real_Time;use Ada.Real_Time;
package body Blinker is

   protected body Cmd_Type_Access is
      procedure Send( Cmd : Command_To_Type ) is --binary semaphore
      begin
         Command_Is_New := False;
         if Command_To.Cmd /= Cmd.Cmd then
            Command_To := Cmd;
            Command_Is_New := True;
         end if;
      end Send;

      entry Receive( Cmd : out Command_To_Type) when Command_Is_New is
      begin
         Cmd := Command_To;
      end Receive;
   end Cmd_Type_Access;

   task body Blinker_Type is
      Next_Time : Time := Clock + Milliseconds(250);
      Blinker_Stopped: Boolean := False;
      On : Boolean := False;
      Command : Command_To_Type;
   begin
      loop
         Protected_Command.Receive(Command);
         --if Command.Receiver = Id then
            case Command.Cmd is
            --when QUIT =>
            --   Control.Put_Line("Quit");
            --   exit;
            when START =>
               Blinker_Stopped := False;
               On := not On;
               if On then
                  Control.Put_Line("B"& Id_Type'Image(Command.Receiver) & "S");
               else
                  Control.Put_Line("B" & Id_Type'Image(Command.Receiver) & "E");
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
         --end if;
         Next_Time := Next_Time + Milliseconds(250);
         delay until Next_Time;

      end loop;

   end Blinker_Type;
end Blinker;
