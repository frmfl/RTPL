with Review_Settings;

package students is
-- static task at package level. TODO: make three of them.
   task type task_stud(ID : Review_Settings.Students_Range);

   student1 : task_stud(0);
   student2 : task_stud(1);
   student3 : task_stud(2);

end students;

