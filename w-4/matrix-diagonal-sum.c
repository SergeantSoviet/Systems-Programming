/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumOfDiag(int (*pMatrix)[100], int numOfRows);

int main(int argc, char *argv[])
{
    int numOfRows = atoi(argv[1]);

    int matrix[100][100];
    int(*pMatrix)[100] = matrix;

    for(int i = 0;i<numOfRows;i++){
        for(int j = 0;j < numOfRows;j++){
             *(*(pMatrix+i)+j)= atoi(argv[i * numOfRows + j + 2]);
        }
    }
    int sum = sumOfDiag(pMatrix, numOfRows);

    printf("%d\n", sum);
}

int sumOfDiag(int (*pMatrix)[100], int numOfRows){
    int sum = 0;
    int *pSum = &sum;

    for(int i =0;i<numOfRows;i++){
        *pSum += *(*(pMatrix+i)+i);
    }
    return *pSum;
}   
