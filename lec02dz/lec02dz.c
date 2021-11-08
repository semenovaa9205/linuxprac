
//#include<locale.h>
//#include<stdio.h>
#include <curses.h>
int main(){
 #define def=3;
 
 int sumbol=0;
 WINDOW*win;
 initscr();
 noecho();
 printw("window:");
 refresh();
 win=newwin (LINES-2*def ,COLS-2*def,def,def);
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