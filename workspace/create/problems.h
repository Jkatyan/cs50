#ifndef PROBLEMS_H
#define PROBLEMS_H
#include <stdio.h>

//Includes all print statements used in calculations

void a1(){
    printf("\n- Average Speed (m/s)\n");
    printf("Distance:\n");
    scanf("%f",&v1);
    printf("Time:\n");
    scanf("%f",&v2);
    calculate();
}
void a2(){
    printf("\n- Acceleration\n");
    printf("Velocity:\n");
    scanf("%f",&v1);
    printf("Time (sec):\n");
    scanf("%f",&v2);
    calculate();
}
void a3(){
    printf("\n- Net Force\n");
    printf("Mass (kg):\n");
    scanf("%f",&v1);
    printf("Acceleration:\n");
    scanf("%f",&v2);
    calculate();
}
void a4(){
    printf("\n- Frictional Force\n");
    printf("Coefficient of Friction:\n");
    scanf("%f",&v1);
    printf("Normal Force:\n");
    scanf("%f",&v2);
    calculate();
}
void a5(){
    printf("\n- Weight\n");
    printf("Mass:\n");
    scanf("%f",&v1);
    printf("Gravity:\n");
    scanf("%f",&v2);
    calculate();
}
void a6(){
    printf("\n- Momentum\n");
    printf("Mass:\n");
    scanf("%f",&v1);
    printf("Velocity:\n");
    scanf("%f",&v2);
    calculate();
}
void a7(){
    printf("\n- Power\n");
    printf("Work:\n");
    scanf("%f",&v1);
    printf("Time:\n");
    scanf("%f",&v2);
    calculate();
}
void a8(){
    printf("\n- Work\n");
    printf("Force:\n");
    scanf("%f",&v1);
    printf("Distance:\n");
    scanf("%f",&v2);
    calculate();
}
void a9(){
    printf("\n- Potential Energy\n");
    printf("Mass:\n");
    scanf("%f",&v1);
    printf("Gravity:\n");
    scanf("%f",&v2);
    printf("Height:\n");
    scanf("%f",&v3);
    calculate();
}
void a10(){
    printf("\n- Kinetic Energy\n");
    printf("Mass:\n");
    scanf("%f",&v1);
    printf("Velocity:\n");
    scanf("%f",&v2);
    calculate();
}
#endif /* PROBLEMS_H */