/*
 * Author: Duarte Martinho
 * Purpose: Accepts inputs as a set of integer numbers. 
 * The program calculates the summary of the odd elements and subtract the 2nd, 3rd etc. 
 * even elements from the first even element.
 * Language:  C
 */
#include <stdio.h>
#include <stdlib.h>

void loopargs(int *arrayInt, int length);
void addEven(int *even, int val);
void addOdd(int *odd, int val);

int main(int argc, char*argv[]) {
    int args[50];
    for (int i = 0; i < (argc - 1); i++) {
        args[i] = atoi(argv[i + 1]);
    }
    loopargs(args, argc - 1);
    return 0;
}

/*
* Function Name: loopargs
* Description: Loops thrugh 
* Args: 
* Returns: 
*/
void loopargs(int *arrayInt, int length) {
    int even = 0;
    int odd = 0;
    for (int i = 0; i < length; i++) {
        if (arrayInt[i] % 2 == 0) {
            // printf("%d even\n", arrayInt[i]);
            addEven(&even, arrayInt[i]);
        } else if (arrayInt[i] % 2 == 1) {
            // printf("%d odd\n", arrayInt[i]);
            addOdd(&odd, arrayInt[i]);
        }
        // printf("--- %d odd || %d even ---\n", odd, even);
    }
    printf("%d\n", odd);
    printf("%d\n", even);
}

/*
* Function Name: addEven
* Description: Treats even numbers
* Args: even pointer, val to be added
* Returns: void
*/
void addEven(int *even, int val) {
    if (*even == 0) {
        *even = val;
    } else {
        *even -= val;
    }
}

/*
* Function Name: addOdd
* Description: Treats odd numbers
* Args: odd pointer, val to be added
* Returns: void
*/
void addOdd(int *odd, int val) {
    *odd += val;
}