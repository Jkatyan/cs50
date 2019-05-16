#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define VALUE 9

/***********************************************
 * T I C - T A C - T O E ------> By: Jay Katyan
 * ********************************************/
void menu();
int select();
void printgrid();
void info();
void square();
int location [VALUE];
int x;
int place();
int option;
void check();
int move = 0;
void A();
int a = 0;
void B();
int b = 0;
void C();
int c = 0;
void D();
int d = 0;
void E();
int e = 0;
void F();
int f = 0;
void G();
int g = 0;
void H();
int h = 0;
void I();
int i = 0;
void comp();
int p;

int main(void){
    for(int y = 0; y <=9; y++){
        location [y] = 0;
    }
    menu();
    select();
if(option == 1){
    square();
}
else if(option == 2){
    main();
}

 }
void menu(){
    printf("*******************************************************\n");
     printf("*                     Tic-Tac-Toe                     *\n");
     printf("*******************************************************\n");
     printf("By: Jay Katyan                                                       \n");
     printf("\n");
     printf("[1] Start Game\n");
     printf("[2] Information\n");
     printf("                                                  \n");
}
int select(){
    int choose = get_int("");
    if(choose == 1){
        printgrid();
        option = 1;
    }
    else if(choose == 2){
        info();
        option = 2;
    }
    else{
        printf("Please enter in a Valid Value: \n");
        select();
    }
    return 0;
}
void printgrid(){
printf("\n===========================\n");
printf("     Tic - Tac - Toe       \n");
printf("===========================\n");
printf("\n");
printf(" 1      |2      |3       \n");
A();B();C();
printf("        |       |        \n");
printf(" ~~~~~~~~~~~~~~~~~~~~~~~ \n");
printf(" 4      |5      |6        \n");
D();E();F();
printf("        |       |        \n");
printf(" ~~~~~~~~~~~~~~~~~~~~~~~ \n");
printf(" 7      |8      |9        \n");
G();H();I();
printf("        |       |        \n");

}
void info(){

}
void square(){
printf("\nWhere would you like to place a 'X'\n");
scanf("%d", &x);
if(x >= 1 && x<= 9){
if(x == location[x]){
   printf("An object already exists on this tile.\n");
   square();
}
else{
   location [x] =  x;
   place();
}
}
else{
    printf("Please enter in a Valid Value\n");
}
}
int place(){
    if(move==9){
return 0;
    }
    else{
        move++;
    }
    if(x==1 || p==1){
        a++;
          comp();
    printgrid();
        return 0;
    }
    else if(x==2 || p==2){
        b++;
    comp();
    printgrid();
        return 0;
    }
    else if(x==3 || p==3){
        c++;
        comp();
    printgrid();
        return 0;
    }
    else if(x==4 || p==4){
        d++;
          comp();
    printgrid();
        return 0;
    }
    else if(x==5 || p==5){
        e++;
          comp();
    printgrid();
        return 0;
    }
    else if(x==6 || p==6){
        f++;
          comp();
    printgrid();
        return 0;
    }
    else if(x==7 || p==7){
        g++;
          comp();
    printgrid();
        return 0;
    }
    else if(x==8 || p==8){
        h++;
          comp();
    printgrid();
        return 0;
    }
    else if(x==9 || p==9){
        i++;
          comp();
    printgrid();
        return 0;
    }
    return 0;
}
void check(){

}
void A(){
switch(a){
        case 1:
printf("    x   |");
        break;
        case 2:
printf("    o   |");
        break;
        default:
printf("        |");
        break;
    }

}
void B(){
switch(b){
        case 1:
printf("   x    |");
        break;
        case 2:
printf("   o    |");
        break;
        default:
printf("       |");
        break;
    }

}
void C(){
switch(c){
        case 1:
printf("    x   |\n");
        break;
        case 2:
printf("    o   |\n");
        break;
        default:
printf("        |\n");
        break;
    }

}
void D(){
switch(d){
        case 1:
printf("\n    x   |");
        break;
        case 2:
printf("\n    o   |");
        break;
        default:
printf("\n        |");
        break;
    }
}
void E(){
switch(e){
        case 1:
printf("    x   |");
        break;
        case 2:
printf("    o   |");
        break;
        default:
printf("        |");
        break;
    }
}
void F(){
switch(f){
       case 1:
printf("    x   \n");
        break;
        case 2:
printf("    o   \n");
        break;
        default:
printf("        \n");
        break;
    }
}
void G(){
switch(g){
        case 1:
printf("\n    x   |");
        break;
        case 2:
printf("\n    o   |");
        break;
        default:
printf("\n        |");
        break;
    }
}
void H(){
switch(h){
        case 1:
printf("    x   |");
        break;
        case 2:
printf("    o   |");
        break;
        default:
printf("        |");
        break;
    }
}
void I(){
switch(i){
        case 1:
printf("    x   |\n");
        break;
        case 2:
printf("    o   |\n");
        break;
        default:
printf("        |\n");
        break;
    }
}
void comp(){
p = ((rand() % 9)+1);
if(x == location[p]){
   comp();
}
else{
   location [p] =  p;
place();
}
}