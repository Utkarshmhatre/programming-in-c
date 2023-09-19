#include <stdio.h>

void main()
{
    int num,num1;
    printf("enter the number :\n");
    scanf("%d",&num);
    num1=num%2;
    if(num1==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
    
}
