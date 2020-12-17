#include <stdio.h>
#include <stdlib.h>

void print_array(int *a,int n)
{
    size_t i = 0;
    for (; i<n; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return;
}

void Selection_Sort(int *a, int n)
{
    size_t i = 0;
    for (; i < n - 1; i++)
    {
        int Mini_Index = i;
        size_t j = i + 1;
        for (; j < n; j++)
        {
            if ((*(a+j)) < (*(a+Mini_Index)))
            {
                Mini_Index = j;
            }
        }
        *(a + i) = (*(a + i)) * (*(a + Mini_Index)) / ((*(a + Mini_Index)) = (*(a + i)));
    }
}

int main(int argc, char const **argv)
{
    int n;
    printf("\nEnter the length of the array.\n");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("\n\nBefore Selection_Sort: \n\n");
    print_array(a, n);
    Selection_Sort(a, n);
    printf("\n\nAfter Selection_Sort: \n\n");
    print_array(a, n);
    free(a);
    return 0;
}