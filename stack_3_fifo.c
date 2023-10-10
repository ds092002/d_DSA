#include<stdio.h>
#define n 5
int a[n] , top = -1;

int insertEnd(int data)
{
    if (top >= n-1)
    {
        printf("Stack is Overflow \n");
    }
    else
    {
        top++;
        a[top] = data;
    }
}

int delete()
{
    if (top < 0)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        top--;
    }   
}


int firstInsert(int data)
{
    if (top >= n-1)
    {
        printf("Stack Is Overflow...");
    }
    else if (top < 0)
    {
        top++;
        a[top] = data;
    }
    else
    {
        top++;
        for (int i = top; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = data;
    }
}

int firstDelete()
{
    if (top < 0)
    {
        printf("Stock Is Empty");
    }
    else
    {
        for (int i = 0; i < top; i++)
        {
            a[i] = a[i + 1];
        }
        top--;
    }
}

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    firstInsert(20);
    firstInsert(30);
    firstInsert(40);
    firstDelete();
    firstDelete();
    display();
}