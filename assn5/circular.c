#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(void)
{
    struct Node *HEAD;
    struct Node *NEW;
    struct Node *PTR;

    char choice;
    NEW = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter data: ");
    scanf("%d", &NEW->data);
    fflush(stdin);
    NEW->next = HEAD;
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
        NEW->next = HEAD;
        PTR->next = NEW;
        PTR = PTR->next;
        printf("Do you want to add another node?(Y/N): ");
        scanf("%c", &choice);
    }
    PTR = HEAD;
    printf("\nPrinting the List: \n");
    do{
        printf("%d ", PTR->data);
        PTR = PTR->next;
    }while (PTR != HEAD);
    return 0;
}
