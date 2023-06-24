#include <stdlib.h>
#include<stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int a[],int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
}



int main()
{
    int n;
    printf("Enter elements of array: ");
    scanf("%d", &n);
int arr[n];
    for (int i = 0; i < n; ++i) {
            printf("Enter the element %d  - ",i+1);
            scanf("%d",&arr[i]);
        }

printf("\n");
    sort(arr,n);
printf("Sorted Array - \n");
    for (int i = 0; i < n; i++)
        printf(" %d ",arr[i]);


    return 0;

  }
