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
 
 void insertFirst(int val)
 {
     struct node *ptr = head;
     struct node *temp = malloc(sizeof(struct node));
     temp->data = val;

     if (head == NULL)
     {
         temp->next = NULL;
         head = temp;
         return;
     }
     temp->next = ptr;
     head = temp;
     return;
 }
 void insertMid(int val , int pos)
 {
     struct node *ptr = head;
     struct node *temp = malloc(sizeof(struct node));
     temp->data = val;
     while (ptr->data != pos)
     {
         ptr = ptr->next;
     }
     temp->next = ptr->next;
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
 
 void deleteFirst()
 {
     struct node *ptr =head;
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
     free(ptr);
 }    
 
 void midDelete(int pos)
 {
     struct node *ptr =head;
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
     insertEnd(10);
     insertEnd(20);
     insertEnd(30);
     insertEnd(40);
     insertEnd(50);
     display();

     insertFirst(40);
     insertFirst(50);
     insertFirst(60);
     display();

     insertMid(70,30);
     //insertMid(80,4);
     //insertMid(90,5);
     midDelete(30);
     
     display();
 }