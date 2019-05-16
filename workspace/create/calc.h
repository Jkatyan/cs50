#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include "main.h"
int calculate(){
    if(option == 3 || option == 4 || option == 5 || option == 6 || option == 8){
    answer = v1*v2;
    }
    else if(option == 1 || option == 2 || option == 7){
    answer = v1/v2;
    }
    else if(option == 9){
    answer = v1*v2*v3;
    }
    else if(option == 10){
    answer = 0.5*v1*(v2*v2);
    }
    return answer;
}

#endif /* CALC_H */