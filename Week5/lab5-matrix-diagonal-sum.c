#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int calculateTotal(int rows, int cols, int array[rows][cols]);

int main(int argc, char*argv[]) {
    int n = atoi(argv[1]), pos = 2, result;
    int array[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = atoi(argv[pos]);
            pos++;
        }
    }
    result = calculateTotal(n, n, array);
    printf("%d\n", result);
    return 0;
}

int calculateTotal(int rows, int cols, int array[rows][cols]) {
    int res = 0;
    for (int i = 0; i < rows; i++) {
        res += array[i][i];
    }
    return res;
}