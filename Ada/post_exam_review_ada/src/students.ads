with Review_Settings;

package students is
-- static task at package level. TODO: make three of them.
   task type task_stud(ID : Review_Settings.Students_Range);

   student1 : task_stud(1);
   --student1.PrintID;
   student2 : task_stud(2);
   --student2.PrintID;
   student3 : task_stud(3);
   --student3.PrintID;

end students;

