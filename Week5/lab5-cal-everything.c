#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sum(float number1, float number2);
float diff(float number1, float number2);
float product(float number1, float number2);
float division(float number1, float number2);
float power(float number1, float number2);
float nlog(float number1, float number2);

int main(int argc, char*argv[]) {
    float num1, num2, resSum, resDiff, resPower, resDiv, resProd, resNLog;
    num1 = atof(argv[1]);
    num2 = atof(argv[2]);
    resSum = sum(num1, num2);
    resDiff = diff(num1, num2);
    resProd = product(num1, num2);
    resDiv = division(num1, num2);
    resPower = power(num1, num2);
    resNLog = nlog(num1, num2);
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n", resSum, resDiff, resProd, resDiv, resPower, resNLog);
    return 0;
}

float sum(float number1, float number2) {
    return (number1 + number2);
}
float diff(float number1, float number2) {
    return (number1 - number2);
}
float product(float number1, float number2) {
    return (number1 * number2);
}
float division(float number1, float number2) {
    return (number1 / number2);
}
float power(float number1, float number2) {
    return pow(number1, number2);
}
float nlog(float number1, float number2) {
    return log(number1) + log(number2);
}