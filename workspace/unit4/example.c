#include <cs50.h>
#include <ncurses.h>
#include <unistd.h>

#define DELAY 35000

// terminal stops with d key

int main(int argc, char *argv[]) {

  int x = 0,
      y = 0;

  int max_x = 0,
      max_y = 0;

  int next_x = 0;

  int direction = 1;

  initscr();
  noecho();
  curs_set(FALSE);
  timeout (0);

  getmaxyx(stdscr, max_y, max_x);

  x = max_x / 2;
  y = max_y / 2;

  char ch;

  while (1) {
    getmaxyx(stdscr, max_y, max_x);

    y = max_y / 2;

    clear();
    for(int i = 30; i <= 35 && i >=30; i++){
        if(i > 35){
            i = 30;
        }
        else if (i == 30){
            printf("\033[0;30m");
        }
        else if (i == 31){
            printf("\033[0;31m");
        }
        else if (i == 32){
            printf("\033[0;32m");
        }
        else if (i == 33){
            printf("\033[0;33m");
        }
        else if (i == 34){
            printf("\033[0;34m");
        }
        else if (i == 35){
            printf("\033[0;35m");
        }

    }
    mvprintw(y, x, "=====");
    refresh();

    usleep(DELAY);

    next_x = x + direction;

    if (next_x >= max_x || next_x < 0) {
      direction*= -1;
    } else {
      x+= direction;
    }
    ch = getch();
    if (ch == 100) {
      break;
    }else if (ch == 101){
direction*= -1;
    }

  }

  endwin();

  return 0;
}