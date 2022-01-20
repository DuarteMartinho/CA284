/*
* Author: Duarte Martinho
* Purpose: prints the numbers in the hailstones sequence starting at n and continuing until the sequence reaches 1.
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>

void startLoop(int n);
void treatEven(int *n);
void treatOdd(int *n);

int main(int argc, char*argv[]) {
    int n = atoi(argv[1]);
    startLoop(n);
}

/*
* Function Name: startLoop
* Description: make a loop until it reaches 1
* Args: int number which represents start
* Returns: void
*/
void startLoop(int n) {
    printf("%d", n);
    while (n != 1) {
        if (n % 2 == 0) {
            treatEven(&n);
        } else if (n % 2 == 1) {
            treatOdd(&n);
        }
        printf(" %d", n);
    }
    printf("\n");
}

/*
* Function Name: treatEven
* Description: treat even numbers, divide by 2 
* Args: n pointer
* Returns: void
*/
void treatEven(int *n) {
    *n = *n / 2;
}

/*
* Function Name: treatOdd
* Description: treat odd numbers, multiply by 3 add 1 
* Args: n pointer
* Returns: void
*/
void treatOdd(int *n) {
    *n = (*n * 3) + 1;
}