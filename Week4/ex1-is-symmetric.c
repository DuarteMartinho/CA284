/*
* Author: Duarte Martinho
* Purpose: 
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkSymmetry(char *word);

int main(int argc, char*argv[]) {
    char *word = argv[1];
    // printf("%s\n", word);
    int res = checkSymmetry(word);
    switch (res) {
        case 0: 
            printf("yes\n");
            return 0;
        case 1: 
            printf("no\n");
            return 0;
    }
    return 0;
}


/*
* Function Name: checkSymmetry
* Description: Check symmetry of a return 0 or 1.
* Args: word as a string
* Returns: 1 for not symmetric and 0 for it is symmetric
*/
int checkSymmetry(char *word) {
    // printf("%s\n", word);
    int length = strlen(word) / 2;
    int i = 0;
    for (int i = 0; i < length; i++) {
        // printf("%c %d\n", word[i], i);
        if (word[i] != word[strlen(word) - i - 1]) {
            // printf("%c %c\n", word[i], word[strlen(word) - i - 1]);
            return 1;
        }
    }
    return 0;
}