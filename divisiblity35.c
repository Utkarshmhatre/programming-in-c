#include <stdio.h>

void main()
{
    int num;
    printf("enter the :\n");
    scanf("%d",&num);
    if(num%5==0||num%3==0)
    {
     
        if(num%5==0&&num%3==0)
        {
        printf("\nnumber is divisible by 3 & 5");
        }
    
        if (num%3==0 && !num%5==0)
        {
            printf("\nnumber is divisible by 3 & not 5");
            
        }
        if(!num%3==0 && num%5==0)
        {
            printf("\nnumber is divisible by 5 & not 3");
        }
        
        
    }
    else
    {
        printf("\nnumber is not divisible by 3 & 5");
    }
    
    
    
}