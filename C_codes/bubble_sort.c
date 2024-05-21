#include <stdio.h>

int main()
{
    int arr[5] = {56, 23, 67, 34, 90};
    int i, j, c;
    int n = 5;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/*
n = 5
i = 0
j = 0, 1 , 2 , 3

56, 23, 67, 34, 90
23, 56, 67, 34, 90
23, 56, 34, 67, 90

i = 1
j = 0 ,1 , 2

23, 34, 56, 67, 90


i = 2
j= 0, 1

23, 34, 56, 67, 90

i=3
j=0

23, 34, 56, 67, 90
*/