/*Program to rescue Queen Ada Lovelace. At the
command-line, a user should type a name as the
second argument. Students can provide their own
avatar name, or use example provided - Cinderella.*/

#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, string argv[]) {

    if (argc != 2) //This checks to make sure the program has the correct amount of arguments.
    {
        printf("Please enter in your name (Cinderella)");
        return 1;
    }
    if((strcmp(argv[1],"cinderella")) != 0)
    {
        printf("Please enter in your name (Cinderella)");
        return 1;
    }


   //TO DO: Here you should be declaring your variables and programming a check for proper argument counts

    //TO DO: Here you should have a personalized greeting for your user
    printf("Welcome to your midterm quest. To receive a favorable score \n");
    printf("for your quest, you must rescue computer science Queen Ada Lovelace, \n");
    printf("who is stranded on a mountaintop after taking the wrong path in her \n");
    printf("own code. We all know bugs happen...\n\n");

    usleep(500000); //Programs a delay in printing to the screen

    printf("When you arrive for duty, you see a list of resources\n");
    printf("written out on a whiteboard. Each of those numbers represents\n");
    printf("a specific resource to help you on your rescue mission.\n\n");

    usleep(500000);

int amt = get_int("How many numbers do you see listed on the board?: \n");
int array [amt];

    usleep(500000);

    printf("Intrigued, you decide to enter those numbers here: \n");

    for (int i=0; i < amt; i++)
    {
        array [i] = get_int();
    }

    printf("\n");

    usleep(500000);

    printf("Congratulations, those numbers represent some very important \n");
    printf("resources that you are going to need to rescue Ada!\n\n");

    usleep(500000);

for(int i = 0; i < amt; i++){
    switch(array[i]){
        case 1:
        printf("Mice\n");
        break;
        case 2:
        printf("Godmother\n");
        break;
        case 3:
        printf("Pumpkin\n");
        break;
        case 7:
        printf("Slippers\n");
        break;
        case 19:
        printf("Birds\n");
        break;
    }
}
        printf("\n");

        printf("However, these items are no good to you, unless you use them in the proper order.\n\n");

        usleep(500000);

        printf("You need the *mice* to help you find your fairy *godmother*, \n");
        printf("who will turn your *pumpkin* into a motorbike, your *slippers* into \n");
        printf("a great pair of hiking boots, and the *birds* into wilderness guides \n");
        printf("to lead you through the forest to the mountain where Ada is waiting \n");
        printf("to be rescued! \n\n");

        usleep(500000);

        printf("Let's get that list sorted!\n\n");

        usleep(1000000);

int j; //Variables used to index through the array
int temp; //Temporary variables used to store data while starting
for (int i = 0; i< amt; i++) //This loop repeats the process depending on how many values are in the array
    {

        for (j = 0; j < amt-i-1; j++) //This loop does the sorting - inside of this loop, the program goes through each value to see which ones are greater
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    //TO DO: Now that you know how the resources should be sorted, you need to write code to do the actual sort
    //Hint: Maybe you need a for loop(s) to iterate through your list
    //Hint: Maybe you need to review the different sorting algorithm program examples you have in your IDE
 for(int i = 0; i < 5; i++){
    switch(array[i]){
        case 1:
        printf("Mice\n");
        break;
        case 2:
        printf("Godmother\n");
        break;
        case 3:
        printf("Pumpkin\n");
        break;
        case 7:
        printf("Slippers\n");
        break;
        case 19:
        printf("Birds\n");
        break;
    }
}

printf("\n");

    //TO DO: In addition to the swap, you also want to print the sorted list to the screen, by resource name, not the number representing the resource
    //Hint: Remember your if statements

printf("Congratulations Cinderella, you've rescued Ada! Well done!\n");
    //TO DO: Print your personalized, congratulatory message
    //TO DO: Remember your return type!
    }
