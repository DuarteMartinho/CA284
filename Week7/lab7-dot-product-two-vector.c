#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void calculateTotal(int *pTotal, int *pV1, int *pV2, int n);

int main(int argc, char*argv[]) {
    int n = atoi(argv[1]);
    int *pv1 = calloc(n, sizeof(int));
    int *pv2 = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        *(pv1 + i) = atoi(argv[2 + i]);
        *(pv2 + i) = atoi(argv[2 + i + n]);
    }
    int total = 0;
    calculateTotal(&total, pv1, pv2, n);
    printf("%d\n", total);
    return 0;
}

void calculateTotal(int *pTotal, int *pV1, int *pV2, int n) {
    for (int i = 0; i < n; i++) {
        // printf("%d\n", (pV1[i]) * (pV2[i]));
        *pTotal += (pV1[i]) * (pV2[i]);
    }
}