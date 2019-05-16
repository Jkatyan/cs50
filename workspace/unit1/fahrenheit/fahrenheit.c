#include <stdio.h> //Pre established functions library
#include <cs50.h> //Uses the CS50 Library
float f; //Global variable used to store final output
int main(void){  //Main loop for the program
    printf("Please enter in the temperature (Celsius)\n"); //Text which asks for input
    float c = get_float(); //Function which takes in the user input
    f = ((c * 9) / 5) + 32; //Equation which converts celsius into fahrenheit
    printf("%0.1f\n\a",f); //Prints final answer
}