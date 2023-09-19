#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Number:");
    scanf("%d",&a);
    printf("Enter Number:");
    scanf("%d",&b);
    printf("Enter Number:");
    scanf("%d",&c);
    if (a>b)
    { 
     if (a>c)
     {
         printf("A is Greatest");
     }
     else
     {
         printf("C is Greatest");
     }
     
    }
    else
    {
      if (b>c)
      {
        printf("B is Greatest");
      }
      else
      {
        printf("C is Greatest");
      }
      
      
    }
    
      return 0;
}