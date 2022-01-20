#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Country Country;
typedef struct City City;

struct City {
    char name[100];
    float size;
};

struct Country {
    char name[100];
    City cities[3];
};


int main(int argc, char*argv[]) {
    int i = 1, countryCount = 0, cityCount = 0;
    Country countries[50];
    strcpy(countries[countryCount].name, argv[i++]);
    do {
        if (cityCount < 3) {
            strcpy(countries[countryCount].cities[cityCount].name, argv[i++]);
            countries[countryCount].cities[cityCount].size = atof(argv[i++]);
            cityCount++;
        } else {
            countryCount++;
            strcpy(countries[countryCount].name, argv[i++]);
            cityCount = 0;
        }
        
        
    } while (i < argc);

    for (int k = 0; k < countryCount + 1; k++) {
        City temp = countries[k].cities[0];
        for (int j = 1; j < 3; j++) {
            if (countries[k].cities[0].size < countries[k].cities[j].size) {
                temp = countries[k].cities[j];    
            }
        }
        printf("%s: %s\n", countries[k].name, temp.name);
    }
    return 0;
}