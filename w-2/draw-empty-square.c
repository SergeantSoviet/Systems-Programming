/* includes*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int rows = atoi(argv[1]);
    
    for (int i = 0;i < rows;i++){
        for (int j = 0;j < rows;j++){
            if(i == 0 || i == rows - 1||j==0 ||j==rows-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    // for(int i =0;i < rows;i++){
    //     if(i == 0 || i == rows - 1 ){
    //         for(int j = 0; j < rows;j++){
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    //     else{
    //         for(int j = 0; j < rows;j++){
    //             if(j == 0 || j == rows -1 ){
    //                 printf("*");
    //             }
    //             else {
    //                 printf(" ");
    //             }
    //         }
    //         printf("\n");
    //     }
    // }

}