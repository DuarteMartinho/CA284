/*
* Author: Duarte Martinho
* Purpose: Accepts the data which contains n number of integers in the first n arguments from the command line. 
* The last argument refers to the statistical indicator we want to calculate from the given data as follows:
* - 1 = Max: Find the maximum value of the data
* - 2 = Mode: Find the most frequent value, you can assume there is only one most frequent value.
* - 3 = Standard Deviation: Calculate the Population standard deviation of the data. You can display the SD value with two digits after the decimal point.
* - Default option will be finding maximum value (if the last argument is none of above, e.g. 4, 5, 6 etc.).
*
* Date: 09/12/2021
* Language:  C
*/

/* My Approach
* - I started by making the array
* - Then i worked in each function max, mode and standard deviation
* - Then the switch case
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Defines */
#define MAX 50

/* Function Prototypes */
int * makeArray(char *args[], int len);
int findMax(int array[MAX], int len);
int findMode(int array[MAX], int len);
float findSD(int array[MAX], int len);

int main(int argc, char*argv[]) {
    int *array, length = argc - 2, val;
    int (*pfunction)(int[MAX], int);
    array = makeArray(argv, length);
    switch (atoi(argv[argc - 1])) {
        case 1:
            pfunction = findMax;
            break;
        case 2:
            pfunction = findMode;
            break;
        case 3:
            printf("%.2f\n", findSD(array, length));
            break;
        default:
            pfunction = findMax;
            break;
    }
    if (atoi(argv[argc - 1]) != 3) printf("%d\n", pfunction(array, length));
    return 0;
}

/*
* Function Name: makeArray 
* Description: makes the array and returns it as a strin
* Args: args from command line and length
* Returns: int array
*/
int * makeArray(char *args[], int len) {
    static int array[MAX];
    for (int i = 0; i < len; i++) {
        array[i] = atoi(args[i + 1]);
    }
    return array;
}

/*
* Function Name: findMax
* Description: calculates the max
* Args: array and length of array
* Returns: int value of the max
*/
int findMax(int array[MAX], int len) {
    int max = 0;
    for (int i = 0; i < len; i++) if (array[i] > max) max = array[i];
    return max;
}

/*
* Function Name: findMode
* Description: calculates the mode
* Args: array and length of array
* Returns: int value of the the mode
*/
int findMode(int array[MAX], int len) {
    int mode = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (array[i] < array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    int result = 0, currMode = 0;
    for (int i = 0; i < len; i++) {
        int val = array[i], count = 0;
        for (int j = 0; j < len; j++) {
            if (val == array[j]) {
                count++;
            }
        }
        if (currMode < count) {
            currMode = count;
            result = array[i];
        }
    }
    return result;
}

/*
* Function Name: findSD
* Description: calculates the standard deviation
* Args: array and length of array
* Returns: float value of the standard deviation
*/
float findSD(int array[MAX], int len) {
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < len; i++) {
        sum += array[i];
    }
    mean = sum / len;
    for (i = 0; i < len; i++) {
        SD += pow(array[i] - mean, 2);
    }
    return sqrt(SD / len);
}
