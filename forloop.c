#include <stdio.h>

void main()
{
    int fact=1,a;
    int i=1;
    printf("Enter the number:\n");
    scanf("%d",&a);
     for(;i<=a;)
    {
         fact=fact*i;
         i++;
    }
    printf("factorial is:%d\n",fact);
}