#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *front, *rear;
void enqueue(int item)
{
    node *ptr = malloc(sizeof(node));
    if (ptr == NULL)
        printf("Overflow\n");
    else
    {
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
        printf("%d is enqueued\n", item);
    }
}
void dequeue()
{
    node *ptr;
    if (front == NULL)
        printf("Underflow\n");
    else
    {
        printf("%d is dequeued\n", front->data);
        ptr = front;
        front = front->next;
        free(ptr);
    }
}
void display()
{
    node *ptr = front;
    if (front == NULL)
        printf("Queue is empty\n");
    else
    {
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int item, choice = 0;
    while (choice != 4)
    {
        printf("\nChose one from the below options...");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be enqueued: ");
            scanf("%d", &item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("successfully exited\n");
            break;
        default:
            printf("Please Enter valid choice\n");
        }
    }
    return 0;
}