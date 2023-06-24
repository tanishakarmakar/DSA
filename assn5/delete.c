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
struct Node* deletestart(struct Node *HEAD)
{
    struct Node *p = HEAD;
    p = p->next;
    free(HEAD);

    return p;
}
struct Node* deleteAtPos(struct Node* HEAD){
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
	struct Node* ptr = HEAD;
	int i=0;
	while(i!=pos-2){
		ptr = ptr->next;
		i++;
	}
	struct Node* p = ptr->next;
	ptr->next = p->next;
	free(p);
	return HEAD;
}

struct Node* deleteEnd(struct Node* head){
    struct Node* ptr = head;
    struct Node* temp;
    ptr = head;

    while ((ptr->next)->next != NULL)
    {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = NULL;
    free(temp);
    return head;
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

    printf ("1. Delete the first element\n");
    printf ("2. Delete the last element\n");
    printf ("3. Delete the node at a specific position\n");
    printf ("\nEnter your choice: ");
    scanf ("%d", &choice);

    switch (choice)
    {
    case 1:
        HEAD = deletestart(HEAD);
        break;
    case 2:
        HEAD = deleteEnd(HEAD);
        break;
    case 3:
        HEAD = deleteAtPos(HEAD);
        break;
    default:
        printf("\nError: Invalid input\n");
        exit(0);
        break;
    }

    printf("Printing the modified List : \n");
    display(HEAD);
    return 0;
}
