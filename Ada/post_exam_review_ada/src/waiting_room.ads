with Review_Settings;
use Review_Settings;

package waiting_room is
   protected waiting_room_protected is
      procedure review_Student ( stud_id : out Students_Range );
      entry wait ( stud_id : in Students_Range );
      procedure ta_ready;

   private
      student_is_waiting : Boolean := false ;
      ta_is_ready : Boolean := false;
      actual_student_id: Students_Range := 0;

   end waiting_room_protected;

   protected door_protected is
      entry sleep;
      procedure knock;

   private
      student_knocks : Boolean := false;
   end door_protected;

   ---------------------------------

   protected type Waiting_List is
      procedure request_seat(stud_id : in Students_Range);
      procedure release_seat;
      private
      Arr_List is array (Students_Range'Range) of Integer;
   end Waiting_List;

   protected waiting_room is
      entry Wait_StudentsWaiting;
      procedure request_seat(stud_id : in Students_Range);
      procedure release_seat;
      procedure set_stud_status;
      procedure set_ta_status;
      type Int_Arr_Students is array (Students_Range'Range) of Integer;
      function Assign_TA2Student return Integer;
   private
      procedure assign_student;

      TA_inreview : Boolean := False; --set TA status to in review

      -- decrement Buffer
      -- assign first student in  Buffer
      -- set student status to in review
   end waiting_room;






   ---------------------------
end waiting_room;
