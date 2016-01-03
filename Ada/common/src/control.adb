with Text_IO;
package body Control is
   procedure Put_Line (S: String) is
   begin
      Text_IO.Put_Line(S);
   end Put_Line;

   function Get_Line return String is
      S: String(1..5) := (others => ASCII.NUL);
      Char : Character;
   begin
      for I in 1 .. 3 loop
         Text_IO.Get(Char);
         Text_IO.Put(Char);
         S(I) := Char;
      end loop;


      --S := Text_IO.Get_Line;
      return S;
   end Get_Line;

   procedure Toggle_LedR is
   begin
      null;
   end;

   procedure Toggle_LedL is
   begin
      null;
   end;

   procedure Off_LedR is
   begin
      null;
   end;

   procedure Off_LedL is
   begin
      null;
   end;
end Control;
