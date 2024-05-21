// iterative
#include <stdio.h>
int binary_search(int arr[], int n, int x)
{
    int l = 0;
    int r = n-1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] < x)
        {
            l = m + 1;
        }
        else if (arr[m] > x)
        {
            r = m - 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}

int main()
{
    int arr[12] = {12, 23, 34, 56, 67, 78, 90, 120, 145, 156, 210, 320};
    int ans = binary_search(arr,12,2006);
    if(ans==(-1)){
        printf("Element doesn't exist in this array\n");
    }
    else{
        printf("Element exists at position %d\n", ans);
    }
    return 0;
}