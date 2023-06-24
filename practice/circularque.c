#include <stdio.h>

int que[100];
int front=-1;
int rear=-1;

void enqueue(int maxsize)
{
    int item;
    printf("Enter the item to insert: ");
    scanf("%d", &item);
    if(front==0 && rear==maxsize-1)
    printf("Overflow!");

    else if(front==rear+1)
    printf("Overflow");

    else if(front==-1 && rear==-1)
    {
        front=0; 
        rear=0;
        que[rear]=item;

    }

    else
    rear=(rear+1)%maxsize;
    que[rear]=item;
}

void dequeue(int maxsize)
{
    if(front==-1 && rear==-1)
    printf("Underflow!");

    else
    front=(front+1)%maxsize;
}

void display(int maxsize)
{
    for(int i=front; i!=rear; i=(i+1)%maxsize)
    {
        printf(" %d ", que[i]);
    
    }
    printf(" %d ", que[rear]);
}


int main()
{
    int maxsize;
    int c;
    char x;
    printf("Enter the maxsize of queue: ");
    scanf("%d", &maxsize);
while(x='y')
{
    printf("\nChoose the options: \n1.Enqueue \n2.Dequeue \n3.Display\n");
    scanf("%d", &c);

    if(c==1)
    enqueue(maxsize);
    
    else if(c==2)
    dequeue(maxsize);

    else if(c==3)
    display(maxsize);

}
}