#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) { 

    int countryCode;

    if (argc == 2) {
        countryCode = atoi(argv[1]);
        switch (countryCode) {
            case 353:
                printf("Ireland\n");
                break;
            case 44:
                printf("England\n");
                break;
            case 33:
                printf("France\n");
                break;
            case 34:
                printf("Spain\n");
                break;
            default: 
                printf("Unknown country code\n");
        }
    } else {
        printf("Please only enter one argument\n");
    }

    

    return 0;
}