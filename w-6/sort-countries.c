/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct Country {
    char name[100];
    char capital[100];
    float pop;
    int size;
} Country;

void sortCountries(Country countries[],int *numCountries);
void printTable(Country countries[],int *numCountries);

int main(int argc, char *argv[])
{  
    int numCountries = (argc -1) /4;
    Country countries[numCountries];

    for(int i = 0 ;i < numCountries;i++){
        int start = 1 + i * 4;

        strcpy(countries[i].name, argv[start]);
        strcpy(countries[i].capital, argv[start +1]);
        countries[i].pop = atof(argv[start+2]);
        countries[i].size = atoi(argv[start+3]);

    }
    sortCountries(countries, &numCountries);
    printTable(countries, &numCountries);
}

void sortCountries(Country countries[],int *numCountries){
    Country temp;
    for(int i =0; i < *numCountries - 1;i++){
        for(int j= 0;j < *numCountries - i -1; j++){
            if(countries[j].pop < countries[j+1].pop){
                temp = countries[j];
                countries[j] =countries[j+1];
                countries[j+1] = temp;
            }
        }
    }
}
void printTable(Country countries[],int *numCountries){
    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
    for(int i =0;i < *numCountries;i++){
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", countries[i].name, countries[i].capital, countries[i].size, countries[i].pop);
    }
}