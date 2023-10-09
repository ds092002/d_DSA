#include<stdio.h>          // 50 20 30 40 10 

int main()
{
    int a[100],i,n,j;

    printf("Enter Array Size : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Value Of a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            j = a[i];
            a[i] = a[n-1];
            a[n-1] = j;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}