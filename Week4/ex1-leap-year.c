/*
* Author: Duarte Martinho
* Purpose: Prints out all leap years between the first number and the second number inclusive.
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>

void startLoop(int year1, int year2);
int checkIfLeapYear(int year);

int main(int argc, char*argv[]) {
    int year1, year2;
    year1 = atoi(argv[1]);
    year2 = atoi(argv[2]);
    startLoop(year1, year2);
}

/*
* Function Name: startLoop
* Description: loops through the years between year 1 and year 2
* Args: interger year1, interger year2
* Returns: void
*/
void startLoop(int year1, int year2) { 
    for (int year = year1; year <= year2; year++) {
        if (checkIfLeapYear(year) == 0) {
            printf("%d\n", year);
        }
    }
}

/*
* Function Name: checkIfLeapYear
* Description: Checks if a given year is a leap year2
* Args: interger year
* Returns: int 0 for leap year and 1 for not leap year
*/
int checkIfLeapYear(int year) {
    if (year % 400 == 0) {
        return 0;
    } else if (year % 100 != 0 && year % 4 == 0) {
        return 0;
    } else {
        return 1;
    }
}
