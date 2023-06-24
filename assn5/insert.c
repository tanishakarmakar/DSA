//Q4 Insert
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node* insertbegin(struct Node* HEAD){
    int new;
    printf ("Enter the element to insert in the begining: ");
    scanf ("%d", &new);
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = HEAD;
    ptr->data = new;
    return ptr;
}
struct Node* insertAtEnd(struct Node* HEAD){
    int new;
    printf("Enter the element to insert at the end: ");
    scanf ("%d", &new);
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = HEAD;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    ptr->data = new;
    p->next = ptr;
    ptr->next = NULL;
    return HEAD;
}
struct Node* insertAtPos(struct Node* HEAD){
    int pos, new;
    printf ("Enter the element to insert: ");
    scanf ("%d", &new);
    printf ("Enter in which position: ");
    scanf ("%d", &pos);
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = HEAD;
    int i = 0;
    while (i != pos-2)
    {
        p = p->next;
        i++;
    }
    ptr->data = new;
    ptr->next = p->next;
    p->next = ptr;
    return HEAD;
}

int main()
{
    struct Node *HEAD;
    struct Node *NEW;
    struct Node *PTR;

    char choice;
    HEAD = NULL;
    NEW = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data: ");
    scanf("%d", &NEW->data);
    fflush(stdin);
    NEW->next = NULL;
    HEAD = NEW;
    PTR = HEAD;
    printf("Do you want to add another node?(Y/N): ");
    scanf("%c", &choice);
    while (choice == 'Y' || choice == 'y')
    {
        NEW = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter data: ");
        scanf("%d", &NEW->data);
        fflush(stdin);
        NEW->next = NULL;
        PTR->next = NEW;
        PTR = PTR->next;
        printf("Do you want to add another node?(Y/N): ");
        scanf("%c", &choice);
    }
    PTR = HEAD;
    printf("\nPrinting the List: \n");
    while (PTR != NULL)
    {
        printf("%d ", PTR->data);
        PTR = PTR->next;
    }
    printf("\n\n");

    printf ("1. Insert in the beginning\n");
    printf ("2. Insert at the end\n");
    printf ("3. Insert at a specific position\n");
    printf ("\nEnter your choice: ");
    scanf ("%d", &choice);

    switch (choice)
    {
    case 1:
        HEAD = insertbegin(HEAD);
        break;
    case 2:
        HEAD = insertAtEnd(HEAD);
        break;
    case 3:
        HEAD = insertAtPos(HEAD);
        break;
    default:
        printf("\nError: Invalid input\n");
        exit(0);
        break;
    }

    printf("Printing the List after modification : \n");
    display(HEAD);
}
