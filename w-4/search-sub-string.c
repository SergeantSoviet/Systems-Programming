/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int findIndexs(char *string, char *sub, int * startIndex, int *endIndex);

int main(int argc, char *argv[])
{
    char *string = argv[1];
    char *sub = argv[2];

    int startIndex, endIndex;
    if(findIndexs(string, sub, &startIndex, &endIndex) == 1){
        printf("%d %d\n", startIndex, endIndex);
    }
    else{
        printf("Not Found!");
    }
}

int findIndexs(char *string, char *sub, int * startIndex, int *endIndex){
    char *position = strstr(string, sub);

    if(position!=NULL){
        *startIndex = position-string;
        *endIndex = *startIndex + strlen(sub) - 1;
        return 1;
    }
    else{
        return 0;
    }
}