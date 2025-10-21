/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/
#include <string.h>


int main(int argc, char *argv[])
{
  int result = 0;
  int target = atoi(argv[1]);
  for(int i =2; i < argc - 1;i++){
    if(atoi(argv[i]) == target){
        printf("Found %d at %d\n", target, i-2);
        return 0;
    }
  }
  printf("Not Found!\n");
}