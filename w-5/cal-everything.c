/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void sum(float *n1,float *n2);
void difference(float *n1,float *n2);
void product(float *n1,float *n2);
void division(float *n1,float *n2);
void power(float *n1,float *n2);
void naturalLog(float *n1,float *n2);

int main(int argc, char *argv[])
{
    float n1 = atof(argv[1]);
    float n2 = atof(argv[2]);

    sum(&n1, &n2);
    difference(&n1, &n2);
    product(&n1, &n2);
    division(&n1, &n2);
    power(&n1, &n2);
    naturalLog(&n1, &n2);
}

void sum(float *n1,float *n2){
    printf("%.2f\n", *n1 + *n2);
}
void difference(float *n1,float *n2){
    printf("%.2f\n", *n1 - *n2);
}
void product(float *n1,float *n2){
    printf("%.2f\n", *n1 * *n2);
}
void division(float *n1,float *n2){
    printf("%.2f\n", *n1 / *n2);
}
void power(float *n1,float *n2){
    printf("%.2f\n", pow(*n1, *n2));
}
void naturalLog(float *n1,float *n2){
    printf("%.2f\n", log(*n1) +  log(*n2));
}