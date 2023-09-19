#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num%17==0)
    {
        printf("Number is divisible by 17");
    }
    else
    {
        printf("Number is not divisible by 17");
    }
    
}