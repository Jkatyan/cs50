#include <stdio.h>
#include <cs50.h>
#include <string.h>
//Above is a list of all libraries that were included in the program. These are required in order for the program to function.

int main()
//This is the main function. Anything inside of it will be executed before any other functions run.
{
    printf("What is your name?\n");
    //This statement asks for a users input. Using get_string, the user can input their name.
    string name = get_string("");
    printf("\n");
    printf("How many bugs do you typically find when compiling your programs for the first time?: ");
    //This statement also asks for user input, but this time in the form of an integer. This is later used in the for loop.
    int bugs = get_int("");
    //The below statement sets a limit on which values are allowed. If there are less than 5 or more than 15 bugs, the program will immediately end.
    if(bugs < 5 || bugs > 15){
        return 1;}
    printf("\n");
    int final = bugs;
    //This code sets an integer to be used as a placeholder for bugs. This is so the bugs loop can run without being interrupted.
for(int i = 0; i < bugs; i++){
    //This is a for loop which repeats the function for the amount of bugs there are in the program.
int check = final--;
if(final!=0){ //Here, the program checks if there is only one bug left, in order to make the statement grammatically correct.
printf("%i bugs in the code, take one down, patch it around, %i little bugs in the code.\n",check,final);
} else{
 printf("%i bug in the code, take one down, patch it around, %i little bugs in the code.\n",check,final); }
}
//This final statement runs after there are no more bugs, and prints out the name you entered previously in the program.
printf("\n");
printf("Congrats %s!, There are no more bugs in your program!\n",name);
return 0;
}