#include <stdio.h>

int main(int argc, char*argv[]) {
    int age = 30;
    long studentID = 173112594;
    float height = 1.75f;
    char initial = 'T';
    char firstName[] = "Tai";
    char lastName[] = "Mai";

    printf("I have a first name %s.\n", firstName);
    printf("I have a last name %s.\n", lastName);
    printf("I have a initial %c.\n", initial);
    printf("My whole name %s %c. %s.\n", firstName, initial, lastName);
    printf("I am %d years old.\n", age);
    printf("I am %f m tall.\n", height);
    printf("My student ID %ld.\n", studentID);

    float monthlySalary;
    double annualSalary;

    monthlySalary = 3456.78;
    annualSalary = monthlySalary * 12;

    printf("My monthly salary is %f €.\n", monthlySalary);
    printf("My annual salary is %f €.\n", annualSalary);

    return 0;
}

