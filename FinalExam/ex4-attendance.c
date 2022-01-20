/*
* Author: Duarte Martinho
* Purpose: Accepts n number of attendance records for n students. 
* Each record contains a sequence of characters, where each character refers to the attendance status of the student
* Date: 09/12/2021
* Language:  C
*/

/* My Approach
* - I started by making a struct to be able to accomodate present, absent and late
* -  Then I realised to make the code cleaner I had to separate the late check into a different loop, so i decided
* to include the record in the struct to be able to check later on
* - I then checked if the student was absent more than twice if not i would then check the lates
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Defines */
#define MAX 50

struct Attendance {
    char record[MAX];
    int Present;
    int Absent;
    int Late;
};

typedef struct Attendance Attendance;

/* Function Prototypes */
void checkAward(char record[MAX], int present, int absent, int late);

int main(int argc, char*argv[]) {
    Attendance attendance[MAX];
    for (int i = 1; i < argc; i++) {
        Attendance current = attendance[i - 1];
        strcpy(current.record, argv[i]);
        current.Present = 0;
        current.Absent = 0;
        current.Late = 0;
        for (int j = 0; j < strlen(argv[i]); j++) {
            char* present = "P";
            char* absent = "A";
            // printf("%c - %d | %d %d\n", argv[i][j], argv[i][j], strcmp(present, &argv[i][j]), strcmp(absent, &argv[i][j]));
            if (argv[i][j] == 'P') {
                current.Present++;
                // printf("Present %d\n", current.Present);
            } else if (argv[i][j] == 'A') {
                current.Absent++;
                // printf("Absent %d\n", current.Absent);
            } else {
                current.Late++;
                // printf("Late %d\n", current.Late);
            }
        }
        checkAward(current.record, current.Present, current.Absent, current.Late);
        // printf("^- %s %d %d %d\n", current.record, current.Present, current.Absent, current.Late);
    }
    return 0;
}

/*
* Function Name: checkAward
* Description: checks if the student was absent more than 2 days or late 3 times in a row, then prints out the result
* Args: char record sentence, int count present, int count absent, int count late
* Returns: no return (void)
*/
void checkAward(char record[MAX], int present, int absent, int late) {
    if (absent > 2) {
        printf("1\n");
    } else {
        if (late >= 3) {
            int count = 0, isLate = 0; // Keeps track of how many times L has appeared in a row
            for (int i = 0; i < strlen(record); i++) {
                if (count >= 3) { // IF is late appeared 3 times in a row then it will break the loop
                    isLate = 1;  // mark as student was late
                    break;
                }
                if (record[i] == 'L') {
                    count++; // Increase Counter
                } else {
                    count = 0; // RESET Counter
                }
            }
            if (isLate == 1) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        } else {
            printf("0\n");
        }
    }
}