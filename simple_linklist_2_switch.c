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
        int ch , i , j , x , y;

        do
        {
            printf("\nPress 1 for Insert End.\n");
            printf("Press 2 for Delete End.\n");
            printf("Press 3 for Insert First.\n");
            printf("Press 4 for Delete First.\n");
            printf("Press 5 for Mid Insert.\n");
            printf("Press 6 for Mid Delete.\n");
            printf("Press 9 For Display.\n");
            printf("Press 0 Exit.\n");

            printf("Enter Your Choice :");
            scanf("%d",&ch);

            switch (ch)
            {
            case 1 :
                printf("Enter Value For Insert End : ");
                scanf("%d",&i);
                insertEnd(i);
                break;
            
            case 2 :
                deleteEnd();
                break;

            case 3 :
                printf("Enter Value For Insert First : ");
                scanf("%d",&j);
                insertFirst(j);
                break;

            case 4 :
                deleteFirst();
                break;

            case 5 :
                printf("Enter Value For Mid Add : ");
                scanf("%d",&x);
                printf("Enter Postion For Add : ");
                scanf("%d",&y);
                insertMid(x,y);
                break;

            case 6 :
                printf("Enter Postion For Delete : ");
                scanf("%d",&x);
                midDelete(x);
                break;

            case 9 :
                display();
                break;    

            case 0 :
                break;

            default:
                printf("Please Enter Valid Choice......");
                break;
            }
        } while (ch != 0);      
 }