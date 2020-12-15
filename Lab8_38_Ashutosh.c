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

    printf("Enter the String: ");
    scanf("%s", s);
    printf("\n");
    if ((strlen(s) / 2) % 2 != 0)
    {
        for (i = (strlen(s) / 2); s[i] != '\0'; i++)
        {
            b = s[i];
            push(b);
        }
    }
    else if ((strlen(s) / 2) % 2 == 0)
    {
        for (i = (strlen(s) / 2) - 1; s[i] != '\0'; i++)
        {
            b = s[i];
            push(b);
        }
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
            printf("No\n\n");
            break;
        }
    }
    if ((strlen(s) / 2) == front)
    {
        printf("Yes\n\n");
    }

    return 0;
}