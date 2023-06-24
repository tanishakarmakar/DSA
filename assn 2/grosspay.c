#include<stdio.h>
#include <string.h>


struct employee{

char name[50];
char gen[10];
char dg[50];
char dpt[50];
float pay;
};



int main(){

    int i;
    int x=0;
    printf("Enter Number of Employee: ");
    scanf("%d",&x);
    struct employee e[x];
    for(i=0;i<x;i++){
        printf("\nEnter Name:");
        scanf("%s",&e[i].name);
        printf("\nEnter Gender(F/M/Not Say):");
        scanf("%s",&e[i].gen);
        printf("\nEnter Designation:");
        scanf("%s",&e[i].dg);
        printf("\nEnter Department:");
        scanf("%s",&e[i].dpt);
        printf("\nEnter Basic Pay:");
        scanf("%f",&e[i].pay);
    }
    printf("\nGross pay:");
    for(i=0;i<x;i++){
        int hr,da;
        int p= e[i].pay;
        hr = (25/100)*p;
        da = (75/100)*p;
        e[i].pay = hr+da+p;
        printf("\nName:%s, Gross Pay: %f ",e[i].name,e[i].pay);

    }
    return 0;
}
