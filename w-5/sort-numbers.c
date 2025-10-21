/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void sortASC(int *len, int *nums);
void sortDESC(int *len, int *nums);
void printNums(int *len, int *nums);

int main(int argc, char *argv[])
{
    int len = atoi(argv[1]);
    int nums[100];
    char *string = argv[len + 2];

    for(int i =0;i < len;i++){
        nums[i] = atoi(argv[i+2]);
    }
    if(strcmp(string, "asc") == 0){
        sortASC(&len, nums);
    }
    else if (strcmp(string, "desc") == 0){
        sortDESC(&len, nums);
    }

    printNums(&len, nums);
}

void sortASC(int *len, int *nums){
    int temp;

    for(int i =0;i < *len - 1;i++){
        for(int j = 0;j < *len -i-1;j++){
            if(nums[j] > nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}
void sortDESC(int *len, int *nums){
        int temp;

    for(int i =0;i < *len - 1;i++){
        for(int j = 0;j < *len -i-1;j++){
            if(nums[j] < nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

void printNums(int *len, int *nums){
    for(int i= 0;i < *len;i++){
        printf("%d\n", nums[i]);
    }
}
