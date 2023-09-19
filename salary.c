#include <stdio.h>
int main()
{
    int salary,increment,decrement;
    printf("enter yout salary:\n");
    scanf("%d",&salary);
    increment=salary+(salary*0.07);
    decrement=salary-salary*0.07;
    if(salary<=10000)
    {
        printf("\nYour Net Salary will Be:\n%d",increment);
    }
    else
    {
        printf("\nYour Net Salary will Be:\n%d",decrement);
    }
}