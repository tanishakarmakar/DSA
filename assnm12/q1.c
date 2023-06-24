/*WAP to input undirected graph and display the no. of edges using adjacency matrix*/

#include <stdio.h>

int main()
{
    int n;
    int count;
    count=0;
    int adj[100][100];
    printf("Enter no. of vertices: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter %d and %d have edge between them?(0/1): ", i+1, j+1);
            scanf("%d", &adj[i][j]);
            if(adj[i][j]==1)
            count++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %d ", adj[i][j]);
        }
        printf("\n");
    }

    printf("Number of edges= %d ", count/2);
    



}
