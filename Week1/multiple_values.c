#include <stdio.h>
#include <stdlib.h>

float getInches(int val) {
    return (val * 2.54);
}

int main(int argc, char*argv[]) {
    float lowerbound, upperbound, inches;
    lowerbound = 30;
    upperbound = 50;

   
    printf("%.2f %.2f %.2f %.2f %.2f\n", getInches(30), getInches(31), getInches(32), getInches(33), getInches(34));
    printf("%.2f %.2f %.2f %.2f %.2f\n", getInches(35), getInches(36), getInches(37), getInches(38), getInches(39));
    printf("%.2f %.2f %.2f %.2f %.2f\n", getInches(40), getInches(41), getInches(42), getInches(43), getInches(44));
    printf("%.2f %.2f %.2f %.2f %.2f\n", getInches(45), getInches(46), getInches(47), getInches(48), getInches(49));
    return 0;
}