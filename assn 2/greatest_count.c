#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n, biggest, count=1;
  int *arr;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
   arr=(int*) malloc (sizeof(int)*n);
   biggest=0;
   printf("enter the elements of the array: \n");
   for(int i=0; i<n; i++)
   {
     scanf("%d", &arr[i]);
     if (arr[i]>biggest)
       biggest=arr[i];
     else if(arr[i]==biggest)
     count++ ;
   }
   printf("The largest element=%d\n",biggest);
   printf("Largest number count=%d times",count);
    return 0;
}
