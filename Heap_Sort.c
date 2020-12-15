#include <stdio.h>
#define  MAX 10  

int main()
{
    int arr[MAX], no, i, j, c, heap_root, temp;
    printf("Enter number of elements: ");
    scanf("%d", &no);
    printf("\nEnter array values one by one : ");
    for (i = 0; i < no; i++)
        scanf("%d", &arr[i]);
    for (i = 1; i < no; i++)
    {
        c = i;
        do
        {
            heap_root = (c - 1) / 2;
            if (arr[heap_root] < arr[c])
            {
                temp = arr[heap_root];
                arr[heap_root] = arr[c];
                arr[c] = temp;
            }
            c = heap_root;
        } while (c != 0);
    }

    printf("Heap  array : ");
    for (i = 0; i < no; i++)
        printf("%d\t ", arr[i]);
    for (j = no - 1; j >= 0; j--)
    {
        temp = arr[0];
        arr[0] = arr[j];
        arr[j] = temp;
        heap_root = 0;
        do
        {
            c = 2 * heap_root + 1;
            if ((arr[c] < arr[c + 1]) && c < j - 1)
                c++;
            if (arr[heap_root] < arr[c] && c < j)
            {
                temp = arr[heap_root];
                arr[heap_root] = arr[c];
                arr[c] = temp;
            }
            heap_root = c;
        } while (c < j);
    }
    printf("\nSorted  array : ");
    for (i = 0; i < no; i++)
        printf("\t%d", arr[i]);
    printf("\n");
}