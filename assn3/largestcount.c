#include <stdio.h>
int main ()
{
  int arr[10];
    int i, n, max,count=0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(max==arr[i])
        count++;
    }
    printf("The Largest Element: %d",max);
    printf("\nThe Number of times it occured: %d",count);

    return 0;
}
