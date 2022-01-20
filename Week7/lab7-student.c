#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Student Student;

struct Student {
    char Name[20];
    char Programme[20];
    float Grade;
};


int main(int argc, char*argv[]) {
    int size = (argc - 1) / 3, k = 0;
    Student studens[size];
    for (int i = 0; i < size; i++) {
        strcpy(studens[i].Name, argv[1 + (k * 3) + 0]);
        strcpy(studens[i].Programme, argv[1 + (k * 3) + 1]);
        studens[i].Grade = atof(argv[1 + (k * 3) + 2]);
        k++;
    }
    for (int j = 0; j < size; j++) {
        printf("%s, %s, %.2f\n", studens[j].Name, studens[j].Programme, studens[j].Grade);
    }
    return 0;
}