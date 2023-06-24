/*WAP for insertion sorting*/

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter values in array: ");
    for( i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for( i=0; i<n; i++)
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

    for(int i=0; i<n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}