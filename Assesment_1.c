#include <stdio.h>
#include <stdlib.h>

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return;
}
int main()
{
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("\nSize of array can\'t be negative or zero.\n");
        exit(0);
    }
    int a[n], index = 0;
    printf("\nEnter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nBefore the modification in array.\n\n");
    display(a, n);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != 0 && a[i] == a[i + 1])
        {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[index] = a[i];
            index++;
        }
    }
    while (index < n)
    {
        a[index] = 0;
        index++;
    }
    printf("\n\nAfter the modification in array.\n\n");
    display(a, n);
    printf("\n");
    return 0;
}
