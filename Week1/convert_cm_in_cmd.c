#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    float cm, inches;
    cm = atof(argv[1]);
    inches = cm / 2.54;
    printf("The Amount in Inches is: %.2f\n", inches);
    return 0;
}