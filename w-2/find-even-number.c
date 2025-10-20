/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/
#include <stdbool.h>


int main(int argc, char *argv[])
{
    bool found = false;

    for(int i =1;i < argc;i++){
        if(atoi(argv[i]) %2 ==0){
            found = true;
            printf("%d - %d\n", i - 1, atoi(argv[i]));
        }
    }
    if(!found){
        printf("Not Found!\n");
    }
}