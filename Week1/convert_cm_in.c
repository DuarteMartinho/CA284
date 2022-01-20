#include <stdio.h>

int main() {
    float cm, inches;
    printf("Enter the Amount in Centimetres: ");
    scanf("%f", &cm);
    inches = cm / 2.54;
    printf("The Amount in Inches is: %.2f\n", inches);
    return 0;
}