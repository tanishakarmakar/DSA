#include <stdio.h>


void lin_search(int n, int arr[], int value)
{
    int i, flag;
for(int i=0; i<n; i++)
    {
        if(arr[i]==value)
        {
        flag=1;
        }

    }
if (flag==1)
printf("Value found at location %d!", i+1);

else
printf("Value not found!");
}

void bin_search(int n, int arr[], int value)
{
    int first, middle, last;
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
}

int main()
{
    int arr[100];
    int n;
    int value, c;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter data in array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

    printf("Enter method to search:\n1.Linear Search\n2.Binary Search\n");
    scanf("%d", &c);

    if(c==1)
    lin_search(n, arr,value);

    if(c==2)
    bin_search(n, arr,value);

    return 0;

}