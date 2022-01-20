#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int resultsSeenArray[1000] = {};
int arrayLength = 0; 

int checkIfAlreadyHappened(int sumResult);
int calcSquare(int digit);
int addDigitSquare(int number);
int startLoop(int number);

int main(int argc, char* argv[]) {
    char* number = argv[1];
    int val;
    val = startLoop(atoi(number));
    if (val == 0) {
        printf("is happy\n");
    } else {
        printf("not happy\n");
    }
    // output = addDigitSquare();
    return 0;
}

int startLoop(int number) {
    int sum, hasHappened;
    sum = addDigitSquare(number);
    // printf("%d\n", sum);
    while (sum != 1) {
        sum = addDigitSquare(sum);
        // printf("OUTPUT -> %d\n", sum);
        hasHappened = checkIfAlreadyHappened(sum);
        // printf("%d\n", hasHappened);
        if (hasHappened == 1) {
            return 1;
        }
    }
    return 0;
}

int addDigitSquare(int number) {
    int output, sum = 0;
    int numberInt = number;
    while (numberInt > 0) {
        int val = numberInt % 10;
        sum += calcSquare(val);
        numberInt /= 10;
    }
    return sum;
}

int calcSquare(int digit) {
    return digit * digit;
}

int checkIfAlreadyHappened(int sumResult) {
    if (arrayLength == 0) {
        resultsSeenArray[0] = sumResult;
        arrayLength = 1;
    } else {
        for (int i = 0; i < arrayLength; i++) {
            if (resultsSeenArray[i] == sumResult) {
                return 1;
            }
        }
        resultsSeenArray[arrayLength] = sumResult;
        arrayLength++;
    }
    // printf("%d\n", resultsSeenArray[0]);
    return 0;
}