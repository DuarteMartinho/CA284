#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc > 1) {
        int inputs[argc - 1];
        int total = 0;
        for (int i = 0; i < argc - 1; i++) {
            inputs[i] = atoi(argv[i + 1]);
        }
        for (int i = 0; i < argc - 1; i++) {
            int input;
            input = inputs[i];
            if (input % 2 != 0) {
                total++;
            }
        }
        printf("%d\n", total);
    } else {
        printf("Please input some numbers\n");
    }
    return 0;
}
