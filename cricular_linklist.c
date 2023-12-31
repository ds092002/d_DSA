#include <stdio.h>
#include <stdlib.h>
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

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
}

void insertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void insertMid(int val, int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    struct node *prev;
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = temp;
    temp->next = ptr;
    return;
}

void deleteEnd()
{
    struct node *ptr = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("List Is Allready Empty.....\n");
    }
    else if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != head)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = head;
    free(ptr);
    return;
}

void deleteFirst()
{
    struct node *ptr = head;
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List Is Already Empty....\n");
    }
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp->next;
    head = temp->next;
    free(temp);
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
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while (ptr->next != head)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    deleteEnd();
    display();

    insertFirst(50);
    insertFirst(60);
    insertFirst(70);
    display();
    deleteFirst();
    display();
    
    insertMid(80, 20);
    insertMid(90, 50);
    display();
}