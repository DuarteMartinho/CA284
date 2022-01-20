#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int searchArray(int array[], int arrayLength, int number);

int main(int argc, char*argv[]) {
    int arrayLength = argc - 2;
    int array[arrayLength];
    int position, searchNum;
    searchNum = atoi(argv[1]);
    for (int i = 0; i < arrayLength; i++) {
        array[i] = atoi(argv[i + 2]);
    }
    position = searchArray(array, arrayLength, searchNum);
    if (position != 0) {
        printf("Found %d at %d\n", searchNum, position);
    } else {
        printf("%d not found\n", searchNum);
    }
    return 0;
}

int searchArray(int array[], int arrayLength, int number) {
    int i;
    for (i = 0; i < arrayLength; i++) {
        if (array[i] == number) {
            return i;
        } 
    }
    return 0;
}