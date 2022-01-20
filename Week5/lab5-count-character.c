#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void isCharacter(char *c, char *check, int *total);

int main(int argc, char*argv[]) {
    char *letter = argv[1];
    char *word = argv[2];
    int total = 0;
    for (int i = 0; i < strlen(word); i++) {
        isCharacter(letter, &word[i], &total);
        // printf("%c %d\n", word[i], total);
    }
    printf("%d\n", total);
    return 0;
}

void isCharacter(char *c, char *check, int *total) {
    if (*c == *check) {
        *total += 1;
        
    }
}
