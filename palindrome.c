#include <stdio.h>
void main()
{
    int num,rem,rev=0,temp;
    printf("Enter Number:");
    scanf("\n%d",&num);
    temp=num;
    while (num>0)
    {
     rem=num%10;
     rev=(rev*10)+rem;
     num=num/10;
    }
    if (temp==rev)
    {
     printf("number is a palindrome");
    }
    else
    {
     printf("number is a not palindrome");
    }
}