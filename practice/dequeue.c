#include <stdio.h>

int que[100];
int front=-1;
int rear=-1;


void insert_begin(int maxsize)
{
    int item;
    printf("Enter value to insert at start: ");
    scanf("%d", &item);
    if((front+1==rear) || (rear==-1 && front==maxsize) || (front==-1 && rear==0))
    printf("Overflow!");

    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        que[front]=item;
    }

    else
    front++;
    que[front]=item;
}

void insert_end(int maxsize)
{
    int item;
    printf("Enter value to insert at start: ");
    scanf("%d", &item);
    if((front+1==rear) || (rear==-1 && front==maxsize) || (front==-1 && rear==0))
    printf("Overflow!");

    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        que[rear]=item;
    }

    else
    rear--;
    que[rear]=item;
}

void delete_start()
{
    if(front==-1 && rear==-1)
    printf("Underflow!");

    else
    front--;
}

void delete_end(int maxsize)
{
    if(front==-1 && rear==-1)
    printf("Underflow!");

    else if(rear==maxsize)
    rear=-1;

    else
    rear++;
}

void display(int maxsize)
{
    int i=front;    
    printf("\nElements in a deque are: ");    
        
    while(i!=rear)    
    {    
        printf(" %d ",que[i]);    
        i=(i+1)%maxsize;    
    }    
     printf(" %d ",que[rear]);   
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
    printf("\nChoose the options: \n1.Insert_begin \n2.Insert_end \n3.Delete_first \n4.Delete_end \n5.Display\n");
    scanf("%d", &c);

    if(c==1)
    insert_begin(maxsize);
    
    else if(c==2)
    insert_end(maxsize);

    else if(c==3)
    delete_start();

    else if(c==4)
    delete_end(maxsize);

    else if(c==5)
    display(maxsize);

}
}