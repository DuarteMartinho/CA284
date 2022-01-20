/*
* Author: Duarte Martinho
* Purpose: Display all products line by line and calculates the price if it is Ireland
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Struct */ 
typedef struct Product Product;

struct Product {
    char Code[100];
    char Country[100];
    int Price;
    Product *next;
};

/* Function Prototypes */
Product* fillList(char *argv[], int length);
void printLinkedList(Product *LinkedList);

int main(int argc, char*argv[]) {
    int length = argc;
    Product *LinkedList;
    LinkedList = fillList(argv, length);
    printLinkedList(LinkedList);
    return 0;
}

/*
* Function Name: fillList
* Description: fills the linked list with values from the argv 
* Args: argv array and length of argv 
* Returns: linkedlist with all values in it 
*/
Product* fillList(char *argv[], int length) {
	Product *current, *first;
    first = (Product*)calloc(1,sizeof(Product)); /*create the first Product */
	current = first;
    strcpy(current->Code, argv[1]);
    strcpy(current->Country, argv[2]);
    current->Price = atoi(argv[3]);
    for (int i = 1; (i * 3) + 1 < length - 1; i++) {
        current->next = (Product*)calloc(1,sizeof(Product));
	    current = current->next;
        strcpy(current->Code, argv[(3 * i) + 1]);
        strcpy(current->Country, argv[(3 * i) + 2]);
        current->Price = atoi(argv[(3 * i) + 3]);
    }
    return first;
}

/*
* Function Name: printLinkedList
* Description: Prints Linked List
* Args: Linked List as a pointer
* Returns: no return (VOID)
*/
void printLinkedList(Product *LinkedList) {
	Product* current = NULL;
	for(current = LinkedList; current != NULL; current = current->next)
	{
        printf("%s\n", current->Code);
        printf("%s\n", current->Country);
        if (strcmp(current->Country, "Ireland") == 0) {
            float price = current->Price * 1.20;
            printf("%.0f\n", price);
        } else {
            printf("%d\n", current->Price);
        }
	}
}