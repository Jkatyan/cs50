#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, string argv[]){
    if(argc != 4){
        printf("Error\n");
        return 1;
    }

    float numOne = atof(argv[1]);
    float numTwo = atof(argv[3]);

    if(strcmp(argv[2],"+")==0){
       float answer = numOne + numTwo;
       printf("Answer: %f\n", answer);
       return 0;
    }
    else if(strcmp(argv[2],"-")==0){
       float answer = numOne - numTwo;
       printf("Answer: %f\n", answer);
       return 0;
    }
    else if(strcmp(argv[2],"*")==0 ||(strcmp(argv[2],"x")==0)){
       float answer = numOne * numTwo;
       printf("Answer: %f\n", answer);
       return 0;
    }
    else if(strcmp(argv[2],"/")==0){
       float answer = numOne / numTwo;
       printf("Answer: %f\n", answer);
       return 0;
    }
    else if(strcmp(argv[2],"%")==0){
       float answer = fmod(numOne, numTwo);
       printf("Answer: %f\n", answer);
       return 0;
    }
    else{
        printf("Error\n");
        return 1;
    }

}