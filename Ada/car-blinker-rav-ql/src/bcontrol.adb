with Blinker;use Blinker;
with Text_IO;
with Ada.Real_Time;use Ada.Real_Time;
with Control;
package body Bcontrol is

   protected body Command_Access is
      procedure Send( Cmd: Command_Type) is
      begin
         New_Command := False;
         if Command /= Cmd then
            New_Command := True;
            Command := Cmd;
         end if;

      end Send;
      entry Receive(Cmd : out Command_Type) when New_Command is
      begin
         Cmd := Command;
      end;
   end Command_Access;


   Left_Blinker : Blinker.Blinker_Type;
   --Right_Blinker: Blinker.Blinker_Type(Blinker.R);
   --Warn_Blinker: Blinker.Blinker_Type(Blinker.E);

   Blinker_Control : Blinker_Control_Type;
   Stim_Control : Stim_Control_Type;

   task body Blinker_Control_Type is
      Blinker_Left_Started : Boolean := False;
      Blinker_Right_Started : Boolean := False;
      Blinker_Warn_Started : Boolean := False;
      Next_Time : Time := Clock + Milliseconds(100);
      Cmd : Bcontrol.Command_Type := BLE;
      Cmd_To : Blinker.Command_To_Type;
   begin
      loop
         Command.Receive(Cmd => Cmd);
         case Cmd is
            when BLS =>
               Cmd_To.Cmd := START;
               if not Blinker_Left_Started then
                  Cmd_To.Receiver := Blinker.L;
                  Protected_Command.Send(Cmd_To);
                  --Text_Io.Put_Line("execute Command " & String(Cmd.All));
                  Blinker_Left_Started := True;
               end if;
            when BLE =>
               Cmd_To.Cmd := Stop;
               if Blinker_Left_Started then
                  Cmd_To.Receiver := Blinker.L;
                  Protected_Command.Send(Cmd_To);
                  --Text_Io.Put_Line("execute Command " & String(Cmd.All));
                  Blinker_Left_Started := False;
               end if;
               if Blinker_Right_Started then
                  Cmd_To.Receiver := Blinker.R;
                  Protected_Command.Send(Cmd_To);
                  Blinker_Right_Started := False;
               end if;
               if Blinker_Warn_Started then
                  Cmd_To.Receiver := Blinker.E;
                  Protected_Command.Send(Cmd_To);
                  --Text_Io.Put_Line("execute Command " & String(Cmd.All));
                  Blinker_Warn_Started := False;
               end if;
            when BRS =>
               Cmd_To.Cmd := START;
               if not Blinker_Right_Started then
                  Cmd_To.Receiver := Blinker.R;
                  Protected_Command.Send(Cmd_To);
                  --Text_Io.Put_Line("execute Command " & String(Cmd.All));
                  Blinker_Right_Started := True;
               end if;
            when EMS =>
              Cmd_To.Cmd := START;
              if not Blinker_Warn_Started then
                  Cmd_To.Receiver := Blinker.E;
                  Protected_Command.Send(Cmd_To);
                  --Text_Io.Put_Line("execute Command " & String(Cmd.All));
                  Blinker_Warn_Started := True;
               end if;
            when others => null;
         end case;
         delay until Next_Time;
         Next_Time := Next_Time + Milliseconds(100);

      end loop;

   end Blinker_Control_Type;

   task body Stim_Control_Type is
      Next_Time : Time := Clock;
      c :Command_Type := stp;

      function Process_Command(cmd_par : BControl.Command_Type) return Boolean is
      begin
         Command.Receive(c);
         if c = STP then
            Command.Send(BLE);
            return TRUE;
         end if;

         --   Blinker_Control.Blink_Left;
         Next_Time := Next_Time + Seconds(3);
         Command.Send( cmd_par );
         delay until Next_Time;
         return FALSE;
      end Process_Command;

   begin
      loop
         Command.Receive(c);
         if c = STR then
            loop
               exit when Process_Command(BLS);
               exit when Process_Command(BLE);
               exit when Process_Command(BRS);
               exit when Process_Command(BLE);
               exit when Process_Command(EMS);
               exit when Process_Command(BLE);
            end loop;
         end if;


         Next_Time := Clock + Seconds(1);
         delay until Next_Time;
      end loop;
   end Stim_Control_Type;
end Bcontrol;


