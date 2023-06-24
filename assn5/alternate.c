#include<stdio.h>
#include <stdlib.h>
struct Node {

  int data;
  struct Node*next;
};

int main()
{
  struct Node *Head, *New, *ptr;
  char c;
  Head=NULL;
  New=(struct Node*)malloc(sizeof(struct Node));
  printf("Enter the value: ");
  scanf("%d", &New->data);
  New->next=NULL;
  Head=New;
  ptr=Head;
  printf("Do you want to add another node? (Y/N) ");
  scanf("%c", &c);
  scanf("%c", &c);
  while(c=='y'||c=='Y')
  {
    New=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d", &New->data);
    New->next=NULL;
    ptr->next=New;
    ptr=ptr->next;
    printf("Do you want to add another node? (Y/N) ");
    scanf("%c", &c);
    scanf("%c", &c);
  }
  printf("given data: \n");
  ptr=Head;
  while(ptr!=NULL){
    printf("%d\t", ptr->data);
    ptr=(ptr->next)->next;

  }
  return 0;
}
