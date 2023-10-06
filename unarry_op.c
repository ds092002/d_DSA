#include<stdio.h>

int main()
{
    int a = 7;

   // printf("a : %d",a++); // Ans : 7
   // printf("a : %d",++a); // Ans : 8 
   // printf("a : %d, a : %d",a,a++); // Ans : 8 7
   // printf("a : %d, a : %d",a,++a); // Ans : 8 8
   // printf("a : %d, a : %d",a++,++a); // Ans : 8 9
   // printf("a : %d, a : %d",a++,a++); // Ans : 8 7
   // printf("a : %d, a : %d",++a,a++); // Ans : 9 7
   // printf("a : %d, a : %d",++a,++a); // Ans : 9 9
   // printf("a : %d, a : %d, a : %d",a,a++,a++); // Ans : 9 8 7 
   // printf("a : %d, a : %d, a : %d",a,++a,a++); // Ans : 9 9 7 
   // printf("a : %d, a : %d, a : %d",a,++a,++a); // Ans : 9 9 9 
   // printf("a : %d, a : %d, a : %d",a++,++a,a++); // Ans : 9 10 7 
   // printf("a : %d, a : %d, a : %d",a++,a++,a++); // Ans : 9 8 7 
   // printf("a : %d, a : %d, a : %d",++a,a++,a++); // Ans : 10 8 7 
   // printf("a : %d, a : %d, a : %d",++a,a++,++a); // Ans : 10 8 10 
    printf("a : %d, a : %d, a : %d, a : %d",a++,++a,a++,++a); // Ans : 10 11 8 11 
}

/*
            a++     ++a     a++     ++a
        p   10      11      8       11
        i   11      10      9       8
*/