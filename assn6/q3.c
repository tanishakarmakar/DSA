#include<stdio.h>
#include <stdlib.h>
struct Node{
  int co;
  int ex;
  struct Node *next;

};

struct Node*create(struct Node *Head)
{
  struct Node *New, *ptr;
  char c;
  Head=NULL;
  New=(struct Node*)malloc(sizeof(struct Node));
  printf("Enter the coefficient: ");
  scanf("%d", &New->co);
  printf("Enter the exponent: ");
  scanf("%d", &New->ex);
  New->next=NULL;
  Head=New;
  ptr=Head;
  printf("Do you want to add another node? (Y/N) ");
  scanf("%c", &c);
  scanf("%c", &c);
  while(c=='y'||c=='Y')
  {
    New=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the coefficient: ");
    scanf("%d", &New->co);
    printf("Enter the exponent: ");
    scanf("%d", &New->ex);
    New->next=NULL;
    ptr->next=New;
    ptr=ptr->next;
    printf("Do you want to add another node? (Y/N) ");
    scanf("%c", &c);
    scanf("%c", &c);
    return(Head);
}
}
struct Node *insert(struct Node *Head, int co, int ex){
  struct Node *New, *ptr;
  New=(struct Node*)malloc(sizeof(struct Node));
  New->co=co;
  New->ex=ex;

  if (Head==NULL){
    Head=New;
  }

  else{
    ptr=Head;
    while(ptr->next!=NULL){
    ptr=ptr->next;
    ptr->next=New;
  }
  }
  return (Head);
}
void display(struct Node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
  struct Node *Head1, *Head2, *Head3, *ptr1, *ptr2;
  Head1=create(Head1);
  Head2=create(Head2);
  while(ptr1!=NULL && ptr2!=NULL){
    if (ptr1->ex==ptr2->ex){
      Head3=insert(Head3, ptr1->co+ptr2->co, ptr1->ex);
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
  }

  else if (ptr1->ex > ptr2->ex)
  {
    Head3=insert(Head3, ptr1->co, ptr1->ex);
    ptr1=ptr1->next;
  }

  else(ptr1->ex < ptr2->ex){
    Head3=insert(Head3, ptr2->co, ptr2->ex);
    ptr2=ptr2->next;

  while(ptr2!=NULL){
    Head3=insert(Head3, ptr2->co, ptr2->ex);
    ptr2=ptr2->next;
  }
  while(ptr1!=NULL){
    Head3=insert(Head3, ptr1->co, ptr1->ex);
    ptr1=ptr1->next;
  }
  printf("Printing the List after modification : \n");
  display(Head3);
  return 0;
}
