#include<stdio.h>
#define n 5
int a[n] , top = -1;

int insertEnd(int data)
{
    if (top >= n-1)
    {
        printf("Stack is Overflow..... \n");
        printf("---------------------------------\n");
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
        printf("Stack is Empty.....\n");
        printf("---------------------------------");
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
        printf("---------------------------------");
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
        printf("Stack Is Empty...");
        printf("\n---------------------------------");
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
    int i , j , p;

    while(1)
    {
        printf("\n===============================\n");
        printf("-------->[Stack Menu]<--------- ");
        printf("\n===============================\n");
        printf("\nPress 1 ==> [Insert End]\n");
        printf("Press 2 ==> [Delete End]\n");
        printf("Press 3 ==> [First Insert]\n");
        printf("Press 4 ==> [First Delete]\n");
        printf("Press 5 ==> [Display]\n");
        printf("Press 0 ==> [Exit]\n");
        printf("===============================\n");

        printf("Enter Your Choice ==> ");
        scanf("%d",&i);
        printf("===============================\n");

        switch(i)
        {
            case 1 :
                printf("\n---------------------------------");
                printf("\nEnter The Value to Insert End ==> ");
                scanf("%d",&j);
                printf("---------------------------------\n");
                insertEnd(j);
                break;

            case 2 :
                delete();
                break;

            case 3 :
                printf("\n---------------------------------\n");
                printf("\nEnter The Value To Insert First ==> ");
                scanf("%d",&p);
                printf("---------------------------------\n");
                firstInsert(p);
                break;

            case 4 :
                firstDelete();
                break;

            case 5 :
                display();
                break;

            case 0 :
                printf("Now You Exit The Program Never Visit Again It's My Humbal Requset.....");
                return 0;

            default :
                printf("Enter valid Choice.......");
                break;                        
        }
    } 
}