#include <stdio.h>
#include <stdlib.h>
#define n 15

int bubble_short(int a[])
{
    int i, j, t;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

int main()
{
    int a[n], i, c;

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 50;
    }

    c = sizeof(a) / sizeof(a[0]);
    printf("Array Size : %d\n", c);

    printf("Unshoted Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", a[i]);
    }

    bubble_short(a);

    printf("\nShorted Array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", a[i]);
    }
}