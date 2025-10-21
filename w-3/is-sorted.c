/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/
#include <string.h>


int main(int argc, char *argv[])
{
    int sorted[50];
    int length = argc-1;
    int temp;
    for(int i =1;i < argc;i++){
        sorted[i-1] =atoi(argv[i]);
    }
    for(int i =0; i < length;i++){
        if(sorted[i]>sorted[i+1]){
            temp = sorted[i];
            sorted[i] = sorted[i+1];
            sorted[i+1] = temp;
        }
    }

    for(int i =0;i < length;i++){
        printf("%d\n", sorted[i]);
    }
}