                     /*********Merge_sort in my style*********/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
    int i;
    for (int i = 0; i<n; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return;
}

void merge(int *a, int mid, int low, int high)
{
    int *W = (int *)calloc((high+1), sizeof(int));
    int i, j, k;
    i = k = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (*(a+i) < *(a+j))
        {
            (*(W+k)) = *(a+i);
            i++;
            k++;
        }
        else
        {
            (*(W+k)) = *(a+j);
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        (*(W+k)) = *(a+i);
        k++;
        i++;
    }
    while (j <= high)
    {
        (*(W+k)) = *(a+j);
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        *(a+i) = (*(W+i));
    }
    free(W);
}

void Merge_Sort(int *a, int begin, int end){ 
    if(begin<end){
        int point = (begin + end) /2;
        Merge_Sort(a, begin, point);
        Merge_Sort(a, point+1, end);
        merge(a, point, begin, end);
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
    // *(a + n) = '\0';
    printf("\n\nBefore Merge_Sort: \n\n");
    print_array(a,n);
    // printf("\nMerge_Sort function is gonna to call...\n");
    Merge_Sort(a,0,n-1);
    printf("\n\nAfter Merge_Sort: \n\n");
    print_array(a,n);
    free(a);
    return 0;
}