#include <ncurses.h>

int main(void){
    initscr();
    raw();

    for (int i = 0; i < 10; i++){
        move(i,i+2);
        addch('*');
        mvaddstr(i,i+11,"/////");
    }
    for (int i =0; i<10; i++){
        mvaddch(i,i+24,'*');
        move(i,40);
    }
    getch();

    endwin();
    return 0;
}