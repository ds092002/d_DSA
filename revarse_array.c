#include <stdio.h>    // 20 30 40 50 10

int main() {
    int a[100],i,b,n;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Value of a[%d] : " ,i);
        scanf("%d",&a[i]);
    }
    
    b = a[0];
    for (i = 0; i < n; i++) 
    {
        a[i] = a[i + 1];
    }

    a[n-1] = b;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
