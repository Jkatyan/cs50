#include <stdio.h>
#include <cs50.h>

int main(void){
    char c = get_char("Answer: ");
    if (c == 'Y' || c =='y')
    {
        printf("yes\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("no\n");
    }
}