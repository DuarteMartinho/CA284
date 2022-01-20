#include <stdio.h>

int main(int argc, char*argv[]) {
    int number1, number2, sum;
    printf("input number1: ");
    scanf("%d", &number1);
    printf("input number2: ");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("The sum result is %d\n", sum);
    return 0;
}