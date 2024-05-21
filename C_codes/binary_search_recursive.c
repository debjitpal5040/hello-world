// recursive
#include <stdio.h>
int binary_search(int arr[], int l , int r, int x)
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] < x)
        {
            return binary_search(arr, m+1, r, x);
        }
        else if (arr[m] > x)
        {
            return binary_search(arr, l, m-1, x);
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
    int ans = binary_search(arr,0, 11, 56);
    if(ans==(-1)){
        printf("Element doesn't exist in this array\n");
    }
    else{
        printf("Element exists at index %d\n", ans);
    }
    return 0;
}

/*

Linear (n) = 1000
binary search (log n) = log 1000 = 10 

*/