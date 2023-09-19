#include <stdio.h>
void main()
{
    int stop;
    printf("Enter destination accordingingly:\n1)Panvel\n2)Pune\n3)Satara\n4)kholapur\n");
    scanf("%d",&stop);
    if(stop==1)
    {
        printf("ticket for Panvel is booked");
    }
    else if(stop==2)
    {
        printf("ticket for Pune is booked");
    }
    else if(stop==3)
    {
        printf("ticket for Satara is booked");
    }
    else if(stop==4)
    {
        printf("ticket for Kholapur is booked");
    }
    else
    {
        printf("ticket for Kholapur is booked");
    }
}