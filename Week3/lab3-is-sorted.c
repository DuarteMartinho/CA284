#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int* searchArray(int array[], int arrayLength);

int main(int argc, char*argv[]) {
    int arrayLength = argc - 1;
    int array[arrayLength];
    int* sortedNums;
    for (int i = 0; i < arrayLength; i++) {
        array[i] = atoi(argv[i + 1]);
    }
    sortedNums = searchArray(array, arrayLength);
    for (int i = 0; i < arrayLength; i++) {
        printf("%d\n", sortedNums[i]);
    }
    return 0;
}

int* searchArray(int array[], int arrayLength) {
    int i, j;
    for (i = 0; i < arrayLength; i++) {
        for (j = 0; j < arrayLength; j++) {
            
            // printf("%d %d\n", array[i], array[j]);
            if (array[i] < array[j]) {
                int temp;
                // printf("%d %d\n", array[i], array[j]);
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                // printf("%d %d\n", array[i], array[j]);
            }
        }
    }
    return array;
}