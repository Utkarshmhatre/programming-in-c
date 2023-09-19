#include <stdio.h>

void main()
{
    int arr[10]={3,6,11,44,77,33,90,56,83,69},sum=0;
    for(int i=0;i<10;i++)
    {
     sum=sum+arr[i];
    }
    printf("sum of arrays is:%d",sum);
}