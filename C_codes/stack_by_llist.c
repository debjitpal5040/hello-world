#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head;
void push(int val)
{
    node *newNode = malloc(sizeof(node));
    if (newNode == NULL)
        printf("Overflow\n");
    else
    {
        newNode->data = val;
        newNode->next = head;
        head = newNode;
        printf("%d is pushed to stack\n", val);
    }
}
void pop()
{
    node *temp;
    if (head == NULL)
        printf("Underflow\n");
    else
    {
        printf("%d is popped\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}
void display()
{
    node *temp = head;
    if (temp == NULL)
        printf("Stack is empty\n");
    else
    {
        while (temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int val, choice = 0;
    while (choice != 4)
    {
        printf("\nChose one from the below options...");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be pushed: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("successfully exited\n");
            break;
        default:
            printf("Please Enter valid choice\n");
        };
    }
    return 0;
}