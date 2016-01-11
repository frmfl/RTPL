with Review_Settings;
with Ada.Text_IO;
use Review_Settings;
use Ada.Text_IO;

package body waiting_room is
   -- this protected object queues the students (entry wait). TA can review a Student when a "student_is_waiting"
   -- TODO: not sure if synchronization works (between students and TA.. that student stays in queue until TA is ready again.
   protected body waiting_room_protected is
      procedure review_Student ( stud_id : out Students_Range ) is
      begin
         ta_is_ready := true;
         stud_id := current_student_id;

      end review_Student;


      entry wait ( stud_id : in Students_Range ) when ta_is_ready is
      begin
         ta_is_ready := false;
         current_student_id := stud_id;

      end wait;

      function is_student_waiting return Boolean is
      begin
         return student_is_waiting;

      end is_student_waiting;

   end waiting_room_protected;
   --

   protected body waiting_list is

      procedure take_seat (stud_id: in Students_Range; could_take_seat: out Boolean) is
      begin

         if students_waiting <= Seat_Range'Last then

            seats(students_waiting) := stud_id;
            door_protected.knock;


            students_waiting := students_waiting + 1;

            could_take_seat := true;

            -- For debugging:
            -- Put_Line("take_seat" & seats(0)'img & seats(1)'img & seats(2)'img & "   " & students_waiting'Img & " students waiting");

         else

            could_take_seat := false;

            -- For debugging
            -- Put_Line("take_seat" & seats(0)'img & seats(1)'img & seats(2)'img & "...can't take one, seats full!");
         end if;
      end take_seat;

      procedure get_top_seat (stud_id: out Students_Range) is

         --  top_id : Students_Range := 0;

      begin

         --in Seat_Range

         -- fifo manually implemented because for loop didn't work --
         stud_id := seats(0);
         --        seats(0) := seats(1);
         --         seats(1) := seats(2);

         -- TODO for loop: ----------!!!!!!!

         for i in Seat_Range range 1 .. Seat_Range'Last loop

            seats(i-1) := seats(i);

            --   Put_Line("foor loop, i= " & i'img & " seats(i-1) = " & seats(i-1)'img & " seats(i) = " & seats(i)'img);

         end loop;

         students_waiting := students_waiting -1;

         if students_waiting = 0 then

            door_protected.no_student_waiting;

         end if;

         -- for debugging:
         --   Put_Line("get_top_seat" & seats(0)'img & seats(1)'img & seats(2)'img);

      end get_top_seat;

   end waiting_list;

   -- this protected body wakes the TA when a "student_knocks" on the door of the TA's office
   protected body door_protected is

      entry sleep when student_knocks is

      begin
         -- woke up
         null;
      end sleep;

      procedure knock is
      begin
         student_knocks := true;
--         Put_Line("student_knocks true");
      end knock;

      procedure no_student_waiting is
         begin
         student_knocks := false;

      end no_student_waiting;

   end door_protected;


   --------------------------------------
   --------------------------------------
   --     protected body waitroom is
   --
   --        entry TA_Wait when bool_studs_waiting is begin
   --           --TODO:
   --           TA_inreview := True;
   --           Put_Line("TA is in review");
   --        end TA_Wait;
   --
   --        procedure TA_status is begin
   --           null;
   --        end TA_status;
   --
   --        procedure students_waiting is begin
   --           null;
   --        end students_waiting;
   --
   --        protected body Waiting_List is
   --           procedure put_entry(ID : in Students_Range) is begin
   --              null;
   --           end put_entry;
   --
   --           procedure release_seat is begin
   --              WR_seats_array'First := "";
   --           end release_seat;
   --
   --           -- Returns True if seat is available in Waiting Room
   --           -- TODO: complete if-statement and query WR_Seats_array
   --           function seat_available is begin
   --              if WR_seats_array'Length then
   --                 return True;
   --              else
   --                 return False;
   --              end if;
   --           end seat_available;
   --        end Waiting_List;
   --
   --
   --        procedure request_seat(stud_id : in Students_Range) is
   --        begin
   --           -- if routine if seat is available put id else exit
   --           Waiting_List.put_entry(ID);
   --  --           i : Integer := 0;
   --  --           i = Waiting_list'Length + 1;
   --  --           Waiting_list(i) := stud_id;
   --        end request_seat;
   --
   --        -- TA takes student into review
   --        procedure review_student is begin
   --           Waiting_List.release_seat;
   --        end review_student;
   --        -- always first array entry
   --        function seat_available is begin
   --           null;
   --        end seat_available;
   --
   --        procedure assign_student is begin
   --           null;
   --        end assign_student;
   --
   --
   --     end waitroom;


end waiting_room;






