#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
int row,col;

void inicializar_suelo(int row, int col){
    for(int i=row-2; i<=row-1;i++)
      
        mvprintw(i,0,"=");
    
}


int main(){

  initscr();
  getmaxyx(stdscr , row, col);
  refresh();
 inicializar_suelo(row, col);
 getch();
  endwin();


    return EXIT_SUCCESS;
}
