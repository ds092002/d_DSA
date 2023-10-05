/*
        operetor => arithmatic => + - * / %
                 => relationl => < > <= >= == !=
                 => logical   => && ||(pipe) !
                 => assignment => += -= *= /= %=
                 => unary      => ++ --
                 => ternory    => ? :

                 AND (&&) --> First Digit 0 Than No Check Condition.
                 OR (||) --> First Digit 1 Than No Check Condition.
*/

/*#include<stdio.h>

int main()
{
    int a = 1 , b = 2 , c;

   // c = a && b;
   // printf ("a : %d , b : %d , c : %d",a,b,c); //Ans : 1 2 1

    // c = a || b;
    // printf ("a : %d , b : %d , c : %d",a,b,c); //Ans : 1 2 1

    //  c = --a && b;
    //  printf ("a : %d , b : %d , c : %d",a,b,c); //Ans : 0 2 0
       
    //  c = --a && --b;
    //  printf ("a : %d , b : %d , c : %d",a,b,c); //Ans : 0 2 0
    
    //  c = a || --b;
    //  printf ("a : %d , b : %d , c : %d",a,b,c); //Ans : 1 2 1
      
       c = --a || --b;
       printf ("a : %d , b : %d , c : %d",a,b,c); //Ans : 0 1 1
}

*/

#include <stdio.h>

int main()
{
    int a = 1 , b = 2 , c = 1 , d ;

   // d = a && b && --c;
   // printf ("a : %d , b : %d , c : %d , d : %d ",a,b,c,d); //Ans : 1 2 0 0
   
   // d = a && b || --c;
   // printf ("a : %d , b : %d , c : %d , d : %d ",a,b,c,d); //Ans : 1 2 1 1
    
   // d = a || b && --c;
   // printf ("a : %d , b : %d , c : %d , d : %d ",a,b,c,d); //Ans : 1 2 1 1
   
   // d = --a || b && --c;
   // printf ("a : %d , b : %d , c : %d , d : %d ",a,b,c,d); //Ans : 0 2 0 1
    
    d = a && --b && c;
    printf ("a : %d , b : %d , c : %d , d : %d ",a,b,c,d); //Ans : 1 1 1 1

}