#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("\nNegative size of array is not possible\n");
        exit(0);
    }
    if (n % 2 == 0)
    {
        printf("\nEven number of array, can\'t found actually mid point\n");
        exit(0);
    }
    int a[n], flag = 0, s, index = 0, first = 0,last = n-1;;
    printf("\nEnter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOK\n");
    printf("\nEnter the element to be found in middle : ");
    scanf("%d", &s);

    // if (a[(n) / 2] == s)
    // {
    //     flag = 1;
    //     index = a[(n) / 2];
    // }
    
    while (first <= last)
    {
        int m = (first + last) / 2;
        if (a[m] == s)
        {
            flag++;
            index = m;
            break;
        }
        else if (s < a[m])
        {
            last = m - 1;
        }
        else if(s > a[m])
        {
            first = m + 1;
        }
    }
    

    if (flag)
    {
        printf("\nElement found at %d\n\n", index+1);
    }
    else
    {
        printf("\nElement not fouund in the middle.\n\n");
    }
    return 0;
}