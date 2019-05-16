/*AP Computer Science Principles Create Task

-Project Description:
    :This project is a Mechanics Calculator designed to assist users
    with simple physics problems, overall decreasing calculation time and error
    by cutting out unnecessary details in the overall solutions.

*/

//List of libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//List of included header files
#include "main.h"
#include "calc.h"
#include "problems.h"

void loading(){
    for(int i = 0; i < 3; i++){
    printf("▪ ");
    usleep(200000);
}
printf("\n");
}
int selection(){

printf("\nPlease select an option\n");
scanf("%i", &option);

if(option < 1 || option > 10){
    printf("[ERROR] Please select a valid option.\n\n");
    sleep(1);
    selection();
}
return option;
}

int main(void){

printf("\nMechanics Calculator\n\n");
sleep(1);
for (int i = 0; i < 10; i++){
    printf("%s\n",list[i]);
}
sleep(1);
selection();
loading();
 switch(option){
    case 1:a1();break;case 2:a2();break;case 3:a3();break;case 4:a4();break;case 5:a5();break;case 6:a6();break;case 7:a7();break;case 8:a8();break;case 9:a9();break;case 10:a10();break;
    }
printf("\n[!] Answer: %f\n", answer);
sleep(1);
printf("\n -1 Solve another problem\n -2 Exit application\n");
scanf("%i",&end);
if (end == 1){
    sleep(1);
    count++;
        printf("_________ Problem #%i _________",count);

    printf("\n\n");
main();
}
else if (end == 2){
    return 0;
}
}