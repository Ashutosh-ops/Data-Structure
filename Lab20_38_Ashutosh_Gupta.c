#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

struct Node *head;

struct Node *GetNewNode(int x)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = newNode->next = NULL;
	return newNode;
}

void InsertAtHead(int x)
{
	struct Node *ptr = GetNewNode(x);
	if (head == NULL)
	{
		head = ptr;
		return;
	}
	head->prev = ptr;
	ptr->next = head;
	head = ptr;
}

void InsertAtTail(int x)
{
	struct Node *temp = head;
	struct Node *newNode = GetNewNode(x);
	if (head == NULL)
	{
		head = newNode;
		return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
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
	printf("Enter 1 to insert at head.\n");
	printf("Enter 2 to insert at tail.\n");
	printf("Enter 3 to reverse the doubly link list.\n");
	printf("Enter 4 to print the doubly link list.\n");
	printf("Enter 5 to exit the doubly link list.\n");
	scanf("%d", &choice);
	return choice;
}
int main()
{
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
			Reverse();
			break;
		case 4:
			Print();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("No any valid option is entered, try again.\n");
			break;
		}
	}
}