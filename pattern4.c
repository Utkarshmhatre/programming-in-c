#include <stdio.h>

void main()
{
 int i=5;
 for (; i>=1; i--)
 {
    for(int j=1;j<=i;j++)
    {
        printf("%d\t",i);
    }
    printf("\n");
 }
 
}