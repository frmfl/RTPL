with Ada.Real_Time;
with System;
with students;
with TA;

use Ada.Real_Time;
use students;
use TA;

-- main procedure
procedure main is
   pragma Priority(System.Priority'First); -- main is very low

begin
   null;
end main;
