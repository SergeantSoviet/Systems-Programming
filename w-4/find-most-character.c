/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void mostFreqChar(char *string);
void sortString(char *string);
int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    char string[100];
    strcpy(string, argv[1]);
    
    if (strlen(string) == 0) {
        printf("Empty string.\n");
        return 0;
    }
    sortString(string);
    mostFreqChar(string);
    // printf("%s\n", string);
}

void mostFreqChar(char *string){

    char mostFreqChar;
    int mostFreq = 0;
    int count = 1;
    int len = strlen(string);

    for(int i= 0; i < len - 1;i++){
        if(string[i] == string[i+1]){
            count++;
        }
        else {
            if(count > mostFreq){
                mostFreq = count;
                mostFreqChar = string[i];
            }
            count = 1;
        }
    }
    printf("%c\n", mostFreqChar);    
}

void sortString(char * string){
    char temp;
    for(int i =0;i < strlen(string) - 1;i++){
        for (int j = 0 ; j < strlen(string) - i - 1;j++){
            if(string[j] > string[j+1]){
                temp = string[j];
                string[j] = string[j+1];
                string[j+1] = temp;
            }
        }
    }
}