with Ada.Text_IO;
with Ada.Exceptions;
with Review_Settings;
with busy_wait;
with Ada.Real_Time;
with waiting_room;

use Ada.Text_IO;
use Ada.Exceptions;
use Review_Settings;
use Ada.Real_Time;
use waiting_room;


package body students is
   task body task_stud is
      serial : Natural := 0;
      got_seat : Boolean := false;
      Next_Time : Ada.Real_Time.Time;
   begin
      -- make student task periodic
      Next_Time := Ada.Real_Time.Clock + STUD_PERIOD;

      loop
         -- make student task periodic
         delay until Next_Time;

         Put_Line("S:"&id'img &" waiting..");

         -- Student takes a seat on waiting list if possible
         waiting_list.take_seat(id, got_seat);

         -- if the calling student with id got_seat,
         -- according student instance will get blocked in an entry
         -- until released by the TA
         if got_seat = true then
            case id is

               when 0 => student_handle0.wait;
               when 1 => student_handle1.wait;
               when 2 => student_handle2.wait;
               when others => Put_Line("wrong value in student " & id'img );

            end case;

            serial := serial + 1;
            Put_Line("S:"&id'img &"(#" & serial'img &") in review");
            busy_wait.delay_for(TIME_REVIEW);
         end if;

         Put_Line("S:"&id'img &" leaves");

         -- TODO: make this task periodic
         Next_Time := Next_Time + STUD_PERIOD;
      end loop;
   exception
      when Error: others =>
         Put_Line("S:"&id'img &" terminates due to exception:");
         Put_Line (Exception_Information(Error));
         raise Program_Error;
   end task_stud;
end students;
