#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>

int option = 0;
int end = 0;
int count = 1;
float v1;
float v2;
float v3;

float answer;
const char* list[10] = {" -1 Average Speed"," -2 Acceleration"," -3 Net Force"," -4 Frictional Force"," -5 Weight"," -6 Momentum"," -7 Power"," -8 Work"," -9 PE"," -10 KE"};

unsigned int usleep (unsigned int a);

#endif /* MAIN_H */