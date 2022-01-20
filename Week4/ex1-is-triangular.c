/*
* Author: Duarte Martinho
* Purpose: Takes one integer command line argument and determines whether it is a triangular number.
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>

void searchTriangularNumber(int tNumber);

int main(int argc, char*argv[]) {
    int triangularNumber = atoi(argv[1]);
    searchTriangularNumber(triangularNumber);
    return 0;
}

/*
* Function Name: searchTriangularNumber
* Description: loop through and check if value is triangular.
* Args: int number to check if it is triangular.
* Returns: void
*/
void searchTriangularNumber(int tNumber) {
    int val = 1;
    int i = 2;
    while (val < tNumber) {
        val += i;
        i++;
        // printf("-- %d \n", val);
    }

    if (val == tNumber) {
        // printf("triangularNumber %d \n", val);
        printf("%d is a triangular number\n", tNumber);
    } else {
        printf("%d is not a triangular number\n", tNumber);
    }
}