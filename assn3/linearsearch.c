#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key) {
  int i;
for ( i = 0; i < n; ++i){
    if (a[i] == key){
    return i;
  }
}
    return -1;
}


int main() {
  int n, i, x;
  int *arr;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
   arr=(int*) malloc (sizeof(int)*n);
   printf("enter the elements of the array: \n");
   for(i=0;i<n;i++){
     scanf("%d", &arr[i]);
   }
printf("Enter term you want to search for: ");
scanf("%d", x);
int pos = search(arr, n, x);
if (pos != 1)
    printf("Key Found! ");
else
    printf("Key not found \n");
return 0;
}
