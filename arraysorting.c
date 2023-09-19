#include <stdio.h>

void main()
{
    int arr[10]={56,23,11,45,12,67},adult=0,child=0;

    for(int i=0;i<10;i++)
    {
     if ( arr[i]>=18)
     {
        adult++;
     }
     else
     {
     child++;
     }
    }
    printf("\nAdult:%d\nChild:%d",adult,child);
}