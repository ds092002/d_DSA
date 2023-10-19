#include <stdio.h>
#include <stdlib.h>
int n;

void print(int a[])
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void QuickSort(int a[], int first, int last)
{
    int i, j, t, pivot;
    if (first < last)
    {
        // printf("\n Inside Quick Sort : ");
        print(a);
        pivot = first;
        i = first, j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
            {
                i++;
            }
            while (a[j] > a[pivot])
            {
                j--;
            }
            if (i < j)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            t = a[pivot];
            a[pivot] = a[j];
            a[j] = t;

            QuickSort(a, first, j - 1);
            QuickSort(a, j + 1, last);
        }
    }
}

int main()
{
    // int a[25], i;
    int a[] = {99, 89, 97, 66, 77, 25, 30, 10, 7, 45, 60, 1, 2};

    printf("How many Element Your Enter : ");
    scanf("%d", &n);

    /*printf("Unserted Array : \n");
    for ( i = 0; i < n; i++)
    {
        a[i] = rand()%100+1;
    }*/

    print(a);
    QuickSort(a, 0, n - 1);
    printf("\nAfter Quick sort : ");
    print(a);
}