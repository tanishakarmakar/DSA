#include <stdio.h>

int main()
{

    char ch;
    char *pCh;
    pCh = &ch;
    ch = 'T';

    printf("Value of ch: %c\n",ch);
    printf("Address of ch: %p\n",&ch);

   return 0;
}
