#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int h;
    do
    {
        printf("Pyramid Height: ");
        h = get_int();
    }
    while (h < 0 || h > 23);

    for (int x = 0; x < h; x++)
    {
        for (int spaces = h - x; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < x + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}