/*
* Author: Duarte Martinho
* Purpose: Accepts n arguments of floating numbers. The program is required to use a doubly linked list to store all input numbers. 
* Then, the program check whether the list of numbers is in descending numerical order. If so, print 1, otherwise 0.
* Date: 09/12/2021
* Language:  C
*/

/* My Approach
* - I started by making the linked list and populating it with the numbers
* - Then we made a function that checks the if the list is descending and then prints the desired output
* 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Defines */
typedef struct List List;

struct List {
    int num;
    List *next;
    List *prev;
};

/* Function Prototypes */
void checkList(List *LinkedList);

int main(int argc, char*argv[]) {
    List *current, *first;
    first = (List*)calloc(1,sizeof(List));
	current = first;
    for (int i = 1; i < argc; i++) {
        current->num = atoi(argv[i]);
        current->next = (List*)calloc(1,sizeof(List));
	    current = current->next;
    }
    checkList(first);
    return 0;
}

/*
* Function Name: printLinkedList
* Description: Prints Linked List
* Args: List Linked List as a pointer
* Returns: no return (VOID)
*/
void checkList(List *LinkedList) {
	List* current = NULL;
    int isDesc = 1;
	for(current = LinkedList; current->next != NULL; current = current->next)
	{   
        if (current->num < current->next->num) { 
            isDesc = 0;
            break;
        }
	}
    if (isDesc == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}