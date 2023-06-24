
#include<stdio.h>
struct Node {

  int data;
  struct Node*next;
};

int main()
{
  struct Node*HEAD;
  struct Node*PTR;
  struct Node N1, N2, N3;
  HEAD=&N1;
  N1.data=10;
  N1.next=&N2;
  N2.data=20;
  N2.next=&N3;
  N3.data=30;
  N3.next=NULL;

PTR=HEAD;
while(PTR!=NULL)
{
  printf(" %d ", PTR->data);
  PTR=PTR->next;
}
}
