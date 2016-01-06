with Review_Settings;
use Review_Settings;

package body waiting_room is
   -- this protected object queues the students (entry wait). TA can review a Student when a "student_is_waiting"
   -- TODO: not sure if synchronization works (between students and TA.. that student stays in queue until TA is ready again.
   protected body waiting_room_protected is
      procedure review_Student ( stud_id : out Students_Range ) is
      begin
         ta_is_ready := false;
         student_is_waiting := false;
         stiud_id := actual_student_id;

      end review_Student;

      procedure ta_ready is
      begin

         ta_is_ready := true;

      end ta_ready;

      entry wait ( stud_id : in Students_Range ) when ta_is_ready is
      begin

         student_is_waiting := true;
         actual_student_id := stud_id;

      end wait;
   end waiting_room_protected;

   -- this protected body wakes the TA when a "student_knocks" on the door of the TA's office
   protected body door_protected is
      entry sleep when student_knocks is
      begin
         -- woke up
         student_knocks := false;
      end sleep;

      procedure knock is
      begin
         student_knocks := true;
      end knock;
   end door_protected;

end waiting_room;





protected body protected_waiting_room is

   protected type Waiting_List is
      procedure request_seat(stud_id : in Students_Range);
      procedure release_seat;
   private
      Arr_List is array (Students_Range'Range) of Integer;
      end Waiting_List;

      protected body Waiting_List is
         procedure request_seat(stud_id : in Students_Range) is
         begin

            i : Integer := 0;
            i = Waiting_list'Length + 1;
            Waiting_list(i) := stud_id;
         end request_seat;
         procedure release_seat is
         begin
            null;
            --here release seats
         end release_seat;

      end Waiting_List;


         if num_students.Length not == zero then
            students_waiting := True;
         end


         entry Wait_StudentToReview when students_waiting is
         begin
            TA_inreview := True;
            Put_Line("TA is in review");

            --student_ID := FIFO_Array'First();
            --remove first entry from Buffer;
            -- procedure_in_review(ID) //set student with ID to in review


         end Wait_StudentToReview;
      end protected_waiting_room;
   end waiting_room;






