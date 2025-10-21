/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float multiply(float a, float b);
float divide(float a, float b);

int main(int argc, char *argv[])
{
    float result = 0;
    
    if(strcmp(argv[1], "multiply") == 0){
        result = multiply(atof(argv[2]),atof(argv[3]));
        printf("%.2f\n", result);
    }
    else if ((strcmp(argv[1], "divide")) == 0&& atof(argv[3]) != 0){
        result = divide(atof(argv[2]), atof(argv[3]));
        printf("%.2f\n", result);
    }
    else{
        printf("Invalid!\n");
    }
}

float multiply(float a, float b){
    return a * b;
}
float divide(float a, float b){
    return a / b;
}