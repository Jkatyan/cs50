// Calculates how many pennies a user would get if their change doubles each day using command line information

#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int days;
int pennies;

int main(int argc, string argv[])

{
    // Get a number of days in [28, 31]
   if(argc != 3){
       printf("Error\n");
       return 1;
   }

    days = atoi(argv[1]);
   if ( days < 28 || days > 31){
       printf("Error\n");
       return 1;
   }

   pennies = atoi(argv[2]);
   if (pennies <= 0){
       printf("Error\n");
       return 1;
   }

    // Relatively few pennies required to get out of bounds of int
    long long total = pennies;

    // Add double the amount of pennies of the previous day each day
    for(int i = 1; i < days; i++)
    {
        total += pennies * pow(2,i);
    }

    // Output the total as dollars and cents only
    printf("$%.2f\n", ((double) total) / 100);
}
