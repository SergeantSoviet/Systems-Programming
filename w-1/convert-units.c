#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int cm = atof(argv[1]);

    float inches = cm / 2.54;

    printf("%.2f\n", inches);
}