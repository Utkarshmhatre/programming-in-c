#include <stdio.h>

void main()
{
    int p,r,t;
     printf("enter the principle amount:\n");
     scanf("%d",&p);
     printf("enter the Rate Of Intrest:\n");
     scanf("%d",&r);
     printf("enter the number Time Period:\n");
     scanf("%d",&t);
     printf("\nSimple Intrest is:%d",(p*r*t)/100);
     printf("\nTotal Amount is:%d",((p*r*t)/100)+p);

}