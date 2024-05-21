#include <stdio.h>
#define AREA(l, b) (l * b)
int main()
{
    int a = 10;
    int b = 11;
    int area = AREA(a, b);
    printf("%d", area);
    return 0;
}