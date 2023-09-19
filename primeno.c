#include <stdio.h>
void main()
{
    int num=7,i=2,k=0;
    printf("Enter Number:");
    scanf("\n%d",&num);
    while(i<num)
    {
        if (num%i==0)
        {
            k++;
        }
     i++;
    }
    if (k==0)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not A Prime Number");
    }
    
    
}