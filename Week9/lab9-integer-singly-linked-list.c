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
void printList(Node *start);

int main(int argc, char*argv[]) {
    int length = atoi(argv[1]);
    Node *LinkedList = NULL;
    LinkedList = fillList(argv, length);
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

void printList(Node *start)
{
	Node* p = NULL;
	for(p = start; p != NULL; p = p->next)
	{
		printf("%d\n", p->value);
	}
}