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
      Next_Time : Ada.Real_Time.Time;
   begin
      Put_Line("TA was born");
      Next_Time:= Ada.Real_Time.Clock + TA_MINT;

      loop

         busy_wait.delay_for(TIME_WALK); -- ta is entering office or walking around a bit

         Put_Line("TA: waiting for student...");

         -- blocked by entry; sleeps until released by any student
         protected_review_room.sleep;

         -- retrieve ID of student who is first in waiting list array
         waiting_list.get_top_seat(id);
         -- switch case: take the student in review whos ID was retrieved from array.
         case id is

            when 0 => student_handle0.review_Student;
            when 1 => student_handle1.review_Student;
            when 2 => student_handle2.review_Student;

            when others => Put_Line("wrong value in student " & id'img );
         end case;

         -- takes student in review
         stud_cnt := stud_cnt + 1;
         Put_Line("TA: in review with stud"&id'img&", total="&stud_cnt'img);
         busy_wait.delay_for(TIME_REVIEW);
         Put_Line("TA: finished student"&id'img);

         -- guarantee minimum inter-arrival time
         delay until(Next_Time);
         Next_Time := Next_Time + TA_MINT;
      end loop;

   exception
      when Error: others =>
         Put_Line("TA: terminates due to exception:");
         Put_Line (Exception_Information(Error));
         raise Program_Error;
   end task_TA;

end TA;














