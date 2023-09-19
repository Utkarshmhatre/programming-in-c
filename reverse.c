#include <stdio.h>
void main()
{
    int num=1453,rem,rev;
    while (num>0)
    { 
     rem=num%10;
     rev=(rev*10)+rem;
     num=num/10;
    }
    printf("%d",rev);

}