/* includes*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>


int main(int argc, char *argv[])
{
    for (int i = 1; i < argc;i++){
        for(int j = i + 2;j < argc;j++){
            if(atoi(argv[i]) == atoi(argv[j])){
                printf("%d\n", atoi(argv[j]));
                return 0;
            }
        }
    }
    printf("No Duplicate Found!\n");
}