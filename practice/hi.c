#include <std>

int queue[100];
int front=-1, rear=-1;

void enqueue(int maxsize, int item)
{
    if (front==rear)
    printf("overflow!");

    else if (front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=item;
    }

    else
    rear++;
    queue[rear]=item;
}

void display()
{
    struct node *ptr;
    ptr=front;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;

    }
    printf("%d ", ptr->data);
}

void display(int maxsize)
{
    for(int i=0; i!=rear; i=(i+1)%maxsize)
    {
        printf("%d ",que[i]);
    }
    
}