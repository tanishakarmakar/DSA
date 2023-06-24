#include <stdlib.h>
#include <stdio.h>

struct tree
{
    int data;
    struct tree *rc, *lc;
};

void build(struct tree *ptr)
{
    int ch;
    printf("Enter data: ");
    scanf("%d", &ptr->data);

    ptr->lc=NULL;
    ptr->rc=NULL;

    printf("Do you want left child of %d?(0/1): ",ptr->data);
    scanf("%d", &ch);

    if(ch==1)
    {
        struct tree *new=(struct tree *)malloc(sizeof(struct tree));
        ptr->lc=new;
        build(new);
    }

    printf("Do you want right child of %d?(0/1): ",ptr->data);
    scanf("%d", &ch);

    if(ch==1)
    {
        struct tree *new=(struct tree *)malloc(sizeof(struct tree));
        ptr->rc=new;
        build(new);
    }


}

struct tree *stack[50];
int top=-1;

void push(struct tree *data)
{
    top++;
    stack[top]=data;
}

void pop()
{
    if(top == -1)
        printf("\nstack underflow!");
    else
    {
        printf("%d ",stack[top]->data);
        top--;
    } 
}

void inord(struct tree *root)
{
    struct tree *ptr;
    ptr=root;

    while(ptr!=NULL || top!=-1)
    {
        while(ptr!=NULL)
        {
            push(ptr);
            ptr=ptr->lc;
        }

        ptr=stack[top];
        pop();
        ptr=ptr->rc;
    }

}

int main()
{
    struct tree *root=(struct tree*)malloc(sizeof(struct tree));
    build(root);
    printf("\nnon recursive inorder traversal : ");
    inord(root);
}