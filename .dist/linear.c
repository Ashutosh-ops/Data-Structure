#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], flag = 0, s, index;
    printf("\nEnter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOK\n");
    printf("\nEnter the element to be search in array: ");
    scanf("%d", &s);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            flag++;
            printf("\nElement %d has been found at position %d\n", a[i], i + 1);
        }
    }
    if (flag)
    {
        printf("\nFinally %d has been found %d times\n", s, flag);
    }
    else
        printf("\nElement %d couldn't  be found in array\n\n", s);

    return 0;
}