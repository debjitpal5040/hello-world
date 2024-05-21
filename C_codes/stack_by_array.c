#include <stdio.h>
int stack[100], n, top = -1;
void push(int val)
{
    if (top == n - 1)
        printf("Overflow\n");
    else
    {
        top += 1;
        stack[top] = val;
        printf("%d is pushed to stack\n", val);
    }
}
void pop()
{
    if (top == -1)
        printf("\nUnderflow");
    else
    {
        printf("%d is popped from stack\n", stack[top]);
        top -= 1;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int val, choice = 0;
    printf("Enter the number of elements in the stack: ");
    scanf("%d", &n);
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