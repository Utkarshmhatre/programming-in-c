#include <stdio.h>
int sqr(int a )
    {
    printf("\nArea(Square):%d",a*a);
    }
int rect (int l,int b)
    { 
    printf("\nArea(rectangle):%d",l*b);
    }
int tri (int l,int b, int h)
    { 
    printf("\nArea(triangle):%d",l*b*h);
    }   
float circ (float r)
    { 
    printf("\nArea(Circle):%f",r*(3.14));
    } 
float cuboid (float l, float w, float h)
    { 
    printf("\nArea(Cuboid):%f",2*(l*w)+(w*h)+(l*h));
    }
int sqrp (int a )
    {
    printf("\nPerimeter(Square):%d",a*4);
    }
int rectp (int l,int b)
    { 
    printf("\nPerimeter(rectangle):%d",(2*(l+b)));
    }
int trip (int s)
    { 
    printf("\nPerimeter( Equilateral triangle):%d",(s*3));
    }   
float circp (float r)
    { 
    printf("\nCircumference(Circle):%f",2*r*(22/7));
    } 
float cuboidp (float l, float w, float h)
    { 
    printf("\nPerimeter(Cuboid):%f",4*(l+w+h));
    }

void main()
{
    int choice,s,l,b,h,w;
    float r;
    printf("\n1)Area\n2)perimeter:\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n1)Square\n2)Rectangle\n3)Triangle\n4)circle\n5)Cuboid:\n");
        scanf("%d",&choice);
        if (choice==1)
        {
        printf("\n Enter side of the Square:");
        scanf("%d",&s);
        sqr(s);
        }
        if (choice==2)
        {

        printf("\n Enter length of the Rectangle:");
        scanf("%d",&l);
        printf("\n Enter Breadth of the Rectangle:");
        scanf("%d",&b);
        rect(l,b);
        }
        if(choice==3)
        {

        printf("\n Enter length of the Triangle:");
        scanf("%d",&l);
        printf("\n Enter Breadth of the Triangle:");
        scanf("%d",&b);
        printf("\n Enter Height of the Triangle:");
        scanf("%d",&h);
        tri(l,b,h);
        }

        if(choice==4)
        {
        printf("\n Enter radius of the circle:");
        scanf("%d",&r);
        circ(r);
        }
        if (choice==5)
        {

        printf("\n Enter length of the Cuboid:");
        scanf("%d",&l);
        printf("\n Enter Width of the Cuboid:");
        scanf("%d",&w);
        printf("\n Enter Height of the Cuboid:");
        scanf("%d",&h);
        cuboid(l,w,h);
        }       
        
    }
    
    else if(choice==2)
    {
        printf("\n1)Square\n2)Rectangle\n3)Equilateral Triangle\n4)circle\n5)Cuboid:\n");
        scanf("%d",&choice);
        if (choice==1)
        {
        printf("\n Enter side of the Square:");
        scanf("%d",&s);
        sqrp(s);
        }
        if (choice==2)
        {
        printf("\n Enter length of the Rectangle:");
        scanf("%d",&l);
        printf("\n Enter Breadth of the Rectangle:");
        scanf("%d",&b);
        rectp(l,b);
        }
        if (choice==3)
        {
        printf("\n Enter side of the Triangle:");
        scanf("%d",&s);
        trip(s);
        }
        if (choice==4)
        {
        printf("\n Enter radius of the circle:");
        scanf("%d",&r);
        circp(r);
        }
        if (choice==5)
        {

        printf("\n Enter length of the Cuboid:");
        scanf("%d",&l);
        printf("\n Enter Width of the Cuboid:");
        scanf("%d",&w);
        printf("\n Enter Height of the Cuboid:");
        scanf("%d",&h);
        cuboidp(l,w,h);
        }  
       
        
    }
    else
    {
        printf("\nEnter a valid input");
    }
}