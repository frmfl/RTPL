with Blinker;use Blinker;
with Text_IO;
with Ada.Real_Time;use Ada.Real_Time;
with Control;
package body Bcontrol is


   Command_Right_Blinker : aliased Cmd_Type := STOP;
   Command_Left_Blinker : aliased Cmd_Type := STOP;
   Command_Warn_Blinker : aliased Cmd_Type := STOP;
   Left_Blinker : Blinker.Blinker_Type(L,Command_Left_Blinker'Access );
   Right_Blinker: Blinker.Blinker_Type(R, Command_Right_Blinker'Access);
   Warn_Blinker: Blinker.Blinker_Type(E, Command_Warn_Blinker'Access);

   Blinker_Control : Blinker_Control_Type(Command_Ptr);
   Stim_Control : Stim_Control_Type(Command_Ptr);

   task body Blinker_Control_Type is
      Blinker_Left_Started : Boolean := False;
      Blinker_Right_Started : Boolean := False;
      Blinker_Warn_Started : Boolean := False;
      Next_Time : Time := Clock + Milliseconds(100);
   begin
      loop
         if Cmd.all = BLS then
            if not Blinker_Left_Started then
               Command_Left_Blinker := START;
               --Text_Io.Put_Line("execute Command " & String(Cmd.All));
               Blinker_Left_Started := True;
            end if;

         elsif Cmd.all = BLE then
            if Blinker_Left_Started then
               Command_Left_Blinker := STOP;
               --Text_Io.Put_Line("execute Command " & String(Cmd.All));
               Blinker_Left_Started := False;
            end if;
            if Blinker_Right_Started then
               Command_Right_Blinker := STOP;
               --Text_Io.Put_Line("execute Command " & String(Cmd.All));
               Blinker_Right_Started := False;
            end if;
            if Blinker_Warn_Started then
               Command_Warn_Blinker := STOP;
               --Text_Io.Put_Line("execute Command " & String(Cmd.All));
               Blinker_Warn_Started := False;
            end if;
         elsif Cmd.all = BRS then
            if not Blinker_Right_Started then
               Command_Right_Blinker := START;
               --Text_Io.Put_Line("execute Command " & String(Cmd.All));
               Blinker_Right_Started := True;
            end if;
         elsif Cmd.all = EMS then
            if not Blinker_Warn_Started then
               Command_Warn_Blinker := START;
               --Text_Io.Put_Line("execute Command " & String(Cmd.All));
               Blinker_Warn_Started := True;
            end if;
         elsif Cmd.all = STP or Cmd.all = STR then
            null;
         else
            Control.Put_Line("invalid Command");
         end if;
         delay until Next_Time;
         Next_Time := Next_Time + Milliseconds(100);

      end loop;

   end Blinker_Control_Type;

   task body Stim_Control_Type is
      Next_Time : Time := Clock;
      c :Command_Type := stp;

      function Process_Command(cmd_par : BControl.Command_Type) return Boolean is
      begin
         if cmd.all = STP then
            c := cmd.all;
         end if;
         if c = STP then
            BControl.Command := BLE;
            return TRUE;
         end if;

         --   Blinker_Control.Blink_Left;
         Next_Time := Next_Time + Seconds(3);
         BControl.Command := cmd_par;
         control.Put_Line("Current command = " & cmd.all'Img);
         delay until Next_Time;
         return FALSE;
      end Process_Command;

   begin
      loop
         if cmd.all = STR then
           c := cmd.all;
         end if;
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


