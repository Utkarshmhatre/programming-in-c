#include <stdio.h>
void main()
{
    int num,i=1;
    printf("Enter Number:");
    scanf("\n%d",&num);
    printf("the factors of %d are:\n",num);
    for(;i=num;++i);
    {
        if (num%i==0)
        {
            printf("%d",i);
        }
        
    }

}