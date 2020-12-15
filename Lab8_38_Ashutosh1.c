#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int top = -1, front = 0;
int stack[MAX];

void push(char a)
{
    top++;
    stack[top] = a;
}

void pop()
{
    top--;
}

int main()
{
    int i;
    char s[MAX], b;

    printf("Enter the String\n");
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        b = s[i];
        push(b);
    }
    for (i = 0; i < (strlen(s) / 2); i++)
    {
        if (stack[top] == s[front])
        {
            pop();
            front++;
        }
        else
        {
            printf("\nNo\n");
            break;
        }
    }
    if ((strlen(s) / 2) == front)
    {
        printf("\nYes\n");
    }

    return 0;
}