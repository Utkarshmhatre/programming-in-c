#include <stdio.h>

int add(int a , int b)
{printf ("\nAddition:%d",(a+b));}
int add2(int a , int b,int c)
{printf ("\nAddition:%d",(a+b+c));}

void main()
{
    add(1,2);
    add2(1,2,3);
}