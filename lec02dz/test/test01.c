

 
#include <curses.h>

  
int main(){
    
initscr();
addstr("hello,world");
getch();
endwin();
return 0; 
}