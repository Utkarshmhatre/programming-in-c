#include <stdio.h>
void main()
{
    int num,a,b;
    printf("Enter number:\n");
    scanf("%d",&num);
    a=num%100;
  /*
       if (num/100==1)
        {
          printf("\nOne Hundred");
        }
       if (num/100==2)
        {
          printf("\nTwo Hundred");
        }
       if (num/100==3)
        {
          printf("\nThree Hundred");
        }
       if (num/100==4)
        {
          printf("\nFour Hundred");
        }
       if (num/100==5)
        {
          printf("\nFive Hundred");
        }
        
       if (num/100==6)
        {
          printf("\nSix Hundred");
        }
       if (num/100==7)
        {
         printf("\nSeven Hundred");
        }
       if (num/100==8)
        {
          printf("\nEight Hundred");
        }
       if (num/100==9)
        {
          printf("\nNine Hundred");
        }*/
        
    
            

     
     if(num/10>=10)
      {
      if (num%100==11)
        {
          printf("\nEleven");
        }
      if (num%100==12)
        {
          printf("\nTwelve");
        }
      if (num%100==13)
        {
          printf("\nThirteen");
        }
        if (num%100==14)
        {
          printf("\nFourteen");
        }
      if (num%100==15)
        {
          printf("\nfifteen");
        }
        if (num%100==16)
        {
          printf("\nSixteen");
        }
        if (num%100==17)
        {
          printf("\nseventeen");
        }
        if (num%100==18)
        {
          printf("\neighteen");
        }
        if (num%100==19)
        {
          printf("\nnineteen");
        }
      } 
       else
       {
         if (a/10==2)
        {
          printf("\nTwenty");
        }
     if (a%10==3)
        {
          printf("\nThirty");
        }
     if (a%10==4)
        {
          printf("\nFourty");
        }
     if (a%10==5)
        {
          printf("\nFifty");
        }
     if (a%10==6)
        {
          printf("\nSixty");
        }
     if (a%10==7)
        {
         printf("\nSeventy");
        }
     if (a%10==8)
        {
          printf("\nEighty");
        }
     if (a%10==9)
        {
          printf("\nNinety");
        }

       b=a/10;
    if (b%10==1)
        {
          printf("\nOne");
        }
     if (b%10==2)
        {
          printf("\nTwo");
        }
     if (b%10==3)
        {
          printf("\nThree");
        }
     if (b%10==4)
        {
          printf("\nFour");
        }
     if (b%10==5)
        {
          printf("\nFive");
        }
     if (b%10==6)
        {
          printf("\nSix");
        }
     if (b%10==7)
        {
         printf("\nSeven");
        }
     if (b%10==8)
        {
          printf("\nEight");
        }
     if (b%10==9)
        {
          printf("\nNine ");
        }
     
}
    
}