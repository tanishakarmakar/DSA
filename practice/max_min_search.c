#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *rc, *lc;

};


void build(struct tree *ptr)
{
    int ch;
    printf("Enter value: ");
    scanf("%d", &ptr->data);

    ptr->lc=NULL;
    ptr->rc=NULL;

    printf("Left child of %d?(0/1): ", ptr->data);
    scanf("%d", &ch);

    if(ch==1)
    {
        struct tree *new=(struct tree*)malloc(sizeof(struct tree));
        ptr->lc=new;
        build(new);
    }

    printf("right child of %d?(0/1): ", ptr->data);
    scanf("%d", &ch);

    if(ch==1)
    {
        struct tree *new=(struct tree*)malloc(sizeof(struct tree));
        ptr->rc=new;
        build(new);
    }


}

int min_search(struct tree *root)
{
    struct tree *ptr=root;
    while(ptr->lc!=NULL)
    {
        ptr=ptr->lc;
    }

    return(ptr->data);
}

int max_search(struct tree *root)
{
    struct tree *ptr=root;
    while(ptr->rc!=NULL)
    {
        ptr=ptr->rc;
    }

    return(ptr->data);
}

struct tree *search(struct tree *root, int key)
{
    if(root==NULL)
    return NULL;

    else if(key==root->data)
    return (root);

    else if(key>root->data)
    search(root->rc,key);

    else
    search(root->lc,key);
}

int main()
{
    int min, max, key;
    struct tree *root=(struct tree*)malloc(sizeof(struct tree));
    build(root);
    printf("Enter key you want to search: \n");
    scanf("%d", &key);

    struct tree *s=search(root,key);
    if(s!=NULL)
    printf("Key found!");

    else
    printf("Key not found!");

    min=min_search(root);
    printf("\nMin element is %d", min);
    max=max_search(root);
     printf("\nMax element is %d", max);

}