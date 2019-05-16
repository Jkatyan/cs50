#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
#include<unistd.h> //c libraries
#include<stdlib.h>//c libraries

int setting = 0;

//Variables
    float cel;//creating variable for celsius
    float fahr;//creating variable for fahrenheit
    int meter;
    float feet;
    int liters=0;
    float gallons;

void calculate(){
    switch(setting){
        case 1:
         fahr = ((cel * 9) / 5) + 32; //fahrenheit formula, creating fahrenheit
        if (cel<10)//conditional statement
        printf ("\n");//statement given if c<10
        break;
        case 2:
        feet = (meter * 3.1281);
        break;
        case 3:
         gallons = ((float)liters/3.785);
        break;
    }
}

int main(void)//starts your program
{
    printf("\n\n");
    printf("In order to decrease divisons between different cultures, this program will help people who use the metric system, convert their units of measurement to the customary system\n\n");//starter code
    printf("Enjoy this program that enables you to convert from metric to customary systems with ease!\n");//starter code
////////////////////////////////////////////////////////////////////////////////

printf("\nWhat would you like to calculate?\n\n");
printf("1- Temperature\n2- Distance\n3- Liquid Measurements\n");
scanf("%d", &setting);

if(setting == 1){
    printf("\n\n");
    printf("Let's convert your temperature (in celsius)!");
    printf("\n\n");
    printf("Enter Celsius: ");//prompt for user to type something
    scanf("%f", &cel);//scans so that the program and recognize the variable "cel"
   calculate();
    printf("Fahrenheit temp is: %.2f \n", fahr);//%.2f allows for 2nd decimal place; printing Fahrenheit prompt, and then giving fahrenheit value carried out to 2 decimal points
}
////////////////////////////////////////////////////////////////////////////////
else if(setting == 2){
    printf("Let's convert your diastance (from meters to feet)!\n");
    printf("\n\n");
    printf("Enter Meters:  ");
    scanf("%d", &meter);
    calculate();
    printf("The conversion in feet is: %.2f \n", feet);
}
////////////////////////////////////////////////////////////////////////////////
  else if(setting == 3){
    printf("Let's convert liters to gallons!\n");

    printf("\n\n");
    printf("Enter Liters:  ");
    scanf("%i", &liters);
    calculate();
    printf("The conversion in gallons is: %.2f \n", gallons);
    printf("\n\n");
    printf("I hope you enjoyed learning the value of metric measuraments converted into customary measurements!\n");
////////////////////////////////////////////////////////////////////////////////
}
    return 0;
}
