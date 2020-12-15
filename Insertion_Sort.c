                /*********Insertion_sort in my style*********/
                /**** Warning: Baccho ki pahuch se dur rakhein ****/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *a)
{
    int i;
    for (int i = 0; *(a + i) != '\0'; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return;
}
void Insertion_Sort(int *a){
    int val;
    size_t i = 1;
    for (; *(a + i) != '\0'; i++)
    {
        val = *(a+i);
        size_t j = i-1;
        for (; (j>=0 && *(a+j) > val); j--)
        {
            *(a+j+1) = *(a+j);
        }
        *(a+j+1) = val;
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
    printf("\n\nBefore Insertion_Sort: \n\n");
    print_array(a);
    // printf("\nInsertion_Sort function is gonna to call...\n");
    Insertion_Sort(a);
    printf("\n\nAfter Insertion_Sort: \n\n");
    print_array(a);
    free(a);
    return 0;
}
