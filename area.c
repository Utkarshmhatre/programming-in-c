#include <stdio.h>

void main()
{
    char input;
    float l,b,h,s,r;
    printf("Enter the area you want to calculate:\na)Circle\nb)Square\nc)rectangle\nd)triangle:\n");
    scanf("%c",&input);
    switch (input)
    {
     case 'a':
     printf("Enter the Radius of circle:\n");
     scanf("%f",&r);
     printf("Area of triangle is:%f", (22/7)*r*r );
      break;
     case 'b':
     printf("Enter the Side of square:\n");
     scanf("%f",&s);
     printf("Area of square is:%f", s*s );
     break;
      case 'c':
     printf("\nEnter the lenght of rectangle:\n");
     scanf("%f",&l);
     printf("\nEnter the breadth of rectangle:\n");
     scanf("%f",&b);
     printf("Area of rectangle is:%f", l*b );
     break;
     case'd':
     printf("\nEnter the height of triangle:\n");
     scanf("%f",&h);
     printf("\nEnter the breadth of triangle:\n");
     scanf("%f",&b);
     printf("Area of triangle is:%f", 0.5*h*b );
     break;
     default:
     printf("Bata toh sahi kiski area chaiye");
        break;
    }

}
