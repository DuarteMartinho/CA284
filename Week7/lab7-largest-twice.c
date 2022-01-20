#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void makeList(int *plist, int n, char*argv[]);
void findLargest(int n, int *plist, int *plargest);
void findSmallest(int n, int *plist, int *psmallest);

int main(int argc, char*argv[]) {
    int size = argc - 1;
    int *plist = calloc(size, sizeof(int));
    makeList(plist, size, argv);
    int largest, smallest;
    findLargest(size, plist, &largest);
    findSmallest(size, plist, &smallest);

    if (largest >= (smallest * 2)) {
        printf("%d\n", largest);
    } else {
        printf("%d\n", 0);
    }

    return 0;
}

void makeList(int *plist, int n, char*argv[]) {
    for (int i = 0; i < n; i++) {
        *(plist + i) = atoi(argv[i + 1]);
    }
}

void findLargest(int n, int *plist, int *plargest) {
    int largest = plist[0];
    for (int i = 1; i < n; i++) {
        if (plist[i] > largest) {
            largest = plist[i];
        }
    }
    *plargest = largest;
}

void findSmallest(int n, int *plist, int *psmallest) {
    int smallest = plist[0];
    for (int i = 1; i < n; i++) {
        if (plist[i] < smallest) {
            smallest = plist[i];
        }
    }
    *psmallest = smallest;
}