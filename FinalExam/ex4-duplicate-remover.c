/*
* Author: Duarte Martinho
* Purpose: Accepts n arguments of integers. 
* The program removes all duplicated numbers and print all non-duplicated elements in ascending order. 
* Note that the duplicated values are removed completely, including the value itself.
* Date: 09/12/2021
* Language:  C
*/

/* My Approach
* - Started by using linked list and then it didn't work as i wasn't able to implement a way to delete more than one element at a time
* - I then made a simple array and check how many times that element appeared in the array
* - I then printed the new array with only elements that appeared once
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Defines */
#define MAX 50

typedef struct List List;

struct List {
    int num;
    List *next;
    List *prev;
};

/* Function Prototypes */
int countArray(int array[MAX], int length, int current);
void printArray(int array[MAX], int length);

int main(int argc, char*argv[]) {
    int array[MAX], newArray[MAX];
    int length = argc - 1,  i, j = 0, newlength = 0;
    for (int i = 0; i < length; i++) {
        array[i] = atoi(argv[i + 1]);
    }
    for (i = 0; i < length; i ++)  
    {
        if (countArray(array, length, array[i]) == 1) {
            newArray[newlength] = array[i];
            newlength++;
        }
    }
    printArray(newArray, newlength);
    return 0;
}

/*
* Function Name: countArray
* Description: counts occurrences of current element in the array
* Args: int array, int length of the array, int current value 
* Returns: int count of apperances
*/
int countArray(int array[MAX], int length, int current) {
    int count = 0, j;
    for (j = 0; j < length; j++) {
        if (current == array[j]) {
            count++;
        }
    }
    return count;
}

/*
* Function Name: printArray
* Description: prints array
* Args: int array, int length of the array 
* Returns: void
*/
void printArray(int array[MAX], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }
}