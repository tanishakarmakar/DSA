
#include<stdio.h>
int main()
{
int m[100][100], r, c, flag=0, temp2=0, temp3=0;
printf("Enter no. of rows: ");
scanf("%d", &r);
printf("Enter no. of cols: ");
scanf("%d", &c);

for( int i=0; i<r; i++){
  for( int j=0; j<c; j++){
    printf("Enter Element for [%d][%d]: ", i+1, j+1);
    scanf("%d", &m[i][j]);
  }
}
printf("The matrix is \n");
for( int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        printf(" %d \t",m[i][j]);
        if (i==j && m[i][j]==0)
                    flag=1;
    }
    printf("\n");
}
if (r==c)
    {
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        {
            if (flag==1)
            printf("Wrong Input");
            else
            {
                if(i>j && m[i][j]!=0)
                temp2++;
                else if(j>i && m[i][j]!=0)
                temp3++;
            }
        }
    }

    if (temp2==0 && temp3==0)
    printf("Both Upper and Lower Triangular Matrix");
    else if(temp2==0)
    printf("Upper Triangular Matrix");
    else if(temp3==0)
    printf("Lower Triangular Matrix");
    else
    printf("Not of any type");
    }

    else
    printf("Wrong Input");

    return 0;
}
