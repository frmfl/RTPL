with Ada.Real_Time;
with System;
with students;
with ta;

use Ada.Real_Time;

-- main procedure
procedure main is
    pragma Priority(System.Priority'First); -- main is very low prio
begin
    Null;
end main;
