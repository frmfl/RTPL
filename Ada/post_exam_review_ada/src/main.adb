with Ada.Real_Time;
with System;
with students;
with ta;

use Ada.Real_Time;

-- main procedure
procedure main is
   pragma Priority(System.Priority'First); -- main is very low prio
   stud1 : students;
   stud2 : students;

begin
   stud1.task_stud;
   stud2.task_stud;
end main;
