#include <ncurses.h>

int main(void){
    initscr();
    raw();

    addstr("Hello, world");
    getch();

    endwin();
}