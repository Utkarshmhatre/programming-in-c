#include <stdio.h>

void main()
{
 int i=1;
 for (; i<=10; i++)
 {
    for(int j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
 }
 
}