#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void convert2dec(long int n, int *dec);

int main(int argc, char*argv[]) {
    if (argc > 9) {
        printf("Too many binary digits entered.\n");
        exit(0);
    } else {
        char val[15];
        for (int i = 1; i < argc; i++) {
            if (strcmp(argv[i], "1") != 0 && strcmp(argv[i], "0") != 0 ) {
                printf("Only digits 1 and 0 are permitted.\n");
                exit(0);
            } else {
                strcpy(&val[i - 1], argv[i]);
            }
        }
        int dec;
        convert2dec(atoi(val), &dec);
        printf("%d\n", dec);
    }
    return 0;
}

void convert2dec(long int n, int *dec) {
  int i = 0, remainder;
  *dec = 0;
  while (n != 0) {
    remainder = n % 10;
    n = n / 10;
    *dec += remainder * pow(2, i);
    i++;
  }
}