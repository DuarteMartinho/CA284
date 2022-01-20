#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    int inputs[argc - 1];
    int evenFound = 0;
    for (int i = 0; i < argc - 1; i++) {
        inputs[i] = atoi(argv[i + 1]);
    }
    for (int i = 0; i < argc - 1; i++) {
        int input;
        input = inputs[i];
        if (input % 2 == 0) {
            evenFound = 1;
            printf("%d - %d\n", i, input);
        }
    }
    if (evenFound == 0) {
        printf("Not found!\n");
    }
    return 0;
}