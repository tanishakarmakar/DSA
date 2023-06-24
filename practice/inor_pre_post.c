#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *lc, *rc;

};

void build(struct tree *ptr)
{
    int ch;
    printf("Enter value: ");
    scanf("%d", &ptr->data);

    ptr->lc=NULL;
    ptr->rc=NULL;

    printf("Do you want to add a left child of %d?(0/1): ",ptr->data);
    scanf("%d", &ch);

    if(ch==1)
    {
        struct tree *new=(struct tree*)malloc(sizeof(struct tree));
        ptr->lc=new;
        build(new);
    }

    printf("Do you want to add a right child of %d?(0/1): ",ptr->data);
    scanf("%d", &ch);

    if(ch==1)
    {
        struct tree *new=(struct tree*)malloc(sizeof(struct tree));
        ptr->rc=new;
        build(new);
    }
}

void inord(struct tree *ptr)
{
    if(ptr->lc!=NULL)
    inord(ptr->lc);
    printf("%d ", ptr->data);

    if(ptr->rc!=NULL)
    inord(ptr->rc);
}

void preord(struct tree *ptr)
{
    printf("%d ", ptr->data);
    if(ptr->lc!=NULL)
    preord(ptr->lc);

    if(ptr->rc!=NULL)
    preord(ptr->rc);
}

void postord(struct tree *ptr)
{
    if(ptr->lc!=NULL)
    postord(ptr->lc);

    if(ptr->rc!=NULL)
    postord(ptr->rc);
    
    printf("%d ", ptr->data);
}

int main()
{
    struct tree *root;
    root=(struct tree *)malloc(sizeof(struct tree));
    build(root);
   printf("Inorder display: ");
   inord(root);
   printf("\nPreorder display: ");
   preord(root);
   printf("\npostorder display: ");
   postord(root);
}