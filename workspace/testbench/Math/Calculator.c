#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("Select an Operation: 1 = +, 2 = -, 3 = *, 4 = /\n");
    scanf("%d",&d);
    if(d == 1){
    printf("Please enter 2 integers:\n");
    scanf("%d %d",&a,&b);
    c = a + b;
    printf("Your answer is: %d\n",c);
    printf("------------------\n");
    }
    else if(d ==2){
    printf("Please enter 2 integers:\n");
    scanf("%d %d",&a,&b);
    c = a - b;
    printf("Your answer is: %d\n",c);
    printf("------------------\n");
    }
     else if(d == 3){
    printf("Please enter 2 integers:\n");
    scanf("%d %d",&a,&b);
    c = a * b;
    printf("Your answer is: %d\n",c);
    printf("------------------\n");
    }
     else if(d == 4){
    printf("Please enter 2 integers:\n");
    scanf("%d %d",&a,&b);
    c = a / b;
    printf("Your answer is: %d\n",c);
    printf("------------------\n");
    }
     if(d == 0){
    printf("Enter in password\n");
    scanf("%d %d",&a,&b);
    if(a+b == 0){
      printf("<--- Super Secret Information Tab --->\n");
      printf("Password: 2 Values that add up to 0\n");
    }
    if(a+b<0){
      printf("Incorrect Password\n");
    }
     if(a+b>0){
      printf("Incorrect Password\n");
    }
    }
    return 0;
}
