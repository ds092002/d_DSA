#include<stdio.h>
#define n 5
int a[n] , f = -1 , r = -1;

int insert_First(int data)
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

int display()
{
    int i = f;
    if (f < 0)
    {
        printf("Queue Is Empty...\n");
    }
    else
    {
        do
        {
            printf("%d\t",a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}

int main()
{
    insert_First(10);
    insert_First(20);
    insert_First(30);
    insert_First(40);
    delete_First();
    insert_First(50);
    insert_First(60);
    delete_First();
    insert_First(70);
    display();
}