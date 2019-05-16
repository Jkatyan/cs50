#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

char text[50];

int main(void){
  printf("Please enter in a string value\n");
  fgets("%s",text);
  printf("The string you entered is: %s\n",text);
}