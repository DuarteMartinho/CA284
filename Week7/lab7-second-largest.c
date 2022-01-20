#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void findSecondLargest(int n, float *plist, float *sLargest);

int main(int argc, char*argv[]) {
    int size = argc - 1;
    float *pList = calloc(size, sizeof(float));
    for (int i = 0; i < size; i++) {
        *(pList + i) = atof(argv[i + 1]);
    }
    float secondLargest;
    findSecondLargest(size, pList, &secondLargest);
    printf("%.1f\n", secondLargest);
    return 0;
}

void findSecondLargest(int n, float *plist, float *sLargest) {
    float largest, secondLargest;
    for (int i = 0; i < n; i++) {
        if (plist[i] > largest) {
            secondLargest = largest;
            largest = plist[i];
            // printf("1 %.1f\n", largest);
        }
        if (plist[i] < largest && secondLargest < plist[i]) {
            secondLargest = plist[i];
            // printf("2 %.1f\n", secondLargest);
        }
    }
    *sLargest = secondLargest;
}