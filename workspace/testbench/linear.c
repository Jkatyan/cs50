#include <stdio.h>
#include <cs50.h>

int main(){
    int amt = get_int("How many values would you like to store in the array?\n");
    int array [amt];
    for (int i=0; i < amt; i++)
    {
        printf("Enter in the value for location %d: ", i);
        array [i] = get_int();
    }
    printf("What number are you looking for?\n");
    int number = get_int("");
    for(int i = 0; i<amt; i++){
        if(number == array[i]){
            printf("Number is at value %d\n",i);
            return 0;
        }
        else{
            printf("Number is not at value %d\n",i);
        }
    }
}