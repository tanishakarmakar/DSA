#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void display(struct Node* ptr)
{
    printf("\nPrinting the List: \n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int LinearSearch(struct Node* head, int item)
{
    struct Node* ptr = head;
    int pos = 1;
    while (ptr != NULL)
    {
        if (ptr->data == item){
            return pos;
        }
        ptr = ptr->next;
        pos++;
    }
    return -1;
}

int main(void)
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
    display(HEAD);

    int x;
    printf ("\n\nEnter the element to search: ");
    scanf ("%d", &x);
    x = LinearSearch(HEAD, x);
    if (x!=-1)
    printf ("Element is in Position: %d\n", x);
    else
    printf ("Element not found\n");

    return 0;
}
