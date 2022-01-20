/*
* Author: Duarte Martinho
* Purpose:  Accepts a requirement and an array of float numbers. 
The first argument is a requirement which can be largest or smallest. 
The following arguments are a set of floating numbers. 
If the requirement is largest, the program find the largest element in the array and print it. 
If the requirement is smallest, the program find the smallest element in the array and print it. 
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void updateTmp(char *requested, float *tmp, float val);

int main(int argc, char*argv[]) {
    char *request = argv[1];
    float tmp;
    if (strcmp(request, "smallest") == 0) {
        tmp = atof(argv[2]);
    }
    else if (strcmp(request, "largest") == 0) {
        tmp = atof(argv[2]);
    }
    for (int i = 3; i < argc; i++) {
        updateTmp(request, &tmp, atof(argv[i]));
    }
    printf("%.2f\n", tmp);
    return 0;
}

/* 
* Function Name: updateTmp
* Description: It checks if tmp is largest or smallest than current.
* Args: requested (represents smallest or largest), tmp pointer, val to check
* Returns: void
*/
void updateTmp(char *requested, float *tmp, float val) {
    if (strcmp(requested, "smallest") == 0) {
        if (*tmp > val) {
            *tmp = val;
        }
    } else if (strcmp(requested, "largest") == 0) {
        if (*tmp < val) {
            *tmp = val;
        }
    }        
}
