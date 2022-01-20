#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float multiplicationCalc(float number1, float number2);
float divisionCalc(float number1, float number2);

int main(int argc, char*argv[]) {
    char multiply[] = "multiply";
    int compare;
    float val;
    compare = strcmp(argv[1], multiply);

    if (compare == 0) {
        val = multiplicationCalc(atof(argv[2]), atof(argv[3]));
        printf("%f\n", val);
    } else if (atof(argv[3]) > 0) {
        val = divisionCalc(atof(argv[2]), atof(argv[3]));
        printf("%f\n", val);
    } else {
        printf("invalid\n");
    }
    return 0;
}

float multiplicationCalc(float number1, float number2) {
    return number1 * number2;
}

float divisionCalc(float number1, float number2) {
    return number1 / number2;
}