#include <stdio.h>

void swap(int*, int*);

int main()
{
   int a, b;

   printf("Enter a and b\n");
   scanf("%d%d",&a,&b);

   printf("Before Swapping a = %d b = %d\n", a, b);

   swap(&a, &b);

   printf("After Swapping a = %d b = %d", a, b);

   return 0;
}

void swap(int *c, int *d)
{
   int temp;

   temp = *d;
   *d = *c;
   *c = temp;
}
