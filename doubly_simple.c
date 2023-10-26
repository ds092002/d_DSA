#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

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
    temp->prev = ptr;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
    if (head == NULL)
    {
        printf("List Is Allready Empty.....\n");
    }
    else if (ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        return;
    }
    else
    {
        temp->prev = NULL;
        temp->next = ptr;
        ptr->prev = temp;
        head = temp;
    }
}
void deleteFirst()
{
    struct node *ptr = head;
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List Is All Ready Empty....\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    head = ptr->next;
    ptr->next->prev = NULL;
    free(ptr);
}
void insertMid(int val, int pos)
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
    temp->next = ptr;
    ptr->prev = temp;
    return;
}
void midDelete(int pos)
{
    struct node *ptr = head;
    struct node *prev;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    ptr->prev = ptr->prev->prev;
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
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    display();
    deleteEnd();
    insertFirst(40);
    insertFirst(50);
    display();
    deleteFirst();
    display();
    insertMid(60, 20);
    insertMid(70, 10);
    display();
    midDelete(20);
    midDelete(10);
    display();
}
