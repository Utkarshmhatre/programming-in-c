#include <stdio.h>

void main()
{
    char gp;
    printf("Enter choice:a,b,c:\n");
    scanf("%c",&gp);
    switch (gp)
    {
     case 'a':
     printf("ADHM");
      break;
     case 'b':
     printf("YAHD");
      break;
      case 'c':
     printf("KGF");
      break;
     default:
     printf("kuch nahi hai");
        break;
    }

}
