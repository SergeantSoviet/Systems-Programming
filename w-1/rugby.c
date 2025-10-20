#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 5){
        printf("Usage: %s <t,c,p,d>\n", argv[0]);
        return 1;
    }
    int result = 0;
    int try = atof(argv[1]);
    int conversion = atof(argv[2]);
    int penalty = atof(argv[3]);
    int dropGoal = atof(argv[4]);

    result = (try * 5) + (conversion * 2) + (penalty * 3) + (dropGoal * 3);

    printf("%d\n", result);
}