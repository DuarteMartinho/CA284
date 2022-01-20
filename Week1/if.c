#include <stdio.h>

int main() {
    int my_height = 169;
    int your_height = 175;

    if (your_height > my_height) {
        printf("You are taller.\n");
    }

    if (my_height > your_height) {
        printf("I am taller\n");
    }

    if (my_height == your_height) {
        printf("We are same height.\n");
    }

}