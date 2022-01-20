#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc != 3) {
        printf("Please input enough arguments!\n");
        return 0;
    }
    int length, height;
    length = atoi(argv[1]);
    height = atoi(argv[2]);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < length; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}