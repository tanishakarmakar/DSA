#include<stdio.h>
int main()
{
int M[100][100], m, n, k=1, size=0, largest;
printf("Enter number of rows: ");
scanf("%d", &m);
printf("Enter number of columns: ");
scanf("%d", &n);
for(int i=0; i<m; i++){
  for(int j=0; j<n; j++){
    printf("Enter element [%d][%d]: ", i+1, j+1);
    scanf("%d", &M[i][j]);
    if (M[i][j] != 0)
      size++;
  }
}
    printf("The matrix is \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ",M[i][j]);

        }
        printf("\n");
    }
int T[size+1][3];
T[0][0]=m;
T[0][1]=n;
T[0][2]=size;

for(int i=0; i<m; i++){
  for(int j=0; j<n; j++){
    if (M[i][j]!=0)
    {
      T[k][0]=i;
      T[k][1]=j;
      T[k][2]=M[i][j];
      k++;

    }
  }
}

    printf("Triplet representation of the matrix is \n");
    for (int i=0; i<size+1; i++)
    {
        for (int j=0; j<3; j++)
            printf(" %d ", T[i][j]);
        printf("\n");
    }

for (m=1; m<(size+1); m++){
  if (T[m][2]>T[m+1][2]){
    largest=T[m][2];
  }
}
printf("The largest element is %d", largest);
    return 0;
}
