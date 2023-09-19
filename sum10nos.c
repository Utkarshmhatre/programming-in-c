#include <stdio.h>
void main()
{
 int sum,i=1,a;
 printf("enter the number\n");
 scanf("%d",&a);
  while (i<=a)
  {
    sum=sum+i;
    i=i+1;
  }
  printf("sum is=%d",sum);
 }