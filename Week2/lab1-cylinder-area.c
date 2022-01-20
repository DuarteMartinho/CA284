#include <stdio.h>
#include <stdlib.h>

#define PI 3.14151

int main(int argc, char*argv[]) {
    // printf("%d\n", argc);
    if (argc == 1) {
        printf("No input given!\n");
    }
    else if (argc < 3 || argc > 3) {
        printf("Two arguments needed!\n");
    }
    else if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0) {
        printf("The radious or height cannot be negative!\n");
    } else {
        float circle, rectangle, circumference, height, radius, radiusSquared, cylinder;
        radius = atof(argv[1]);
        height = atof(argv[2]);

        radiusSquared = radius * radius;

        circle = radiusSquared * PI;
        circumference = (radius * 2) * PI;
        rectangle = height * circumference;
        cylinder = circle + circle + rectangle;

        printf("%.2f\n", cylinder);
    }
    return 0;
}