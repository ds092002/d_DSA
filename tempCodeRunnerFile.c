#include <stdio.h>

int binary_serach(int a[] , int d , int n)
{
    int l = 0 , h = n - 1 , mid;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (a[mid] == d )
        {
            return mid + 1;
        }
        
        else if (a[mid] < d)
        {
             l = mid + 1;
        }

        else
        { 
            h = mid - 1;
        }        
    }
    return - 1; 
}

int main()
{
    int a[] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100} , i , d ,n , b;

    n = sizeof(a) / sizeof(a[0]);
    printf("Array Size is : %d \n",n);

    for ( i = 0; i < n; i++)
    {
        printf("%d ,",a[i]);
    }
    
    printf("\nEnter Element Number : ");
    scanf("%d",&d);

    b = binary_serach(a , d , n);

    if (b > 0)
    {
        printf("Your Enter Elements Found On %d Position. \n",b);
    }
    
    else
    {
        printf("Your Enter Element is Not Found.");
    }
}