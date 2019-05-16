#include <stdio.h>
#include <string.h>
//Functions / Variables
char name[20];
char pass[20];
void menu();
void create();
void login();
void finish();
//Main Function
int main(void){
    menu();
    finish();
}
//Menu Function -- Returns to main menu
void menu(){
    int a;
    printf("\a\nWelcome to the Login Screen\n");
    printf("\n\aPlease select an option below:\n\a");
    printf("1: Create Account\n");
    printf("2: Login to your account\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        create();
        break;
        case 2:
        login();
        break;
    }
    return;
}
void create(){
    printf("\n\aCreate Account\n");
    printf("Please type in a username: (Max length of 20)\n");
    scanf("%s",name);
    printf("%s is your new username.\n", name);
    printf("\n\aPlease type in a password: (Max length of 20)\n");
    scanf("%s",pass);
    printf("%s is your new password.\n", pass);
    printf("\nYou will now go back to the main menu.\n\n");
    menu();
    return;
}
void login(){
    char name2[20];
    char pass2[20];
    printf("\n\aLogin to your account\n");
    printf("Please enter in your username:\n");
    scanf("%s",name2);
    if(strcmp(name,name2)==0){
printf("Please enter in your password:\n");
scanf("%s",pass2);
 if(strcmp(pass,pass2)==0){
     printf("You have successfully logged in.\n");
 }
 else {
     printf("Your password is incorrect.\n");
     menu();
 }
    }
    else {
       printf("The username you entered does not exist in our system. Please try again.\n");
menu();
    }
    return;
}
void finish(){
    printf("\a\n");
    return;
}