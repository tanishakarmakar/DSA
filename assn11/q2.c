#include <stdio.h>

int main()
{
    int arr[100];
    int n, first, last, middle, value;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter data in array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
printf("Enter element to search: ");
scanf("%d", &value);
    first=0;
    last=n-1;

    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<value)
        first=middle+1;

        else if(arr[middle]==value)
        {
        printf("Value found at %d", middle+1);
        break;
        }

        else 
        last=middle-1;
        middle=(first+last)/2;

    }
    if(first>last)
    printf("Value not found!");

    return 0;

}