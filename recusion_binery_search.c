#include <stdio.h>

int binary_search(int a[], int l, int h, int d)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (a[mid] == d)
        {
            return mid;
        }
        else if (a[mid] < d)
        {
            return binary_search(a, mid + 1, h, d);
        }
        else
        {
            return binary_search(a, l, mid - 1, d);
        }
    }
    return -1;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Array Size is: %d\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }

    int d;
    printf("\nEnter Element Number: ");
    scanf("%d", &d);

    int b = binary_search(a, 0, n - 1, d);

    if (b >= 0)
    {
        printf("Your Entered Element Found at Position: %d\n", b + 1);
    }
    else
    {
        printf("Your Entered Element is Not Found.\n");
    }
}
