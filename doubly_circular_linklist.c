#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = temp;
        temp->prev = temp;
        return;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
    }
    return;
}

void deletend()
{
    struct node *ptr = head;
    struct node *p;

    if (head == NULL)
    {
        printf("\nlist is already empty");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = temp;
        temp->prev = temp;
        return;
    }
    else
    {
        while (ptr->next != head)

            ptr = ptr->next;

        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return;
}

void deletfirst()
{
    struct node *ptr = head;
    struct node *p = head;

    if (head == NULL)
    {
        printf("list is already empty\n");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
            ptr = ptr->next;

        ptr->next = head->next;
        head ->next->prev = ptr;
        head=p->next;
        free(p);
    }
    return;
}

void insertmid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->prev = p;
    temp->next = ptr;
    ptr->prev = temp;
    return;
}
void deletmid(int pos)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->prev = p;
    free(ptr);
    return;
}

int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty");
    }

    while (ptr->next != head)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d ", ptr->data);
    printf("\n");
}

int main()
{
     insertend(10);
     insertend(20);
     insertend(30);
     insertend(40);
     insertmid(80,20);
     insertfirst(50);
     insertfirst(60);
     insertfirst(70);
     display();
     deletfirst();
     display();
     deletmid(10);
     display();
     deletend();
     display();
}