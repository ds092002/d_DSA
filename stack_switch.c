#include<stdio.h>
# define n 5
int a[n] , top = -1;

int insertEnd(int data)
{
    if (top >= n-1)
    {
        printf("Stack is overflow \n");
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
        printf("Stack Is Empty ");
    }
    else
    {
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
    int i;
while(1){
    printf("\nPress 1 To Insert End\n");
    printf("Press 2 To Delete\n");
    printf("Press 3 To Display\n");
    printf("Press 0 For Exit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&i);

    switch(i)
    {
        case 1 :
            printf("Enter the value to push: ");
            scanf("%d", &i);
            insertEnd(i);
            break;
        case 2 :
            delete();
            //delete();
            break;
        case 3 :
            display();
            break;
        case 0 :
            break;

        default :
            printf("Invalid Choice");
            break;    
    }
  }
}