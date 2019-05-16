#include <stdio.h>
#include <cs50.h>
int valid_triangle(int a,int b,int c);int main(void){int x = get_int("Enter in Side A of the triangle: \n");int y = get_int("Enter in Side B of the triangle: \n");int z = get_int("Enter in Side C of the triangle: \n");while(x<=0 || y<=0 || z<=0);
valid_triangle(x,y,z);}int valid_triangle(int a,int b,int c){if(b + c >= a && a + c >= b && a + b >=c){printf("YES\n");return 0; } else {printf("NO\n"); return 0; } }