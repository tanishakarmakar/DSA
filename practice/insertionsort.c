#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter data on array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;
    }

    printf("sorted array: ");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
}