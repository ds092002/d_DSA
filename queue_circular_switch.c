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
    int ch , i;

    do
    {
        printf("\nPress 1 For Insert Queue.\n");
        printf("Press 2 For Delete Queue.\n");
        printf("Press 3 For Display Queue.\n");
        printf("Press 0 For Exit.\n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 :
            printf("\nEnter Value For Insert.\n");
            scanf("%d",&i);
            insert_First(i);
            break;
        
        case 2 :
            delete_First();
            break;

        case 3 :
            display();
            break;

        case 0 :
            break;

        default:
            printf("Enter Valid Choice.....\n");
            break;
        }
    } while (ch != 0);   
}