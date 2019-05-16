#include <stdio.h>

int main(void)
{
    int a;
    float b;
    float c;
    float d;
    int e;
    int f;


    printf("Welcome to the Calculator V2\n");
    printf("Please select an option: (Type in the corresponding number)\n");
    printf("\n\a");
    printf("Addition:       1\n");
    printf("Subtraction:    2\n");
    printf("Multiplication: 3\n");
    printf("Division:       4\n");
    printf("Square:         5\n");
    printf("Remainder:      6\n");
    scanf("%d",&a);

switch (a)
    {
    case 1:
    printf("\n\a(+) Please enter in 2 values:\n");
    scanf("%f %f", &b, &c);
    d = b + c;
    printf("\n\aYour answer is: %f\n",d);
    break;

    case 2:
    printf("\n\a(-) Please enter in 2 values:\n");
    scanf("%f %f", &b, &c);
    d = b - c;
    printf("\n\aYour answer is: %f\n",d);
    break;

    case 3:
    printf("\n\a(x) Please enter in 2 values:\n");
     scanf("%f %f", &b, &c);
    d = b * c;
    printf("\n\aYour answer is: %f\n",d);
    break;

    case 4:
    printf("\n\a(/) Please enter in 2 values:\n");
    scanf("%f %f", &b, &c);
    d = b / c;
    printf("\n\aYour answer is: %f\n",d);
    break;

    case 5:
    printf("\n\a(^2) Please enter in 1 value:\n");
    scanf("%f", &b);
    d = b * b;
    printf("\n\aYour answer is: %f\n",d);
    break;

    case 6:
    printf("\n\a(--) Please enter in 2 integers:\n");
    scanf("%d %d", &e, &f);
    d = e % f;
    printf("\n\aYour answer is: %f\n",d);
    break;
    }
}