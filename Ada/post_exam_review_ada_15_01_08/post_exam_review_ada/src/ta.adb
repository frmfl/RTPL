with Ada.Text_IO;
with Ada.Assertions;
with Ada.Exceptions;
with Review_Settings;
with busy_wait;
with waiting_room;
with Ada.Real_Time;

use Ada.Text_IO;
use Ada.Assertions;
use Ada.Exceptions;
use Review_Settings;
use waiting_room;
use Ada.Real_Time;

package body TA is

   task body task_TA is
      stud_cnt : Natural := 0; -- counts how many students the TA has processed
      id : Students_Range := 0; -- TODO: assign below in the loop

   begin
      Put_Line("TA was born");
      loop

         busy_wait.delay_for(TIME_WALK); -- ta is entering office or walking around a bit

         Put_Line("TA: waiting for student...");
         -- TODO: wait until student wakes me up, take student into review

         --Wait; --protected entry to trigger TA wakeup


         -- and also obtain the id of the student task

         protected_review_room.sleep; -- waits for students


         waiting_list.get_top_seat(id);   -- id is out

         --busy_wait.delay_for(TIME_WALK); -- ta walks back to the room

         -- todo: delete id in procedure review_Student.. not needed; waiting_list used instead for id transfer
         case id is

            when 0 => student_handle0.review_Student; -- for debugging: Put_Line("review 0");
            when 1 => student_handle1.review_Student; -- for debugging: Put_Line("review 1");
            when 2 => student_handle2.review_Student; -- for debuggingPut_Line("review 2");

            when others => Put_Line("wrong value in student " & id'img );

         end case;


         --   Put_Line("TA: waits... still");

         -- takes student in review
         -- review
         stud_cnt := stud_cnt + 1;
         Put_Line("TA: in review with stud"&id'img&", total="&stud_cnt'img);
         busy_wait.delay_for(TIME_REVIEW);
         Put_Line("TA: finished student"&id'img);

         -- guarantee minimum inter-arrival time
         -- Guarantee Minimum Seperation
         busy_wait.delay_for(TA_MINT);
      end loop;

   exception
      when Error: others =>
         Put_Line("TA: terminates due to exception:");
         Put_Line (Exception_Information(Error));
         raise Program_Error;
   end task_TA;

   --  TeachingAssistant : task_TA;


end TA;














