/* includes*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>


int main(int argc, char *argv[])
{
    int startYear = atoi(argv[1]);
    int endYear = atoi(argv[2]);

    int numOfYears = endYear - startYear;

    for(int i = 0;i <= numOfYears;i++){
        if((startYear + i) % 4 == 0){
            printf("%d\n", startYear+i);
        }
    }
}