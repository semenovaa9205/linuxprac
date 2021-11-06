 #include<locale.h>
 #include<curses.h>
 int main(){
setlocale(LC_ALL , "");
initscr();
addstr("привет ,мир");
getch();
endwin();
return 0; 
 }
