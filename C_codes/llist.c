#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}

void insertHead(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertTail(struct Node **tail_ref, int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    (*tail_ref)->next = new_node;
    (*tail_ref) = new_node;
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *tail = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    tail = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = tail;

    tail->data = 3;
    tail->next = NULL;

    printLinkedList(head);
    printf("\n");
    insertHead(&head,0);
    printLinkedList(head);
    printf("\n");
    insertTail(&tail,4);
    printLinkedList(head);    
    return 0;
}
