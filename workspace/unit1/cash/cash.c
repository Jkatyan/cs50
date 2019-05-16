#include <cs50.h>
#include <stdio.h>
#include <math.h>

float q;
float d;
float n;
float p;
int coins = 0;

int main(void){
    float change = get_float("How much change do you need? (In Dollars)\n");
    while(change < 0);
    change = round(change * 100);


while(change >= 25){
    change = change - 25;
    coins++;
}
while(change >= 10){
    change = change - 10;
    coins++;
}
while(change >= 5){
    change = change - 5;
    coins++;
}
while(change >= 1){
    change = change - 1;
    coins++;
}
    printf("%d\n", coins);
}