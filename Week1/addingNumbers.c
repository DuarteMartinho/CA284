#include <stdio.h>

int main() {
    long val1, val2, sum1, sum2;
    val1 = 15000;
    val2 = 15000;
    sum1 = val1 + val2;
    printf("%ld\n", sum1);
    val1 += 2000;
    val2 += 2000;
    sum2 = val1 + val2;
    printf("%ld\n", sum2);
    return 0;
}