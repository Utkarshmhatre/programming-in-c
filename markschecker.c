#include <stdio.h>
void main()
{
    int marks;
    printf("Enter the Total marks scored:\n");
    scanf("%d",&marks);
    if(marks<0)
    {
        printf("marks -ve mai nahi hote bhai.. maths seekh le phele");
    }
    else if(marks==0)
    {
        printf("padhle bhai 0 aaye hai");
    }
    else if (marks>0&&marks<=50)
    {
        printf("you have recived an E grade");
    }
    
    else if (marks>50&&marks<=100)
    {
        printf("you have recived an D grade");
    }
    else if (marks>100&&marks<=150)
    {
        printf("you have recived an C grade");
    }
    
    else if (marks>150&&marks<=200)
    {
        printf("you have recived an B grade");
    }
    else if (marks>200 && marks<=250)
    {
        printf("you have recived an A grade");
    }
    else
    {
        printf("phek mat bhai...");
    }
}
