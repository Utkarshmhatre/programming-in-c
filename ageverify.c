#include <stdio.h>
int main()
{
    int age;
    printf("enter age of the candidate:\n");
    scanf("%d",&age);
    if(age<18)
    {
        printf("The person is not eligible for voting");
    }
    if(age>=18)
    {
        printf("The person is eligible for voting");
    }
}