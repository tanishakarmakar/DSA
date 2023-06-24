#include<stdio.h>
#include<stdlib.h>

int main(){
    int l1 = 0, l2 = 0, n = 3;

    // int l1 = 4, l2 = 4, n = 3;
    // int sparse1[3][3] = {
    //     {2, 0, 0},
    //     {0, 0, 1},
    //     {0, 3, 9}
    // };
    // int sparse2[3][3] = {
    //     {2, 0, 0},
    //     {0, 0, 1},
    //     {3, 3, 0}
    // };

    int sparse1[3][3];
    printf("Enter first matrix: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d %d = ", i, j);
            scanf("%d", &sparse1[i][j]);
            if(sparse1[i][j] != 0)
                l1++;
        }
    }

    int triplet1[l1+1][3];

    int k = 1;
    triplet1[0][0] = 3;
    triplet1[0][1] = 3;
    triplet1[0][2] = l1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(sparse1[i][j] != 0){
                triplet1[k][0] = i;
                triplet1[k][1] = j;
                triplet1[k][2] = sparse1[i][j];
                k++;
            }
        }
    }

    printf("Enter second matrix: \n");
    int sparse2[3][3];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d %d = ", i, j);
            scanf("%d", &sparse2[i][j]);
            if(sparse2[i][j] != 0)
                l2++;
        }
    }

    int triplet2[l2+1][3];

    k = 1;
    triplet2[0][0] = 3;
    triplet2[0][1] = 3;
    triplet2[0][2] = l2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(sparse2[i][j] != 0){
                triplet2[k][0] = i;
                triplet2[k][1] = j;
                triplet2[k][2] = sparse2[i][j];
                k++;
            }
        }
    }


    int triplet[l1+l2+1][3];

    k = 1;
    triplet[0][0] = 3;
    triplet[0][1] = 3;
    triplet[0][2] = l1+l2;


    int i = 1, j = 1, I = 1;
    while((i < l1+1) || (j < l2+1)){

        // printf("%d %d \n", i, j);

        if(triplet1[i][0] < triplet2[j][0]){
            triplet[I][0] = triplet1[i][0];
            triplet[I][1] = triplet1[i][1];
            triplet[I][2] = triplet1[i][2];
            I++;
            i++;
        }
        else if(triplet1[i][0] > triplet2[j][0]){
            triplet[I][0] = triplet2[j][0];
            triplet[I][1] = triplet2[j][1];
            triplet[I][2] = triplet2[j][2];
            I++;
            j++;
        }
        else if(triplet1[i][0] == triplet2[j][0]){
            if(triplet1[i][1] == triplet2[j][1]){
                triplet[I][0] = triplet1[i][0];
                triplet[I][1] = triplet1[i][1];
                triplet[I][2] = triplet1[i][2] + triplet2[j][2];
                I++;
                i++;
                j++;
            }
            else if(triplet1[i][1] < triplet2[j][1]){
                triplet[I][0] = triplet1[i][0];
                triplet[I][1] = triplet1[i][1];
                triplet[I][2] = triplet1[i][2];
                I++;
                i++;
            }
            else if(triplet1[i][1] > triplet2[j][1]){
                triplet[I][0] = triplet2[i][0];
                triplet[I][1] = triplet2[j][1];
                triplet[I][2] = triplet2[j][2];
                I++;
                j++;
            }
        }
    }




    // for(int i = 0; i < l1+1; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d ", triplet1[i][j]);
    //     }
    //     printf("\n");
    // }





    // for(int i = 0; i < l2+1; i++){
    //     for(int j = 0; j < 3; j++){
    //         printf("%d ", triplet2[i][j]);
    //     }
    //     printf("\n");
    // }




    printf("Addition of both triplets: \n");

    for(int i = 0; i < I; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", triplet[i][j]);
        }
        printf("\n");
    }





    return 0;
}
