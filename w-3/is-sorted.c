/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int sorted[50];
    int length = argc-1;
    int temp;
    for(int i =1;i < argc;i++){
        sorted[i-1] =atoi(argv[i]);
    }

    for(int i = 0;i< length -1;i++){
        for(int j = 0;j < length -i -1;j++){
            if(sorted[j] > sorted[j+1]){
                temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }

    for(int i =0;i < length;i++){
        printf("%d\n", sorted[i]);
    }
}