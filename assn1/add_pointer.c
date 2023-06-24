#include <stdio.h>
int main()
{
   int n1, n2, *p, *q, sum;

   printf("Enter 2 integers to add\n");
   scanf("%d%d", &n1, &n2);
   p = &n1;
   q = &n2;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
