#include<stdio.h>

int main()
{
    int a[100] , b[100] , c[200];
    int i , m , n , j = 0;

    // Array 1
    printf("Enter Array 1 Limit : ");
    scanf("%d",&n);

    printf("Enter Array 1 Value : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array 1 Value is : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ,",a[i]);
    }

    // Array 2
    printf("\n\nEnter Array 2 Limit : ");
    scanf("%d",&m);

    printf("Enter Array 2 Value : ");
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Array 2 Value is :");
    for ( i = 0; i < m; i++)
    {
        printf("%d ,",b[i]);
    }
    
    // Merge Array
    for ( i = 0; i < n; i++)
    {
        c[j] = a[i];
        j++;
    }
    
    for ( i = 0; i < m; i++)
    {
        c[j] = b[i];
        j++;
    }

    printf("\n\nMerge Array Is : ");
    for ( i = 0; i < (n + m); i++)
    {
        printf("%d ,",c[i]);
    }
    
    return 0;
}