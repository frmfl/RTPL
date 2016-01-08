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
      has_seat : Boolean := false;
        --id : constant Students_Range := 0;
        Next_Time : Ada.Real_Time.Time;
      -- ...
    begin
      -- ...

      -- TODO: make this task periodic
         Next_Time := Ada.Real_Time.Clock + STUD_PERIOD;
      -- TODO

        loop
         -- TODO: make this task periodic
         delay until Next_Time;
         -- TODO
            -- ...

         --door_protected.knock; -- shows that student is waiting


            Put_Line("S:"&id'img &" waiting..");
            -- TODO: student takes a seat here and waits for TA to call him
            --   waiting_room_protected.wait(id); -- student takes a seat


            waiting_list.take_seat(id, has_seat);

         if has_seat = true then
            case id is

               when 0 => waiting_room1.wait(id);
               when 1 => waiting_room2.wait(id);

               when 2 => waiting_room3.wait(id);

               when others => Put_Line("wrong value in student " & id'img );

            end case;


            -- TODO

            serial := serial + 1;
            Put_Line("S:"&id'img &"(#" & serial'img &") in review");
            busy_wait.delay_for(TIME_REVIEW);
         end if;

            Put_Line("S:"&id'img &" leaves");

         -- student is walking out of the room -- for synchronization needed
         busy_wait.delay_for(TIME_WALK);


        -- TODO: make this task periodic
         Next_Time := Next_Time + STUD_PERIOD;
         -- TODO
        end loop;
    exception
        when Error: others =>
            Put_Line("S:"&id'img &" terminates due to exception:");
            Put_Line (Exception_Information(Error));
            raise Program_Error;
    end task_stud;
end students;
