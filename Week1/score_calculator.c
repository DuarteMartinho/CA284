#include <stdio.h>

int calculateTotal(int input, int type) {
    return input * type;
}

int main(int argc, char*argv[]) {
    int try, try_total, conversion, conversion_total, penalty, penalty_total, dropgoal, dropgoal_total, total;
    // Settings
    try = 5;
    conversion = 2;
    penalty = 3;
    dropgoal = 3;

    int try_input, conversion_input, penalty_input, dropgoal_input;
    
    printf("Number of tries: ");
    scanf("%d", &try_input);
    if (try_input < 0) {
        printf("Inputs cannot be negative!\n");
        // return 0;
    }
    printf("Number of conversions: ");
    scanf("%d", &conversion_input);
    printf("Number of penalties: ");
    scanf("%d", &penalty_input);
    printf("Number of drop goals: ");
    scanf("%d", &dropgoal_input);
    
    if (try_input < 0 || conversion_input < 0 || penalty_input < 0 || dropgoal_input < 0) {
        printf("Inputs cannot be negative!\n");
        return 0;
    }

    try_total = calculateTotal(try_input, try);
    conversion_total = calculateTotal(conversion_input, conversion);
    penalty_total = calculateTotal(penalty_input, penalty);
    dropgoal_total = calculateTotal(dropgoal_input, dropgoal);

    total = try_total + conversion_total + penalty_total + dropgoal_total;

    printf("Total score: %d\n", total);
    return 0;
}

