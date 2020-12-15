#include <stdio.h>
#include <stdlib.h>
static int c = 0;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head;

void InsertAtHead(int x)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = x;
    ptr->next = ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
        c++;
        return;
    }
    head->prev = ptr;
    ptr->next = head;
    head = ptr;
    c++;
}

void InsertAtTail(int x)
{
    struct Node *temp = head;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        c++;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    c++;
}
void IIAP(int x)
{
    int p;
    printf("Please enter the position: ");
    scanf("%d", &p);
    if (c + 1 >= p)
    {
    }
    else
    {
        printf("\nError: Number of current elements are %d, hence can\'t insert at %d.\n\n", c, p);
        return;
    }
    struct Node *ptr, *temp = head;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        c++;
        return;
    }
    if (p == 1)
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        c++;
        return;
    }
    if (p == 2)
    {
        newNode->prev = head;
        newNode->next = head->next;
        head->next = newNode;
        c++;
        return;
    }
    p--;
    while (--p)
    {
        temp = temp->next;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    c++;
}

void delete_the_front()
{
    struct Node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}

void delete_at_last()
{
    struct Node *temp, *ptr = head;
    if (head == NULL)
    {
        printf("\nOoo ! I forgot that head = NULL\n");
        return;
    }
    if (head->next == NULL)
    {
        struct Node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr = temp->next;
    free(ptr);
    temp->next = NULL;
}
void DIAP()
{
    int p;
    printf("Please enter the position: ");
    scanf("%d", &p);
    
}
void Print()
{
    struct Node *temp = head;
    printf("\nHead--> ");
    while (temp != NULL)
    {
        printf("%d--> ", temp->data);
        temp = temp->next;
    }
    printf(" NULL\n\n");
}
int search_element(int x)
{
    int p = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        p++;
        if (x == temp->data)
        {
            return p;
        }
        temp = temp->next;
    }
    return 0;
}

void Reverse()
{
    struct Node *temp = head;
    struct Node *newHead = head;
    while (temp != NULL)
    {
        struct Node *prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        newHead = temp;
        temp = temp->prev;
    }
    head = newHead;
}
int menu()
{
    int choice;
    printf("\nEnter 1 to insert at head.\n");
    printf("Enter 2 to insert at tail.\n");
    printf("Enter 3 to insert at any position.\n");
    printf("Enter 4 to reverse the doubly link list.\n");
    printf("Enter 5 to print the doubly link list.\n");
    printf("Enter 6 to search element in doubly link list.\n");
    printf("Enter 7 to exit the doubly link list.\n");
    scanf("%d", &choice);
    return choice;
}
int main()
{
    printf("%ld\n", sizeof(struct Node));
    head = NULL;
    while (1)
    {
        switch (menu())
        {
            int x;
        case 1:
            printf("Enter the element: ");
            scanf("%d", &x);
            printf("\n");
            InsertAtHead(x);
            break;
        case 2:
            printf("Enter the element: ");
            scanf("%d", &x);
            printf("\n");
            InsertAtTail(x);
            break;
        case 3:
            printf("Enter the element: ");
            scanf("%d", &x);
            printf("\n");
            IIAP(x);
            break;
        case 4:
            Reverse();
            break;
        case 5:
            Print();
            break;
        case 6:
            int k;
            printf("\nEnter the element to be search: ");
            scanf("%d", &k);
            x = search_element(k);
            if (x != 1992)
            {
                if (x == 0)
                {
                    printf("\nElement not found. \n");
                }
                else
                {

                    printf("\nElement found at position: %d\n", x);
                }
            }
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("No any valid option is entered, try again.\n");
            break;
        }
    }
}