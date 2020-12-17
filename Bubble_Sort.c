/*********Bubble_sort in my style*********/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return;
}
void Bubble_Sort(int *a)
{
    for (size_t i = 0; *(a + i) != '\0'; i++)
    {
        for (size_t j = i + 1; *(a + j) != '\0'; j++)
        {
            if (a[i] > a[j])
            {
                *(a + i) = (*(a + i)) * (*(a + j)) / ((*(a + j)) = (*(a + i)));
            }
        }
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
    *(a + n) = '\0';
    printf("\n\nBefore Bubble_Sort: \n\n");
    print_array(a, n);
    Bubble_Sort(a);
    printf("\n\nAfter Bubble_Sort: \n\n");
    print_array(a, n);
    free(a);
    return 0;
}
