/*
* Author: Duarte Martinho
* Purpose: Which accepts a list of positive integer numbers from the command line, the program finds all even numbers and delete them from the list.
* Language:  C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Struct */ 
typedef struct Node Node;

struct Node {
    int value;
    Node *next;
};

/* Function Prototypes */
Node* fillList(char *argv[], int length);
void printLinkedList(Node *LinkedList);

int main(int argc, char*argv[]) {
    Node *LinkedList = NULL;
    LinkedList = fillList(argv, argc);
    printLinkedList(LinkedList);
    return 0;
}

/*
* Function Name: fillList
* Description: fills the linked list with values from the argv 
* Args: argv array and length of argv 
* Returns: linkedlist with all values in it 
*/
Node* fillList(char *argv[], int length) {
	Node *current, *first;
    first = (Node*)calloc(1,sizeof(Node)); /*create the first node */
	current = first;
    current->value = atoi(argv[1]);
    for (int i = 2; i < length; i++) {
        current->next = (Node*)calloc(1,sizeof(Node));
	    current = current->next;
        current->value = atoi(argv[i]);
        // printf("%d %d\n", i, atoi(argv[i]));
    }
    return first;
}

/*
* Function Name: printLinkedList
* Description: Prints Linked List
* Args: Linked List as a pointer
* Returns: no return (VOID)
*/
void printLinkedList(Node *LinkedList) {
	Node* current = NULL;
    int total = 0;
	for(current = LinkedList; current != NULL; current = current->next)
	{
        if (current->value % 2 != 0) {
            total += current->value;
            printf("%d\n", current->value);
        }
	}
    printf("%d\n", total);
}