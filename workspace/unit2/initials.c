#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


string name;

int main(void){
 name = get_string();

    printf("%c", toupper(name[0]));

    for(int i = 0; i < strlen(name); i++){
        if(name[i] == ' '){
            printf("%c",toupper (name[i + 1]));
        }

    }
    printf("\n");
}