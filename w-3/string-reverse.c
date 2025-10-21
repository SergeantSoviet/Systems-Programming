/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char reverse[50];
    int j = 0;
    for(int i=strlen(argv[1]) -1;i >= 0;i--){
        reverse[j] = argv[1][i];
        j++;
    }
    reverse[j] = '\0';
    printf("%s\n", reverse);
    return 0;
}