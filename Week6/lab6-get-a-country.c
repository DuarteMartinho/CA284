#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Country {
    char *name[100];
    char *capital[100];
    float population;
    int size;
};

typedef struct Country Country;

int main(int argc, char*argv[]) {
    
    if (argc == 5 ) {
        Country country = {
            .name = argv[1],
            .capital = argv[2],
            .population = atof(argv[3]),
            .size = atoi(argv[4])
        };
        printf("%s\n",*country.name);
        printf("%s\n",*country.capital);
        printf("%.2f million people\n",country.population);
        printf("%d km2\n",country.size);
    }
    
    return 0;
}