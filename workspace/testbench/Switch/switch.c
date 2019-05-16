#include <stdio.h>

int main(void)
{
    int a;

    printf("Please set case (1,2,3)\n");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
    printf("Case was set to 1\n");
    break;

    case 2:
    printf("Case was set to 2\n");
    break;

    case 3:
    printf("Case was set to 3\n");
    break;

    default:
    printf("Case was set to default value\n");
    break;
    }
}