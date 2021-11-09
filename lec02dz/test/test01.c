

 
#include <curses.h>

g 
int main(){
    
initscr();
addstr("hello,world");
getch();
endwin();
return 0; 
}