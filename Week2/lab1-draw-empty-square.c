#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc != 2) {
        printf("One argument is required!\n");
        return 0;
    }
    int n = atoi(argv[1]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { 
            if (i == 0 || i == n - 1) {
                printf("*");
            }
            else if (j == 0 || j == n - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}