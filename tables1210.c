#include <stdio.h>

void main()
{
 int i=1;
 for (; i<=10; i++)
 {
    for(int j=1;j<=10;j++)
    {
        printf("%d\t",i*j);
    }
    printf("\n");
 }
 
}