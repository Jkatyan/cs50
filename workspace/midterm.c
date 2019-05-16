
#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, string argv[]) {


    if (argc != 2)
    {
        printf("Please enter in a grade (9-12)");
        return 1;
    }

    int d = 0;
    d = atoi(argv[1]);
    if (d < 9 || d > 12)
    {
        printf("Please enter in a grade (9-12)");
        return 1;
    }

    printf("Welcome to your midterm challenge. To receive a favorable score \n");
    printf("you must help the guidance counselors of Old Sitcom High School \n");
    printf("determine the highest GPA, for each grade. The school year is \n");
    printf("coming to a close and class rankings are due!\n\n");

    usleep(500000); //Just used to program a pause between print statements

    printf("When you arrive at the guidance office, you see a list of student\n");
    printf("GPAs for each grade written out on a whiteboard. You need to\n");
    printf("write a program that will sort those GPAs, lowest to highest,\n");
    printf("for each grade. Depending on what grade the user of your program\n");
    printf("enters at the command-line will determine what group you tackle first.\n");
    printf("For the purposes of this assignment, you are going to focus on the 9th\n");
    printf("grade class. Good Luck!\n\n");

    usleep(500000);

float M1;
float M2;
float C1;
float C2;
float P1;
float P2;
float J1;
float J2;
float G1;
float G2;
float B1;
float B2;
float array[100000];

printf("What is Marcia's semester 1 GPA:\n");
scanf("%f",&M1);
printf("What is Marcia's semester 2 GPA:\n");
scanf("%f",&M2);
printf("What is Jan's semester 1 GPA:\n");
scanf("%f",&J1);
printf("What is Jan's semester 2 GPA:\n");
scanf("%f",&J2);
printf("What is Cindy's semester 1 GPA:\n");
scanf("%f",&C1);
printf("What is Cindy's semester 2 GPA:\n");
scanf("%f",&C2);
printf("What is Greg's semester 1 GPA:\n");
scanf("%f",&G1);
printf("What is Greg's semester 2 GPA:\n");
scanf("%f",&G2);
printf("What is Peter's semester 1 GPA:\n");
scanf("%f",&P1);
printf("What is Peter's semester 2 GPA:\n");
scanf("%f",&P2);
printf("What is Bobby's semester 1 GPA:\n");
scanf("%f",&B1);
printf("What is Bobby's semester 2 GPA:\n");
scanf("%f",&B2);
    printf("\n");

float avgM = (M1+M2)/2;
array[0] = avgM;
float avgJ = (J1+J2)/2;
array[1] = avgJ;
float avgC = (C1+C2)/2;
array[2] = avgC;
float avgG = (G1+G2)/2;
array[3] = avgG;
float avgP = (P1+P2)/2;
array[4] = avgP;
float avgB = (B1+B2)/2;
array[5] = avgB;
    usleep(500000);

    printf("The GPA averages for each sibling are: \n\n");

    usleep(500000);

printf("Marcia: %0.2f\n", avgM);
printf("Jan: %0.2f\n", avgJ);
printf("Cindy: %0.2f\n", avgC);
printf("Greg: %0.2f\n", avgG);
printf("Peter: %0.2f\n", avgP);
printf("Bobby: %0.2f\n", avgB);

    printf("\n");
int i;
int j;
float temp;
       for (i = 0; i< 6; i++)
    {

        for (j = 0; j < 6-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    usleep(500000);

    printf("Those GPA averages in sorted order are as follows: \n\n");

 for (i = 0; i <6; i++)
    {
        printf("%0.2f\n", array[i]);
    }


printf("\n");
if(array[5] == ((M1+M2)/2)){
    printf("Marcia has the highest GPA!");
}
else if(array[5] == ((J1+J2)/2)){
    printf("Jan has the highest GPA!");
}
else if(array[5] == ((C1+C2)/2)){
    printf("Cindy has the highest GPA!");
}
else if(array[5] == ((G1+G2)/2)){
    printf("Greg has the highest GPA!");
}
else if(array[5] == ((P1+P2)/2)){
    printf("Peter has the highest GPA!");
}
else if(array[5] == ((B1+B2)/2)){
    printf("Bobby has the highest GPA!");
}
return 0;
}
