                     /*********Merge_sort in my style*********/

#include <stdio.h>
#include <stdlib.h>
#define  T_MAX 100  

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

void merge(int *a, int mid, int low, int high)
{
    int i, j, k, W[T_MAX];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (*(a+i) < *(a+j))
        {
            W[k] = *(a+i);
            i++;
            k++;
        }
        else
        {
            W[k] = *(a+j);
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        W[k] = *(a+i);
        k++;
        i++;
    }
    while (j <= high)
    {
        W[k] = *(a+j);
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        *(a+i) = W[i];
    }
}

void Merge_Sort(int *a, int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        Merge_Sort(a, low, mid);
        Merge_Sort(a, mid+1, high);
        merge(a, mid, low, high);
    }
}

int main(int argc, char const **argv)
{
    int n;
    printf("\nEnter the length: ");
    scanf("%d", &n);
    int *a = (int *)calloc(n, sizeof(int));
    printf("\n\nEnter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    *(a + n) = '\0';
    printf("\n\nBefore Merge_Sort: \n\n");
    print_array(a);
    // printf("\nMerge_Sort function is gonna to call...\n");
    Merge_Sort(a,0,n-1);
    printf("\n\nAfter Merge_Sort: \n\n");
    print_array(a);
    free(a);
    return 0;
}