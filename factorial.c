#include<stdio.h>
void main()
{
 int i=1,a,fact=1;
 printf("Enter the number:\n");
 scanf("%d",&a);
 while (i<=a)
    {
       fact=fact*i;
    i=i+1;
    }
 printf("factorial is:%d\n",fact);
    }
