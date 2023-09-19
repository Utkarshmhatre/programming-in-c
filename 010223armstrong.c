#include <stdio.h>
void main()
{
    int num,rem,arm=0,temp;
    printf("Enter Number:");
    scanf("\n%d",&num);
    temp=num;
    while (num>0)
    {
     rem=num%10;
     arm=arm+(rem*rem*rem);
     num=num/10;
    }
    if (temp==arm)
    {
     printf("number is a armstrong number");
    }
    else
    {
     printf("number is a not armstrong number");
    }
}  