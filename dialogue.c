#include <stdio.h>

void main()
{
    char dialogue;
    printf("Enter choice:a,b,c:\n");
    scanf("%c",&dialogue);
    switch (dialogue)
    {
     case 'a':
     printf("Life is a race … If you don’t run fast… you will be like a broken andaa…");
      break;
     case 'b':
     printf("Thode din idhar rahega toh apne aap Bhagwan se vishwaas uth jayega.Phir bajoo mein nangi ladkiyon ki tasveerein lagayega aur bolega : Oh God! Ek Baar Dila De…");
      break;
      case 'c':
     printf("Aaj raat ko underwear bina hole wali pehenna…Millimeters warning to the hostelers and rightly so 😀");
      break;
     default:
     printf("bas itne hi dialogues yaad hai");
        break;
    }
}