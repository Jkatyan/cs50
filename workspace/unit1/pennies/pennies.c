#include <cs50.h>
#include <stdio.h>
#include <math.h>

int days;
double pennies;
long long x;
double total;
int main(int argc, string argv[])
{
if(argc==3){
   do
    {
        days = atof(argv[2]);
    }

    while (days < 28 || days > 31);

    do
    {
    pennies = atof(argv[3]);
    }

    //Checks less than or equal to zero
    while (pennies <= 0);
}

x = pennies;

for (int i = 0; i < days; i++)
{
	total += x;
	x *= 2;

}
double money = (double)total / 100;
printf("$%0.2f\n", money);

}