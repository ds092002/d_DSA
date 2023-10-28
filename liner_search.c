#include <stdio.h>
#include <stdlib.h>
#define n 20
int a[n];

int find_elements(int a[], int x)
{
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == x)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int i, b, p , c;
    while (1)
    {
        for (i = 0; i < n; i++)
        {
            a[i] = rand() % 50;
        }

        for (i = 0; i < n; i++)
        {
            printf("%d | ", a[i]);
        }

        printf("\nEnter Search Element : ");
        scanf("%d", &p);

        b = find_elements(a, p);

        if (b > 0)
        {
            printf("Your Searching Elements Is Found On ==> %d <== Position \n", b);
            printf("                                      -----\n");
        }
        else
        {
            printf("Your Searching Elements Is Not Found.\n");
        }

        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &c);
        printf("=======================================================================\n\n");
        if (c == 0)
        {
            break;
        }
    }
}