#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char*argv[]) {
    int size = argc - 1;
    char *plist = malloc (100 * sizeof(char *));
    int largest = 0;
    for (int i = 0; i < size; i++) {
        if (strlen(argv[i + 1]) > largest) largest = strlen(argv[i + 1]);
    }
    // printf("%d\n", largest);
    for (int i = 0; i < size; i++) {
        if (strlen(argv[i + 1]) >= largest) printf("%s\n", argv[i + 1]);
    }
    return 0;
}