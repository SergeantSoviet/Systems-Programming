/* includes*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int result = 0;

    for(int i =1;i < argc;i++){
        if(atoi(argv[i]) %2 ==1){
            result +=1;
        }
    }
    printf("%d\n", result);
}