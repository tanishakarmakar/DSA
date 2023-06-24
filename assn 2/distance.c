#include<stdio.h>
#include<stdlib.h>

struct Distance{
    int km;
    int m;
};

int main(){
    struct Distance *d1 = NULL;
    struct Distance *d2 = NULL;
    struct Distance *d3 = NULL;

    d1 = (struct Distance*)malloc(sizeof(struct Distance));
    d2 = (struct Distance*)malloc(sizeof(struct Distance));
    d3 = (struct Distance*)malloc(sizeof(struct Distance));

    printf("Enter metres for first distance: ");
    scanf("%d", &d1->m);
    printf("Enter kilometres for first distance: ");
    scanf("%d", &d1->km);
    printf("Enter metres for second distance: ");
    scanf("%d", &d2->m);
    printf("Enter kilometres for second distance: ");
    scanf("%d", &d2->km);

    printf("Total metres: %d \n", d1->m);
    printf("Total kilo metres: %d \n", d1->km);


    while(d3->m >= 1000){
        d3->km = d3->km + 1000;
        d3->m = d3->m = 1000;
    }

    printf("Total metres: %d \n", d3->m);
    printf("Total kilo metres: %d \n", d3->km);

}
