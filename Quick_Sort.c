                          /*********Quick_sort in my style*********/

#include <stdio.h>
#include <stdlib.h>
void print_array(int *a,int n)
{
    for (size_t i = 0; i<n; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return;
}

int Breaker(int *a, int low, int high)
{
    int pivot = *(a + low);
    int i = low + 1;
    int j = high;
    do
    {
        while (*(a + i) <= pivot)
        {
            i++;
        }

        while (*(a + j) > pivot)
        {
            j--;
        }

        if (i < j)
        {
            *(a + i) = (*(a + i)) * (*(a + j)) / ((*(a + j)) = (*(a + i)));
        }
    } while (i < j);
    *(a + low) = (*(a + low)) * (*(a + j)) / ((*(a + j)) = (*(a + low)));
    return j;
}

void Quick_Sort(int *a, int low, int high)
{
    int piece;

    if (low < high)
    {
        piece = Breaker(a, low, high);
        Quick_Sort(a, low, piece - 1);
        Quick_Sort(a, piece + 1, high);
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
    printf("\n\nBefore quick_Sort: \n\n");
    print_array(a,n);
    // printf("\nquick_Sort function is gonna to call...\n");
    Quick_Sort(a, 0, n - 1);
    printf("\n\nAfter quick_Sort: \n\n");
    print_array(a,n);
    free(a);
    return 0;
}