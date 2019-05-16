#include <stdio.h>
#include <cs50.h>
#include <math.h>

int final;
int y;
int x;

int main(void){
    long long isbn = get_long_long("Please enter the 10 Digit Number: ");
    for(int i = 10; i >= 0; i--){
x = isbn % 10;
y = x * i;
final += y;
isbn /= 10;
    }

    if (final % 11 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}