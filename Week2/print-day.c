#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    if (argc != 2 || atoi(argv[1]) > 7 || atoi(argv[1]) < 1) {
        printf("Please input only one argument! Only accepeted 1 - 7\n");
        return 0;
    }
    char weekday[7][15] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    };

    printf("%s\n", weekday[atoi(argv[1]) - 1]);
}