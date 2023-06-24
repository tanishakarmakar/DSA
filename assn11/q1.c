#include <stdio.h>

int main()
{
    int arr[100];
    int n, value, i;
    int flag;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter data in array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &value);

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