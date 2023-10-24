#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteEnd()
{
    struct node *ptr =head;
    struct node *prev;

    if (head == NULL)
    {
        printf("List Is Allready Empty.....\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = NULL;
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List Is Empty....\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    int ch , i;

    do
    {
        printf("\nPress 1 For Insert Value.\n");
        printf("Press 2 For Delete Value.\n");
        printf("Press 3 For Display.\n");
        printf("Press 0 For Exit.\n");
        printf("Enter Your Choice : ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1 :
            printf("\nEnter Value For Insert.\n");
            scanf("%d",&i);
            insertEnd(i);
            break;
        
        case 2 :
            deleteEnd();
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
  }while (ch != 0);   
}