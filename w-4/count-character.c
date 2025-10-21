/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void countChars(char *pc, char *string);

int main(int argc, char *argv[])
{
    char c = argv[1][0];
    char string[100];
    strcpy(string, argv[2]);

    char *pc = &c;
    countChars(&c, string);
}

void countChars(char *pc, char *string){
    int count = 0;
    for(int i = 0; i < strlen(string);i++){
        if(tolower(string[i]) == *pc){
            count++;
        }
    }
    printf("%d\n", count);
}