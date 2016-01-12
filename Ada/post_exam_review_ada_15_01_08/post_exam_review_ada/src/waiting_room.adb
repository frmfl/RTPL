with Review_Settings;
with Ada.Text_IO;
use Review_Settings;
use Ada.Text_IO;

package body waiting_room is
   -- this protected object queues the students (entry wait). TA can review a Student when a "student_is_waiting".
   protected body prot_student_handle is
      procedure review_student  is
      begin
         ta_is_ready := true;
      end review_student;

      entry wait when ta_is_ready is
      begin
         ta_is_ready := false;
      end wait;

   end prot_student_handle;


   -- this protected object implements the seats, where students take a seat by giving their ID
   protected body waiting_list is
      -- student takes a seat, gives its ID and gets, if there was a free seat
      procedure take_seat (stud_id: in Students_Range; could_take_seat: out Boolean) is
      begin
         if num_students_waiting <= Seat_Range'Last then
            seats(num_students_waiting) := stud_id;
            num_students_waiting := num_students_waiting + 1;
            protected_review_room.knock;
            could_take_seat := true;
            -- Debug Option:
            -- Put_Line("take_seat" & seats(0)'img & seats(1)'img & seats(2)'img & "   " & students_waiting'Img & " students waiting");
         else
            could_take_seat := false;
            -- Debug Option:
            -- Put_Line("take_seat" & seats(0)'img & seats(1)'img & seats(2)'img & "...can't take one, seats full!");
         end if;
      end take_seat;

      -- ta takes the longest waiting student
      procedure get_top_seat (stud_id: out Students_Range) is begin
         stud_id := seats(0);

         for i in Seat_Range range 1 .. Seat_Range'Last loop
            seats(i-1) := seats(i);
	    -- Debug Option:
            -- Put_Line("foor loop, i= " & i'img & " seats(i-1) = " & seats(i-1)'img & " seats(i) = " & seats(i)'img);
         end loop;
	
         num_students_waiting := num_students_waiting - 1; -- decrement number of students on waiting list
	 -- ToDo: Analyze what happens if preempted here by TA-task and actually no student is waiting
         if num_students_waiting = 0 then
            protected_review_room.no_student_waiting;
         end if;
         -- for debugging:
         --   Put_Line("get_top_seat" & seats(0)'img & seats(1)'img & seats(2)'img);
      end get_top_seat;

   end waiting_list;

   -- this protected body wakes the TA when a "student_knocks" on the door of the TA's office
   protected body protected_review_room is

      entry sleep when indicate_waiting is

      begin
         -- TA woke up and is awake
         null;
      end sleep;

      procedure knock is
      begin
         indicate_waiting := true;
--         Put_Line("student_knocks true");
      end knock;

      procedure no_student_waiting is
         begin
         indicate_waiting := false;

      end no_student_waiting;

   end protected_review_room;

end waiting_room;






