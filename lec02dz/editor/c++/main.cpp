#include <curses.h>
#include<iostream> 
  
int main(){
    
initscr();
addstr("hello,world!!!!!!!!!!!!!");
getch();
endwin();
return 0; 
}