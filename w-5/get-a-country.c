/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void printData(char *country, char *capital, float *pop, int *size);

int main(int argc, char *argv[])
{
    if(argc < 4){
        printf("not enough input");
    }

    char *country = argv[1];
    char *capital = argv[2];
    float pop = atof(argv[3]);
    int size = atoi(argv[4]);

    printData(country, capital, &pop, &size);
}

void printData(char *country, char *capital, float *pop, int *size){
    printf("%s\n%s\n%.2f million people\n%d km2\n", country, capital, *pop, *size);
}