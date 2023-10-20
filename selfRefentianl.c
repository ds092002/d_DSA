#include<stdio.h>

struct Node
{
    int data;
    char ch;
    struct Node *ptr;
};

int main()
{
    struct Node a,b,c;

    a.data = 65;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 97;
    b.ch = 'a';
    b.ptr = NULL;

    //printf("A data : %d , Char : %c",a.data , a.ch);
    //printf("\nB data : %d , Char : %c",b.data , b.ch);

    a.ptr = &b;
    b.ptr = &a;

    //printf("B data : %d , Char : %c",a.ptr->data , a.ptr->ch);
    printf("A data : %d , Char : %c",b.ptr->data , b.ptr->ch);
}