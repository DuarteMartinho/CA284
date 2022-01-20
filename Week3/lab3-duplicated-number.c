#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int searchArray(int array[], int arrayLength);

int main(int argc, char*argv[]) {
    int arrayLength = argc - 1;
    int array[arrayLength];
    int numDuplicated;
    for (int i = 0; i < arrayLength; i++) {
        array[i] = atoi(argv[i + 1]);
    }
    numDuplicated = searchArray(array, arrayLength);
    if (numDuplicated != 0) {
        printf("%d\n", numDuplicated);
    } else {
        printf("no duplicated number\n");
    }
    return 0;
}

int searchArray(int array[], int arrayLength) {
    int i, j;
    for (i = 0; i < arrayLength; i++) {
        for (j = i + 1; j < arrayLength; j++) {
            // printf("%d %d\n", array[i], array[j]);
            if (array[i] == array[j]) {
                return array[i];
            }
        }
    }
    return 0;
}