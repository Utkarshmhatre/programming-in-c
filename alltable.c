#include <stdio.h>

void main()
{
 int num,i=1;
 printf("enter number:\n");
 scanf("%d\n",&num);
  while (i<=10)
  {
     printf("%d\n",i*num);
     i++;
  }
 }