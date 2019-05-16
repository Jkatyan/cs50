#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int write(char x[]){
printf("%s",x);
return 0;
}
int writeint(double a){
    printf("%f", a);
    return 0;
}
void readInt(int *a){
    scanf("%d",a);
}
void readFloat(float *a){
    scanf("%f",a);
}
void read(char *a){
    scanf("%s", a);
}
int randInt(int max) {
    srand((unsigned) time(NULL));
    max = (rand() % max) + 1;
    return max;
}
int search(char *a, char b[]){
    char *result = strstr(a, b);
    int position = result - a;
    return position;
}
int length(char a[]){
    int b;
    b = strlen(a);
    return b;
}
int repeat(int a(), int b){
    for (int i = 0; i < b; i++){
    a();
    }
    return 0;
}
double quadcalc(double a, double b, double c, int d){
    double value1 = sqrt(pow(b,2) - (4*a*c));
    double root1 = ((-b + value1) / (2*a));
    double root2 = ((-b - value1) / (2*a));
    if (d == 1){
    return root1;
    } else if (d == 2){
        return root2;
    }
    return 0;
}
double area(int a, int b){
    #define PI 3.14159265
    if (a == 5){
        double value1 = sqrt(5*(5+(2*sqrt(5))));
        double value2 = pow(b, 2);
        double value3 = (value1*value2)/4;
        return value3;
    } else if(a == 6){
        double value1 = ((3*sqrt(3)) / 2)*pow(b,2);
        return value1;
    } else if(a == 7){
        int value1 = 5;
    } else if (a == 8){
        double value1 = 2*(1+sqrt(2))*pow(b,2);
        return value1;
    } else if (a > 8){
        double value1 = cos((180/a)*PI/180)/sin((180/a)*PI/180);
        double value2 = (9*pow(b,2)*value1)/4;
        return value2;
    }
   return 0;
}
double areapoly(int a, int b, int c){
    double value1 = (a*b*c) / 2;
    return value1;
}

double average(int a[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++){
        sum += a[i];
    }
    double value1 = sum/b;
    return value1;

}
int countint(int a[]){
    int i = 0;
    int total = 0;
    while (a[i] < 1000000000){
        total++;
        i++;
    }
    return total;
}
int countchar(char a[]){
    int i = 0;
    int total = 0;
    while (!(isdigit(a[i]))){
        total++;
        i++;
    }
    return total;
}
double intangle(int a){
    double value1 = ((a-2)*180)/a;
    return value1;
}
int sort(char *a, int b[], int c){
    #define size c
    int d[size];
    if (strcmp(a, "lg") == 0){
        for (int i = 0; i < c; i++){
            int thei = 0;
             int min = b[0];
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (min > p2){
                    thei = j+1;
                    min = p2;
                }

            }
            d[i] = min;
            b[thei] = 1000000000;
        }
    } else if(strcmp(a, "gl") == 0){

        for (int i = 0; i < c; i++){
            int thei = 0;
            int max = b[0];

            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (max < p2){
                    thei = j+1;
                    max = p2;

                }

            }
            d[i] = max;
            b[thei] = -1000000000;
        }
    }
    for (int k = 0; k < c; k++){
        b[k] = d[k];
    }
    return 0;
}

//SPANISH


int escribir(char x[]){
printf("%s",x);
return 0;
}
int escribirint(double a){
    printf("%f", a);
    return 0;
}
void leerInt(int *a){
    scanf("%d",a);
}
void leerFloat(float *a){
    scanf("%f",a);
}
void leer(char *a){
    scanf("%s", a);
}
int aleatorioInt(int max) {
    srand((unsigned) time(NULL));
    max = (rand() % max) + 1;
    return max;
}
int buscar(char *a, char b[]){
    char *result = strstr(a, b);
    int position = result - a;
    return position;
}
int longitud(char a[]){
    int b;
    b = strlen(a);
    return b;
}
int repetir(int a(), int b){
    for (int i = 0; i < b; i++){
    a();
    }
    return 0;
}
double cuadraticocalc(double a, double b, double c, int d){
    double value1 = sqrt(pow(b,2) - (4*a*c));
    double root1 = ((-b + value1) / (2*a));
    double root2 = ((-b - value1) / (2*a));
    if (d == 1){
    return root1;
    } else if (d == 2){
        return root2;
    }
    return 0;
}
double zona(int a, int b){
    #define PI 3.14159265
    if (a == 5){
        double value1 = sqrt(5*(5+(2*sqrt(5))));
        double value2 = pow(b, 2);
        double value3 = (value1*value2)/4;
        return value3;
    } else if(a == 6){
        double value1 = ((3*sqrt(3)) / 2)*pow(b,2);
        return value1;
    } else if(a == 7){
        int value1 = 5;
    } else if (a == 8){
        double value1 = 2*(1+sqrt(2))*pow(b,2);
        return value1;
    } else if (a > 8){
        double value1 = cos((180/a)*PI/180)/sin((180/a)*PI/180);
        double value2 = (9*pow(b,2)*value1)/4;
        return value2;
    }
   return 0;
}
double zonapoly(int a, int b, int c){
    double value1 = (a*b*c) / 2;
    return value1;
}

double promedio(int a[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++){
        sum += a[i];
    }
    double value1 = sum/b;
    return value1;

}
int contarint(int a[]){
    int i = 0;
    int total = 0;
    while (a[i] < 1000000000){
        total++;
        i++;
    }
    return total;
}
int contarchar(char a[]){
    int i = 0;
    int total = 0;
    while (!(isdigit(a[i]))){
        total++;
        i++;
    }
    return total;
}
double intangulo(int a){
    double value1 = ((a-2)*180)/a;
    return value1;
}
int ordenar(char *a, int b[], int c){
    #define size c
    int d[size];
    if (strcmp(a, "lg") == 0){
        for (int i = 0; i < c; i++){
            int thei = 0;
             int min = b[0];
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (min > p2){
                    thei = j+1;
                    min = p2;
                }

            }
            d[i] = min;
            b[thei] = 1000000000;
        }
    } else if(strcmp(a, "gl") == 0){

        for (int i = 0; i < c; i++){
            int thei = 0;
            int max = b[0];
            if (i == 0){
                printf("%i", b[4]);
            }
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (max < p2){
                    thei = j+1;
                    max = p2;
                if (i == 0 && j == 3){
                 printf("\n%i\n", max);
                 }
                }

            }
            d[i] = max;
            b[thei] = -1000000000;
        }
    }
    for (int k = 0; k < c; k++){
        b[k] = d[k];
    }
    return 0;
}


//FRENCH



int ecrire(char x[]){
printf("%s",x);
return 0;
}
int ecrireint(double a){
    printf("%f", a);
    return 0;
}
void lisInt(int *a){
    scanf("%d",a);
}
void lisFloat(float *a){
    scanf("%f",a);
}
void lis(char *a){
    scanf("%s", a);
}
int randomiseInt(int max) {
    srand((unsigned) time(NULL));
    max = (rand() % max) + 1;
    return max;
}
int chercher(char *a, char b[]){
    char *result = strstr(a, b);
    int position = result - a;
    return position;
}
int longueur(char a[]){
    int b;
    b = strlen(a);
    return b;
}
int repeter(int a(), int b){
    for (int i = 0; i < b; i++){
    a();
    }
    return 0;
}
double quadratiquecalc(double a, double b, double c, int d){
    double value1 = sqrt(pow(b,2) - (4*a*c));
    double root1 = ((-b + value1) / (2*a));
    double root2 = ((-b - value1) / (2*a));
    if (d == 1){
    return root1;
    } else if (d == 2){
        return root2;
    }
    return 0;
}
double surface(int a, int b){
    #define PI 3.14159265
    if (a == 5){
        double value1 = sqrt(5*(5+(2*sqrt(5))));
        double value2 = pow(b, 2);
        double value3 = (value1*value2)/4;
        return value3;
    } else if(a == 6){
        double value1 = ((3*sqrt(3)) / 2)*pow(b,2);
        return value1;
    } else if(a == 7){
        int value1 = 5;
    } else if (a == 8){
        double value1 = 2*(1+sqrt(2))*pow(b,2);
        return value1;
    } else if (a > 8){
        double value1 = cos((180/a)*PI/180)/sin((180/a)*PI/180);
        double value2 = (9*pow(b,2)*value1)/4;
        return value2;
    }
   return 0;
}
double surfacepoly(int a, int b, int c){
    double value1 = (a*b*c) / 2;
    return value1;
}

double moyenne(int a[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++){
        sum += a[i];
    }
    double value1 = sum/b;
    return value1;

}
int compterint(int a[]){
    int i = 0;
    int total = 0;
    while (a[i] < 1000000000){
        total++;
        i++;
    }
    return total;
}
int compterchar(char a[]){
    int i = 0;
    int total = 0;
    while (!(isdigit(a[i]))){
        total++;
        i++;
    }
    return total;
}
double intincliner(int a){
    double value1 = ((a-2)*180)/a;
    return value1;
}
int trier(char *a, int b[], int c){
    #define size c
    int d[size];
    if (strcmp(a, "lg") == 0){
        for (int i = 0; i < c; i++){
            int thei = 0;
             int min = b[0];
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (min > p2){
                    thei = j+1;
                    min = p2;
                }

            }
            d[i] = min;
            b[thei] = 1000000000;
        }
    } else if(strcmp(a, "gl") == 0){

        for (int i = 0; i < c; i++){
            int thei = 0;
            int max = b[0];
            if (i == 0){
                printf("%i", b[4]);
            }
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (max < p2){
                    thei = j+1;
                    max = p2;
                if (i == 0 && j == 3){
                 printf("\n%i\n", max);
                 }
                }

            }
            d[i] = max;
            b[thei] = -1000000000;
        }
    }
    for (int k = 0; k < c; k++){
        b[k] = d[k];
    }
    return 0;
}


//GERMAN


int schreiben(char x[]){
printf("%s",x);
return 0;
}
int schreibenint(double a){
    printf("%f", a);
    return 0;
}
void lesenInt(int *a){
    scanf("%d",a);
}
void lesenFloat(float *a){
    scanf("%f",a);
}
void lesen(char *a){
    scanf("%s", a);
}
int zufalligInt(int max) {
    srand((unsigned) time(NULL));
    max = (rand() % max) + 1;
    return max;
}
int suche(char *a, char b[]){
    char *result = strstr(a, b);
    int position = result - a;
    return position;
}
int lange(char a[]){
    int b;
    b = strlen(a);
    return b;
}
int wiederholen(int a(), int b){
    for (int i = 0; i < b; i++){
    a();
    }
    return 0;
}
double quadratischcalc(double a, double b, double c, int d){
    double value1 = sqrt(pow(b,2) - (4*a*c));
    double root1 = ((-b + value1) / (2*a));
    double root2 = ((-b - value1) / (2*a));
    if (d == 1){
    return root1;
    } else if (d == 2){
        return root2;
    }
    return 0;
}
double bereich(int a, int b){
    #define PI 3.14159265
    if (a == 5){
        double value1 = sqrt(5*(5+(2*sqrt(5))));
        double value2 = pow(b, 2);
        double value3 = (value1*value2)/4;
        return value3;
    } else if(a == 6){
        double value1 = ((3*sqrt(3)) / 2)*pow(b,2);
        return value1;
    } else if(a == 7){
        int value1 = 5;
    } else if (a == 8){
        double value1 = 2*(1+sqrt(2))*pow(b,2);
        return value1;
    } else if (a > 8){
        double value1 = cos((180/a)*PI/180)/sin((180/a)*PI/180);
        double value2 = (9*pow(b,2)*value1)/4;
        return value2;
    }
   return 0;
}
double bereichpoly(int a, int b, int c){
    double value1 = (a*b*c) / 2;
    return value1;
}

double durchschnittlich(int a[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++){
        sum += a[i];
    }
    double value1 = sum/b;
    return value1;

}
int anzahlint(int a[]){
    int i = 0;
    int total = 0;
    while (a[i] < 1000000000){
        total++;
        i++;
    }
    return total;
}
int anzahlchar(char a[]){
    int i = 0;
    int total = 0;
    while (!(isdigit(a[i]))){
        total++;
        i++;
    }
    return total;
}
double intwinkel(int a){
    double value1 = ((a-2)*180)/a;
    return value1;
}
int sortieren(char *a, int b[], int c){
    #define size c
    int d[size];
    if (strcmp(a, "lg") == 0){
        for (int i = 0; i < c; i++){
            int thei = 0;
             int min = b[0];
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (min > p2){
                    thei = j+1;
                    min = p2;
                }

            }
            d[i] = min;
            b[thei] = 1000000000;
        }
    } else if(strcmp(a, "gl") == 0){

        for (int i = 0; i < c; i++){
            int thei = 0;
            int max = b[0];

            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (max < p2){
                    thei = j+1;
                    max = p2;

                }

            }
            d[i] = max;
            b[thei] = -1000000000;
        }
    }
    for (int k = 0; k < c; k++){
        b[k] = d[k];
    }
    return 0;
}


//ITALIAN

int scrivi(char x[]){
printf("%s",x);
return 0;
}
int scriviint(double a){
    printf("%f", a);
    return 0;
}
void leggereInt(int *a){
    scanf("%d",a);
}
void leggereFloat(float *a){
    scanf("%f",a);
}
void leggere(char *a){
    scanf("%s", a);
}
int casualeInt(int max) {
    srand((unsigned) time(NULL));
    max = (rand() % max) + 1;
    return max;
}
int ricerca(char *a, char b[]){
    char *result = strstr(a, b);
    int position = result - a;
    return position;
}
int lunghezza(char a[]){
    int b;
    b = strlen(a);
    return b;
}
int ripetere(int a(), int b){
    for (int i = 0; i < b; i++){
    a();
    }
    return 0;
}
double quadraticocalc(double a, double b, double c, int d){
    double value1 = sqrt(pow(b,2) - (4*a*c));
    double root1 = ((-b + value1) / (2*a));
    double root2 = ((-b - value1) / (2*a));
    if (d == 1){
    return root1;
    } else if (d == 2){
        return root2;
    }
    return 0;
}
double settore(int a, int b){
    #define PI 3.14159265
    if (a == 5){
        double value1 = sqrt(5*(5+(2*sqrt(5))));
        double value2 = pow(b, 2);
        double value3 = (value1*value2)/4;
        return value3;
    } else if(a == 6){
        double value1 = ((3*sqrt(3)) / 2)*pow(b,2);
        return value1;
    } else if(a == 7){
        int value1 = 5;
    } else if (a == 8){
        double value1 = 2*(1+sqrt(2))*pow(b,2);
        return value1;
    } else if (a > 8){
        double value1 = cos((180/a)*PI/180)/sin((180/a)*PI/180);
        double value2 = (9*pow(b,2)*value1)/4;
        return value2;
    }
   return 0;
}
double settorepoly(int a, int b, int c){
    double value1 = (a*b*c) / 2;
    return value1;
}

double media(int a[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++){
        sum += a[i];
    }
    double value1 = sum/b;
    return value1;

}
int contareint(int a[]){
    int i = 0;
    int total = 0;
    while (a[i] < 1000000000){
        total++;
        i++;
    }
    return total;
}
int contarechar(char a[]){
    int i = 0;
    int total = 0;
    while (!(isdigit(a[i]))){
        total++;
        i++;
    }
    return total;
}
double intangolo(int a){
    double value1 = ((a-2)*180)/a;
    return value1;
}
int ordinare(char *a, int b[], int c){
    #define size c
    int d[size];
    if (strcmp(a, "lg") == 0){
        for (int i = 0; i < c; i++){
            int thei = 0;
             int min = b[0];
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (min > p2){
                    thei = j+1;
                    min = p2;
                }

            }
            d[i] = min;
            b[thei] = 1000000000;
        }
    } else if(strcmp(a, "gl") == 0){

        for (int i = 0; i < c; i++){
            int thei = 0;
            int max = b[0];

            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (max < p2){
                    thei = j+1;
                    max = p2;

                }

            }
            d[i] = max;
            b[thei] = -1000000000;
        }
    }
    for (int k = 0; k < c; k++){
        b[k] = d[k];
    }
    return 0;
}



//SWEDISH


int skriva(char x[]){
printf("%s",x);
return 0;
}
int skrivaint(double a){
    printf("%f", a);
    return 0;
}
void lasaInt(int *a){
    scanf("%d",a);
}
void lasaFloat(float *a){
    scanf("%f",a);
}
void lasa(char *a){
    scanf("%s", a);
}
int slumpmassigInt(int max) {
    srand((unsigned) time(NULL));
    max = (rand() % max) + 1;
    return max;
}
int sok(char *a, char b[]){
    char *result = strstr(a, b);
    int position = result - a;
    return position;
}
int langd(char a[]){
    int b;
    b = strlen(a);
    return b;
}
int upprepa(int a(), int b){
    for (int i = 0; i < b; i++){
    a();
    }
    return 0;
}
double kvadratiskcalc(double a, double b, double c, int d){
    double value1 = sqrt(pow(b,2) - (4*a*c));
    double root1 = ((-b + value1) / (2*a));
    double root2 = ((-b - value1) / (2*a));
    if (d == 1){
    return root1;
    } else if (d == 2){
        return root2;
    }
    return 0;
}
double omrade(int a, int b){
    #define PI 3.14159265
    if (a == 5){
        double value1 = sqrt(5*(5+(2*sqrt(5))));
        double value2 = pow(b, 2);
        double value3 = (value1*value2)/4;
        return value3;
    } else if(a == 6){
        double value1 = ((3*sqrt(3)) / 2)*pow(b,2);
        return value1;
    } else if(a == 7){
        int value1 = 5;
    } else if (a == 8){
        double value1 = 2*(1+sqrt(2))*pow(b,2);
        return value1;
    } else if (a > 8){
        double value1 = cos((180/a)*PI/180)/sin((180/a)*PI/180);
        double value2 = (9*pow(b,2)*value1)/4;
        return value2;
    }
   return 0;
}
double omradepoly(int a, int b, int c){
    double value1 = (a*b*c) / 2;
    return value1;
}

double medel(int a[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++){
        sum += a[i];
    }
    double value1 = sum/b;
    return value1;

}
int raknaint(int a[]){
    int i = 0;
    int total = 0;
    while (a[i] < 1000000000){
        total++;
        i++;
    }
    return total;
}
int raknachar(char a[]){
    int i = 0;
    int total = 0;
    while (!(isdigit(a[i]))){
        total++;
        i++;
    }
    return total;
}
double intvinkel(int a){
    double value1 = ((a-2)*180)/a;
    return value1;
}
int sorto(char *a, int b[], int c){
    #define size c
    int d[size];
    if (strcmp(a, "lg") == 0){
        for (int i = 0; i < c; i++){
            int thei = 0;
             int min = b[0];
            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (min > p2){
                    thei = j+1;
                    min = p2;
                }

            }
            d[i] = min;
            b[thei] = 1000000000;
        }
    } else if(strcmp(a, "gl") == 0){

        for (int i = 0; i < c; i++){
            int thei = 0;
            int max = b[0];

            for (int j = 0; j < c-1; j++){
                int p2 = b[j+1];
                if (max < p2){
                    thei = j+1;
                    max = p2;

                }

            }
            d[i] = max;
            b[thei] = -1000000000;
        }
    }
    for (int k = 0; k < c; k++){
        b[k] = d[k];
    }
    return 0;
}