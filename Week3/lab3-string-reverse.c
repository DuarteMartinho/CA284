#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char*argv[]) {
    char string[50];
    char reverse[50];
    int i, length;
    strcpy(string, argv[1]);
    length = strlen(string);
    i = 0;
    // printf("%d", length);
    do {
        reverse[i] = string[length - i - 1];
        i++;
    } while (i < length);
    printf("%s\n", reverse);
    return 0;
}