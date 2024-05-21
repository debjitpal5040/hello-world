#include <stdio.h>
#include <stdlib.h>
int queue[100], n, front = -1, rear = -1;
void isFull()
{
    if (rear == n - 1)
        printf("Queue is full\n");
    else
        printf("Queue is not full\n");
}
void isEmpty()
{
    if (front == -1 || front > rear)
        printf("\nUnderflow");
    else
        printf("Queue is not empty\n");
}
void enqueue(int item)
{
    if (rear == n - 1)
        printf("Overflow\n");
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
            rear = rear + 1;
        queue[rear] = item;
        printf("%d is enqueued\n", item);
    }
}
void dequeue()
{
    int item;
    if (front == -1 || front > rear)
        printf("\nUnderflow");
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
            front = front + 1;
        printf("%d is dequeued\n", item);
    }
}
void display()
{
    if (rear == -1)
        printf("Queue is empty\n");
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main()
{
    int item, choice = 0;
    printf("Enter the number of elements in the queue: ");
    scanf("%d", &n);
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