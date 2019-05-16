#include <stdio.h>
#include <cs50.h>

bool x = true;
bool y = true;
int main(void){
if(x && y)
{
printf("Hi\n");
}
else if(x || y) {
printf("Hello\n");
}
else
{
printf("Oof\n");
}
}