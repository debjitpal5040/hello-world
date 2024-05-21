#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};
typedef struct Node Node;

// This function prints contents of linked list starting from
// the given node
void printList(Node* n)
{
	while (n != NULL) {
		printf(" %d ", n->data);
		n = n->next;
	}
}

int main()
{
	Node *head = malloc(sizeof(Node));
	Node *second = malloc(sizeof(Node));
	Node *third = malloc(sizeof(Node));

	head->data = 1; 
	head->next = second; 
	head->prev = NULL;

	second->data = 2; 
	second->next = third;
	second->prev = head;

	third->data = 3; 
	third->next = NULL;
	third->prev = second;

	printList(head);
	return 0;
}
