#include <stdio.h>

void main()
{
    int a=20,b=30,c=40;
    printf("\nBefore:%d,%d,%d",a,b,c);
    a=(a*b);
    b=(a)/(b);
    b=a/b;
    a=a/b;
    /*b=(b*c);
    c=(b)/(c);
    c=b/c;
    b=b/c;*/
   
    printf("\nAfter:%d,%d,%d",a,b,c);
}