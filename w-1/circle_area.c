/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/

#define PI 3.1415 /*Defining PI as a constant*/

int main(int argc, char *argv[])
{
	float radius = 0;
	float area = 0.0;

	radius = atoi(argv[1]);

	radius = radius*radius;

	area  = radius*PI;

    /* print to two decimal places*/
    printf ("%.2f\n",area);

    return (0);
}