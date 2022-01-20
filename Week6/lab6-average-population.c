#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Country {
    char name[100];
    char capital[100];
    float population;
    int size;
};

typedef struct Country Country;

int main(int argc, char*argv[]) {
    int i = 1, count = 0;
    Country countries[50];
    do {
        strcpy(countries[count].name, argv[i++]);
        strcpy(countries[count].capital, argv[i++]);
        countries[count].population = atof(argv[i++]);
        countries[count].size = atoi(argv[i++]);
        count++;
    } while (i < argc);

    printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
    float average = 0.0;
    for (int j = 0; j < count; j++) {
        average += countries[j].population;
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", countries[j].name, countries[j].capital, countries[j].size, countries[j].population);
    }

    printf("Population average: %.2f\n", average / count);

    
    return 0;
}