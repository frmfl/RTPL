with Review_Settings;
use Review_Settings;

package body waiting_room is
   -- this protected object queues the students (entry wait). TA can review a Student when a "student_is_waiting"
   -- TODO: not sure if synchronization works (between students and TA.. that student stays in queue until TA is ready again.
   --     protected body waiting_room_protected is
   --        procedure review_Student ( stud_id : out Students_Range ) is
   --        begin
   --           ta_is_ready := false;
   --           student_is_waiting := false;
   --           stud_id := actual_student_id;
   --
   --        end review_Student;
   --
   --        procedure ta_ready is
   --        begin
   --
   --           ta_is_ready := true;
   --
   --        end ta_ready;
   --
   --        entry wait ( stud_id : in Students_Range ) when ta_is_ready is
   --        begin
   --
   --           student_is_waiting := true;
   --           actual_student_id := stud_id;
   --
   --        end wait;
   --     end waiting_room_protected;
   --
   --     -- this protected body wakes the TA when a "student_knocks" on the door of the TA's office
   --     protected body door_protected is
   --        entry sleep when student_knocks is
   --        begin
   --           -- woke up
   --           student_knocks := false;
   --        end sleep;
   --
   --        procedure knock is
   --        begin
   --           student_knocks := true;
   --        end knock;
   --     end door_protected;


   --------------------------------------
   --------------------------------------
   protected body waitroom is

      entry TA_Wait when bool_studs_waiting is begin
         --TODO:
         TA_inreview := True;
         Put_Line("TA is in review");
      end TA_Wait;

      procedure TA_status is begin
         null;
      end TA_status;

      procedure students_waiting is begin
         null;
      end students_waiting;

      protected body Waiting_List is
         procedure put_entry(ID : in Students_Range) is begin
            null;
         end put_entry;

         procedure release_seat is begin
            WR_seats_array'First := "";
         end release_seat;

         -- Returns True if seat is available in Waiting Room
         -- TODO: complete if-statement and query WR_Seats_array
         function seat_available is begin
            if WR_seats_array'Length then
               return True;
            else
               return False;
            end if;
         end seat_available;
      end Waiting_List;


      procedure request_seat(stud_id : in Students_Range) is
      begin
         -- if routine if seat is available put id else exit
         Waiting_List.put_entry(ID);
--           i : Integer := 0;
--           i = Waiting_list'Length + 1;
--           Waiting_list(i) := stud_id;
      end request_seat;

      -- TA takes student into review
      procedure review_student is begin
         Waiting_List.release_seat;
      end review_student;
      -- always first array entry
      function seat_available is begin
         null;
      end seat_available;

      procedure assign_student is begin
         null;
      end assign_student;


   end waitroom;


end waiting_room;






