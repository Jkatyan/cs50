#include <stdio.h>
//**************HOW TO USE FUNCTIONS*************
//Define Functions here:

void function();
int parameter();

int main(void){
    //MAIN FUNCTION
        printf("Hey\n");
    //Execute Functions 1 and 2 in main loop
    function();
    parameter();
     function();
    parameter();
     function();
    parameter();
     function();
    parameter();
     function();
    parameter();
     function();
    parameter();
}

void function(){
    //Function1
    printf("Hi\n");
}

int parameter(){
    //Function 2 (With Return Value)
        printf("Hello\n");
    return 0;
}