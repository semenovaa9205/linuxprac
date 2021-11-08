 #include<locale.h>
 #include<curses.h>
 int main(){
     

setlocale(LC_ALL , "ru_RU.UTF-8");
initscr();
addstr("привет ,мир");
getch();
endwin();
 

return 0;
 }