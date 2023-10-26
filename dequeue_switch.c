#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int insert_End(int data)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = data;
    }
    else if ((r + 1) % n == f)
    {
        printf("Queue Is Full...\n");
    }
    else
    {
        r = (r + 1) % n;
        a[r] = data;
    }
}

int insert_First(int data)
{
    if (f < 0)
    {
        f = r = 0;
        a[f] = data;
    }
    else if (f == 0)
    {
        printf("Not Added To This Position Becuse Queue Is Full..\n");
    }
    else
    {
        --f;
        a[f] = data;
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
        f = (f + 1) % n;
    }
}

int delete_End()
{
    if (r < 0)
    {
        printf("Queue Is Empty...\n");
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
        printf("%d\t", a[i]);
    }
}

int main()
{
    int ch, i, j;

    do
    {
        printf("\nPress 1 for Insert End Queue\n");
        printf("Press 2 for Delete End Queue\n");
        printf("Press 3 for Insert First Queue\n");
        printf("Press 4 for Delete First Queue\n");
        printf("Press 5 For Display Queue\n");
        printf("Press 0 for Exit...\n");

        printf("Enter Your Choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter Value For Insert End : ");
            scanf("%d", &i);
            insert_End(i);
            break;
        case 2:
            delete_End();
            break;

        case 3:
            printf("\nEnter Value For Insert First : ");
            scanf("%d", &j);
            insert_First(j);
            break;

        case 4:
            delete_First();
            break;

        case 5:
            display();
            break;

        case 0:
            break;

        default:
            printf("Enter Valid Choice........");
            break;
        }
    } while (ch != 0);
}