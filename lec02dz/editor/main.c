
//#include<locale.h>
//#include<stdio.h>
#include <curses.h>
int main(){
 const int def=3;
 int sumbol=0;
 WINDOW*win;
 initscr();
 
 cbreak();
 start_color();
 
 init_pair(1,COLOR_YELLOW,COLOR_WHITE);
 printw("TextEdit:");
 refresh();
 init_pair(2,COLOR_RED,COLOR_WHITE);
 win=newwin (LINES-2*def,COLS-2*def,def,def);
 
 keypad(win,TRUE);
 scrollok(win,TRUE);
 do{  
 
     wprintw(win,"Key: %d,Name: %s/n",sumbol,keyname(sumbol));
     box(win,0,0);
     wrefresh(win);
 }while(sumbol=wgetch((win))!=27);


endwin();
return 0; 
}

