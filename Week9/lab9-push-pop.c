#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Node Node;

struct Node {
    int value;
    Node *next;
};

Node* fillList(char *argv[], int length);
void pop(Node *start);
Node* addItem(Node *start, int val1, int val2);
void printList(Node *start);

int main(int argc, char*argv[]) {
    int length = atoi(argv[1]);
    Node *LinkedList = NULL;
    LinkedList = fillList(argv, length);
    pop(LinkedList);
    pop(LinkedList);
    LinkedList = addItem(LinkedList, atoi(argv[argc - 2]), atoi(argv[argc - 1]));
    printList(LinkedList);
    return 0;
}

Node* fillList(char *argv[], int length) {
	Node *current, *first;
    first = (Node*)calloc(1,sizeof(Node)); /*create the first node */
	current = first;
    current->value = atoi(argv[2]);
     for (int i = 0; i < length - 1; i++) {
        current->next = (Node*)calloc(1,sizeof(Node));
	    current = current->next;

        current->value = atoi(argv[i + 3]);
        // printf("%d\n", atoi(argv[i + 3]));
    }

    return first;
}

void pop(Node *start)
{
	Node* p = start;

	for(p = start; p != NULL; p = p->next)
	{
		if(p->next->next == NULL)
		{
			p->next = NULL;
		}
	}
}

Node* addItem(Node *start, int val1, int val2) {
	Node *current, *first;
    first = start;
	current = first;
    for (current = first; current != NULL; current = current->next) {
        if(current->next == NULL)
		{
            current->next = (Node*)calloc(1,sizeof(Node));
            current = current->next;
            current->value = val1;

            current->next = (Node*)calloc(1,sizeof(Node));
            current = current->next;
            current->value = val2;
            break;
		}
    }

    return first;
}

void printList(Node *start)
{
	Node* p = NULL;
	for(p = start; p != NULL; p = p->next)
	{
		printf("%d\n", p->value);
	}
}