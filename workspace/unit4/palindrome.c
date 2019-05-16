#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int isString(char string[]){
int length = strlen(string);
int right = length-1;
int left = 0;
while (right > left)
    {
        if (string[left] != string[right])
        {
            printf("%s is not a palindrome\n", string);
            return 1;
        }
        left++;
        right--;
    }
    printf("%s is a palindrome\n", string);
return 0;
}
int main(int argc,string argv[]){
if (argc != 2) //This checks to make sure the program has the correct amount of arguments.
    {
        printf("Please enter in a word.\n");
        return 1;
    }
isString(argv[1]);
    return 0;
}