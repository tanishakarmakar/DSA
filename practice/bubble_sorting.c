#include <stdio.h>
    void main()
    {
int n;
      printf("Enter the no of elements in array\n");
      scanf("%d", &n);

      int arr[n];
      printf("enter no.s in array: ");
      for ( int i=0; i<n; i++)
      {scanf("%d", &arr[i]);}
for(int i=0; i<n-1; i++)
{
  for(int j=0; j<n-i-1; j++)
  {
    if(arr[j]>arr[j+1])
    {
      int temp;
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}

      printf("The sorted array is: ");
      for(int i=0; i<n; i++)
      {
      printf("%d ", arr[i]);

    }
  }
