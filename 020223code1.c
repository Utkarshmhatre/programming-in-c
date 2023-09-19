#include <stdio.h>
int sqr(int s)
    {
    printf("/nArea(Square):%d",s*s);
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
    printf("\nArea(Circle):%f",r*(22/7));
    } 

    void main()
{
    sqr(5);
    rect(5,10);
    tri(5,10,15);
    circ(5);
}