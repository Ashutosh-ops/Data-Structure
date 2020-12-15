#include <stdio.h>

#define MAX 50

int top = -1, front = 0;
char s[MAX];
char stack[MAX];

void push(char a)
{
    top++;
    stack[top] = a;
}

void pop()
{
    s[front] = stack[top];
    top--;
    front++;
}

int main()
{
    int i, b = 0;

    printf("\nEnter the String: ");
    fgets(s, MAX, stdin);
    printf("\n");
    for (i = 0; s[i] != '\0'; i++)
    {
        push(s[i]);
        b++;
    }
    while (b--)
    {
        pop();
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n\n");
    return 0;
}