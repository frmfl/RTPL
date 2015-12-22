with Ada.Text_IO;
with Ada.Exceptions;
with Review_Settings;
with busy_wait;

use Ada.Text_IO;
use Ada.Exceptions;
use Review_Settings;


package body students is
    task body task_stud is
        serial : Natural := 0;
        id : constant Students_Range := 0;
        -- ...
    begin
        -- ...
        loop
            -- TODO: make this task periodic
            -- ...

            Put_Line("S:"&id'img &" waiting..");
            -- TODO: student takes a seat here and waits for TA to call him
            -- ...

            serial := serial + 1;
            Put_Line("S:"&id'img &"(#" & serial'img &") in review");
            busy_wait.delay_for(TIME_REVIEW);
            Put_Line("S:"&id'img &" leaves");
        end loop;
    exception
        when Error: others =>
            Put_Line("S:"&id'img &" terminates due to exception:");
            Put_Line (Exception_Information(Error));
            raise Program_Error;
    end task_stud;
end students;
