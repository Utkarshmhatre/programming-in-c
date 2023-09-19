#include<stdio.h>
void main()
{
 int st,cur=0;
 
    while (cur<=100)
    {
        printf("Enter Any Number Between 1-6:\t");
        scanf("%d",&st);
        if (st<=6&&st>=1)
        {
        cur=cur+st;
         if (cur<100)
         {
            //all snakes
            if (cur==13)
            {
                cur=7;
                printf("You got bitten by a snake");
            }
            if (cur==19)
            {
                cur=4;
                printf("You got bitten by a snake");
            }
            if (cur==48)
            {
                cur=14;
                printf("You got bitten by a snake");
            }
            if (cur==57)
            {
                cur=36;
                printf("You got bitten by a snake");
            }
            if (cur==68)
            {
                cur=49;
                printf("You got bitten by a snake");
            }
            if (cur==83)
            {
                cur=61;
                printf("You got bitten by a snake");
            }
            if (cur==87)
            {
                cur=66;
                printf("You got bitten by a snake");
            }
            if (cur==94)
            {
                cur=88;
                printf("You got bitten by a snake");
            }
            if (cur==98)
            {
                cur=84;
                printf("You got bitten by a snake");
            }
            



            //ladders
            if (cur==6)
            {
                cur=24;
                printf("You found a ladder");
            }
           if (cur==10)
            {
                cur=12;
                printf("You found a ladder");
            }
            if (cur==33)
            {
                cur=11;
                printf("You found a ladder");
            }
            if (cur==38)
            {
                cur=20;
                printf("You found a ladder");
            }
            if (cur==40)
            {
                cur=59;
                printf("You found a ladder");
            }
            if (cur==45)
            {
                cur=54;
                printf("You found a ladder");
            }
            if (cur==64)
            {
                cur=78;
                printf("You found a ladder");
            }
            if (cur==72)
            {
                cur=91;
                printf("You found a ladder");
            }
            if (cur==86)
            {
                cur=94;
                printf("You found a ladder");
            }
            printf("Currently you are on : %d\n",cur);
         }
           else
          {
             printf("\n***************.....Winner.....***************");
            break;
          }
         }
       else
        {
         printf("Enter a vaild input");
       }
    
 
 
}