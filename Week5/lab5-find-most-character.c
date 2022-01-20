#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkCharacter(char c, int array[256], int *max, char *result);

int main(int argc, char*argv[]) {
    char *word = argv[1];
    int array[256] = {0};
    char result;
    int max = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (isgraph(word[i])) {
            checkCharacter(word[i], array, &max, &result);
        }
    }
    printf("%c\n", result);
    return 0;
}

int checkCharacter(char c, int array[256], int *max, char *result) {
    array[c]++;
    if (*max < array[c]) {
        *max = array[c];
        *result = c;
    }
    return 0;
}
