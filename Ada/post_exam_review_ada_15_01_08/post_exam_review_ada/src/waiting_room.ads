with Review_Settings;
use Review_Settings;

package waiting_room is
   
      -- protected type
      protected type prot_student_handle is
	 entry wait;
         procedure review_Student;

      private
         ta_is_ready : Boolean := false;
      end prot_student_handle;

      -- protected instances of type waiting room
      student_handle0 : prot_student_handle;
      student_handle1 : prot_student_handle;
      student_handle2 : prot_student_handle;

      -- protected object 
      protected protected_review_room is
        entry sleep;        
        procedure knock;
        procedure no_student_waiting;
 
      private
         indicate_waiting : Boolean := false;
      end protected_review_room;

      -- protected object
      protected waiting_list is
        procedure take_seat (stud_id: in Students_Range; could_take_seat: out Boolean); 
        procedure get_top_seat (stud_id: out Students_Range);
      
      private 
      seats: Arr_List; 
      num_students_waiting: Seat_Range := 0;
      end waiting_list;

  end waiting_room;
