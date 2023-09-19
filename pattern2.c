#include <stdio.h>

void main()
{
 int i=1;
 for (; i<=5; i++)
 {
    for(int j=5;j>=1;j--)
    {
        printf("%d\t",j);
    }
    printf("\n");
 }
 
}