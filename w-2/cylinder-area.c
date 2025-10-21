/* includes*/
#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415 /*Defining PI as a constant*/

int main(int argc, char *argv[])
{

    if(argc < 3){
        if(argc == 1){
            printf("No input Given");
            return 1;
        }
        else if (argc == 2){
            printf("Two Arguments Needed");
            return 1;
        }
    }

    for (int i = 1; i < 2;i++){
        if(argv[i] < 0){
            printf("The radious or height cannot be Negative!");
            return 1;
        }
    }

	float radius = atof(argv[1]);
    float height = atof(argv[2]);
	float area = 0.0;



	area  = 2*PI*radius*height + 2*PI*(radius*radius);

    /* print to two decimal places*/
    printf ("%.2f\n",area);

    return (0);
}