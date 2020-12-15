#include <stdio.h>
#include <stdlib.h>
void print_array(int *a)
{
    int i;
    for (int i = 0; *(a + i) != (-1992); i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return;
}
void Bubble_Sort(int *a)
{
    for (size_t i = 0; ; i++)
    {
        /* code */
    }
    
}
int main(int argc, char const **argv)
{
    int n;
    printf("\nEnter the length of the array.\n");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    printf("\n\n***********Warning: Enter any number except '-1992' *************\n\n");
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    *(a+n)= (-1992);
    printf("\n\nBefore Bubble_Sort: \n\n");
    print_array(a);
    // printf("\nBubble_Sort function is gonna to call...\n");
    Bubble_Sort(a);
    printf("\n\nAfter Bubble_Sort: \n\n");
    print_array(a);
    free(a);
    return 0;
}
