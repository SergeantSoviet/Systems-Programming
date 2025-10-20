/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/
#include <string.h>

int findMax(int a, int b);

int main(int argc, char *argv[])
{
    int max = 0;
    int find = 0;
    for (int i =1; i < argc-1;i++){
        find = findMax(atoi(argv[i]), atoi(argv[i+1]));
        if(find > max){
            max = find;
        }
    }

    printf("%d\n", max);
}

int findMax(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}