#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insert_End(int data)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if ((r + 1)% n == f)
    {
        printf("Queue Is Full...\n");
    }
    else
    {
        r = (r + 1)% n;
        a[r] = data;
    }
}

int delete_First()
{
    if (f < 0)
    {
        printf("Queue Is Empty...\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1 ) % n;
    }
}

int insert_first(int data)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = data;        
    }
    else if (f == 0)
    {
        printf("\nNot Added To This Position\n");
    }
    else
    {
        f--;
        a[f] = data;
    }
}

int delete_End()
{
    if (r < 0)
    {
        printf("Queue Is Empty.\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}

int display()
{
   for (int i = f; i <= r; i++)
   {
        printf("%d\t",a[i]);    
   }
}

int main()
{
    insert_End(10);
    insert_End(20);
    insert_End(30);
    insert_End(40);
    delete_First();
    insert_first(50);
    delete_End();
    
    display();
}