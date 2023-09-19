#include <stdio.h>
int add(int a , int b)
{printf ("\nAddition:%d",(a+b));}
int sub (int a , int b)
{printf ("\nSubtraction:%d",(a-b));}
int multiply(int a , int b)
{printf ("\nMultiplication:%d",(a*b));}
float divide(float a ,float b)
{printf ("\nDivision:%f",(a/b));}
int modulus(int a, int b)
{ printf ("\nRemainder:%d",(a%b));}
void main()
   {
    add(2,4);
    sub(2,4);
    multiply(2,4);
    divide(2,4);
    modulus(2,4);
    }