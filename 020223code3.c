#include <stdio.h>
int sqr(int s)
    {
    int k;
    k=s*s;
    return k;
    }
    void main()
{
    int s;
     printf("Enter the Side of square:\n");
     scanf("%d",&s);
     printf( "\nArea(square):%d",sqr(s)) ; 
}