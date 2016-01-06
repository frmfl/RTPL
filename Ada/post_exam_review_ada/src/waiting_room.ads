with Review_Settings;
use Review_Settings;

package waiting_room is
   --    -- protected waiting_room_protected is
   --        procedure review_Student ( stud_id : out Students_Range );
   --        entry wait ( stud_id : in Students_Range );
   --        procedure ta_ready;
   --  
   --     private
   --        student_is_waiting : Boolean := false ;
   --        ta_is_ready : Boolean := false;
   --        actual_student_id: Students_Range := 0;
   --  
   --     end waiting_room_protected;

   --    -- protected door_protected is
   --        entry sleep;
   --        procedure knock;
   --  
   --     private
   --        student_knocks : Boolean := false;
   --     end door_protected;

   ---------------------------------
   -- TODO: Implement definition
   ---------------------------------

   protected waitroom is
      -- entry keeps TA sleeping until condition evaluates TRUE and triggers/wakes TA
      entry TA_Wait;
      
      procedure TA_status; -- sets Flag TA in review/busy
      procedure students_waiting; -- sets Flag students waiting
      
      -- ToDo: protected type within protected body not allowed
      -- instead move to private section of waitroom
      protected type Waiting_List is
         procedure put_entry(ID : in Students_Range); -- if free seat is available. Put ID in FIRST non-empty array entry
         procedure release_seat; -- remove first array entry by copying second entry; Set all remaining to empty
         function seat_available return Boolean;
      private  --only accessible within protected type
         WR_seats_array : Arr_List;

      end Waiting_List;
   
      
      -- called by students to request a seat on waiting list (sit down)
      procedure request_seat(ID : in Students_Range);
      -- called when TA takes first student in array in review
      procedure review_student;     -- remove first array entry
      -- returns True if there is a free seat
      function seat_available return Boolean;    
      -- Waitinglist Array type definition
      --function Assign_TA2Student return Integer;
   private
      bool_studs_waiting : Boolean := False; -- True when waitinglist is non-empty
      TA_inreview : Boolean := False; -- set TA status to in review
      procedure assign_student;   

   end waitroom;
end waiting_room;
