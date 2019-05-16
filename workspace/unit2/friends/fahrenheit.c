// Converts degrees C to degrees F by collecting info at command line

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Get celsius from user

    if(argc != 2){
        return 1;
    }
    float celsius = atof(argv[1]);

    // Convert to fahrenheit; no float errors b/c celsius is a float
    float fahrenheit = (celsius * 9) / 5 + 32;
    printf("F: %.1f\n", fahrenheit);
}
