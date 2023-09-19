#include <stdio.h>
void main()
{
    int a,d,option,w,balance=10000;
    while (1)
    {
    printf("\n\nEnter the pin:\n");
    scanf("%d",&a);
    if (a==2004)
    {
       printf("\t1)withdrawal\n\t2)Deposit \n\t3)Check balance\n\t4)Exit\t\t");
       scanf("%d",&option);
        if (option==1)
        {
            printf("Enter the Amount:\n");
            scanf("%d",&w);
            if (w>balance)
            {
                printf("Insufficient Balance");
            }
            else
            {
            printf("Remaining Balance is:%d\nPlease collect the cash",(balance-w));
            balance=balance-w;
            }
        }
         else if (option==2)
           {
            printf("Enter the amount deposited");
            scanf("%d",&d);
             printf("Total Balance is:%d",(balance+d));
             balance=balance+d;
           }
          else if (option==3)
         {
         printf("Remaining Balance is:%d\n",balance);
         }
         else if (option==4)
         {
         break;
         }
         
         else
         {
            printf("Invalid option");
         }

    }
    else
    {
     printf("The Pin is incorrect");   
    }


     }
}