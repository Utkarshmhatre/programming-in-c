#include <stdio.h>
void main()
{
    float pen,x,total,profit;
    printf("Enter the number of Pen/Articles");
    scanf("%f",&pen);
    printf("Enter the total profit percentage ");
    scanf("%f",&profit);
    printf("Enter the Total Amount:");
    scanf("%f",&total);
    x=total/(pen+(profit/100));
    printf("x=%f",x);
 
 }