/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int startIndex = 0;
    int endIndex;
    int longestWord = 0;
    int longestStartIndex = 0;
    int longestEndIndex = 0;
    int count = 0;

    for(int i = 0;i < strlen(argv[1]);i++){
        // printf("%c\n", argv[1][i]);
        if(argv[1][i] != ' '){
            count++;
        }
        else{
            endIndex = i;
            if(count > longestWord){
                longestWord = count;
                longestStartIndex = startIndex;
                longestEndIndex = endIndex;
            }
            startIndex = i+1;
            count = 0;
        }
    }
    if (count > longestWord) {
        longestWord = count;
        longestStartIndex = startIndex;
        longestEndIndex = strlen(argv[1]) - 1;
    }
    // printf("%d %d %d\n", longestWord, longestStartIndex, longestEndIndex);
    for(int i = 0;i < longestWord;i++){
        printf("%c", argv[1][i+longestStartIndex]);
    }
    printf("\n");
}