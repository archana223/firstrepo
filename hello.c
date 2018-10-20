#include <stdio.h>

int add(int a[], int b)
{
    if (b == 0)
    {
        return a[0];
    }
    else
    {
        return a[b] + add(a, b - 1);
    }
}

void main()
{
    int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int addition = add(c, (sizeof(c) / sizeof(int)) - 1);
    printf("\n%d", addition);
}
