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
void Bubble_Sort(int *a, int n)
{
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j <n-1-i ; j++)
        {
            if((*(a+j))>(*(a+j+1))){
                (*(a+j+1)) = ((*(a+j)) + (*(a+j+1)))-((*(a+j)) = (*(a+j+1)));
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
    // *(a + n) = '\0';
    printf("\n\nBefore Bubble_Sort: \n\n");
    print_array(a, n);
    Bubble_Sort(a, n);
    printf("\n\nAfter Bubble_Sort: \n\n");
    print_array(a, n);
    free(a);
    return 0;
}
