#include <stdio.h>
int main()
{
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to be searched : ");
    scanf("%d", &k);
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            printf("%d is at index %d\n", arr[i], i);
            sum++;
        }
    }
    if (sum == 0)
    {
        printf("%d is not present in the array\n", k);
    }
    return 0;
}

/*
arr= [1,2,3,4,5,6,7,8,9,10, ... , 998, 999, 1000]

n=672

*/