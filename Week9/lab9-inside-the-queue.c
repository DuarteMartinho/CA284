#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Node Node;

struct Node {
    int value;
    Node *next;
};

Node* AddNumber(int num, int numAdd, Node *first);
Node* fillList(int x[10]);
void printList(Node *start);

int main(int argc, char*argv[]) {
    int x[10] = { 8, 7, 3, 4, 5, 6, 9, 2, 14, 12 };
    Node *start;
    start = fillList(x);
    start = AddNumber(atoi(argv[1]), atoi(argv[2]), start);
    printList(start);
    return 0;
}

Node* fillList(int x[10]) {
	Node *current, *first;
    first = (Node*)calloc(1,sizeof(Node)); /*create the first node */
	current = first;
    current->value = x[0];
    for (int i = 1; i < 10; i++) {
        current->next = (Node*)calloc(1,sizeof(Node));
	    current = current->next;

        current->value = x[i];
        // printf("%d\n", atoi(argv[i + 3]));
    }

    return first;
}

Node* AddNumber(int num, int numAdd, Node *first)
{
	Node *current, *start;
    start = first; /*create the first node */
	current = first;

	for(int i = 0; i < 10; i++)
	{

		if(current->value == num)
		{
            Node *tmp = current->next;
            current->next = (Node*)calloc(1,sizeof(Node));
            current = current->next;
            current->value = numAdd;
            current->next = tmp;
		}
        current = current->next;
	}

    return start;
}

void printList(Node *start)
{
	Node* p = NULL;
	for(p = start; p != NULL; p = p->next)
	{
		printf("%d\n", p->value);
	}
}