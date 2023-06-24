#include <stdio.h>
int main ()
{
  int arr[100];
    int i, n, temp=0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Input elements in the array :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i <= n/2; i++)
    {
      for (int j = n-1-i; j>=0; j--)
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        break;
      }

    }
    printf("After Reversing:\n ");
    for ( i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }

return 0;
}
