/* includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct City {
    char name[100];
    float size;
} City;

typedef struct Country {
    char name[100];
    City city[3];

} Country;

void sortBySize(Country countries[] ,int *numCountries);
void printTable(Country countries[] ,int *numCountries);

int main(int argc, char *argv[])
{  
    int numCountries = (argc -1) /7;
    Country countries[numCountries];

    for(int i = 0 ;i < numCountries;i++){
        int start = 1 + i * 7;

        strcpy(countries[i].name, argv[start]);
        for(int j = 0; j <3;j++){
            strcpy(countries[i].city[j].name, argv[start+1+j*2]);
            countries[i].city[j].size = atof(argv[start+2+j*2]);
        }
    }

    sortBySize(countries, &numCountries);
    printTable(countries, &numCountries);
}

void sortBySize(Country countries[] ,int *numCountries){
    City temp;
    for(int i =0; i < *numCountries - 1;i++){
        for(int j= 0;j < 2; j++){
            if(countries[i].city[j].size < countries[i].city[j+1].size){
                temp = countries[i].city[j];
                countries[i].city[j] =countries[i].city[j+1];
                countries[i].city[j+1] = temp;
            }
        }
    }
}
void printTable(Country countries[] ,int *numCountries){
    for(int i = 0;i < *numCountries;i++){
        printf("%s: %s\n", countries[i].name, countries[i].city[0].name);
    }
}
