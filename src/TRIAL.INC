procedure EfectSonor5;                 { Efecte sonore }
  var f : byte;
    Begin;
       for f:=1 to 200 do begin
           sound(f*Random(50));delay(5);nosound;
                          end;
    end;                               { Efecte sonore }


procedure ThisProgramIsShareware;
var t:integer;
begin
 clrscr;
 writeln('旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�');
 writeln('�              Z80 Tools   -  Shareware version             �');
 writeln('쳐컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�');
 writeln('�                                                           �');
 writeln('�     This program is a 30 day Trial version of Z80 Tools   �');
 writeln('�                                                           �');
 writeln('�       After the 30 days have expired, if you wish to      �');
 writeln('�       continue to use Z80 Tools you would need to buy a   �');
 writeln('�       full product from VMA soft.                         �');
 writeln('�                                                           �');
 writeln('�       VMA soft address:                                   �');
 writeln('�       Email : vma@electra.upit.ro                         �');
 writeln('�       Web   : http://vmasoft.webjump.com                  �');
 writeln('�               http://electron.upit.ro/vma                 �');
 writeln('�       FTP   : ftp://electron.upit.ro/pub/vma              �');
 writeln('읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�');
 writeln;writeln;
 write('Wait 10 seconds:');EfectSonor5;
 t:=1;
 repeat
  write('.');delay(1000);
  inc(t);
 until t=10;
 writeln;
end;

