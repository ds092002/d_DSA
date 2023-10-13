#include <stdio.h>
#include <stdlib.h>
#define n 15

int selection_short(int a[])
{
    int i, j, t;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main()
{
    int a[n], i, b;

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 50;
    }

    b = sizeof(a) / sizeof(a[0]);
    printf("Array Size is : %d\n", b);

    printf("\nUnshorted Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", a[i]);
    }

    selection_short(a);

    printf("\nShorted Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ,", a[i]);
    }
}