#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getMaxVal(int array[], int arrayLength);

int main(int argc, char*argv[]) {
    int arrayLength = argc - 1;
    int array[arrayLength];
    int maxVal;
    for (int i = 0; i < arrayLength; i++) {
        array[i] = atoi(argv[i + 1]);
    }
    maxVal = getMaxVal(array, arrayLength);
    printf("%d\n", maxVal);
    return 0;
}

int getMaxVal(int array[], int arrayLength) {
    int i, highest;
    i = 0;
    highest = 0;
    for ( i = 0; i < arrayLength; i++) {
        if (array[i] > highest) {
            // printf("%d\n", array[i]);
            highest = array[i];
        }
    }
    return highest;
}