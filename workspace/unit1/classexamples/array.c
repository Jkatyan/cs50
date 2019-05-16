#include <stdio.h>
#include <cs50.h>
#define CLASS_SIZE 30 //Sets Size
int main(void)
{
    int scores_array [CLASS_SIZE];
    for (int i=0; i < CLASS_SIZE; i++)
    {
        printf("Enter in score for student %d: ", i);
        scores_array [i] = get_int();

    }for (int a = 0; a < CLASS_SIZE; a++)
    {if(a==29)
    {printf("%d\a",scores_array[a]);

    }else
    {printf("%d\a, ",scores_array[a]);

    }}}