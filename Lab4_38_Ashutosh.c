#include <stdio.h>
#include <stdlib.h>

static int mark;

int exact(int a[], int point, int s, int n)
{
    for (int i = point; i < n; i++)
    {
        if (s == a[i])
        {
            return i;
        }
    }
    return 0;
}

int decision(int a[], int s, int point, int n)
{
    int flue = 0;
    for (int i = point; i < n; i++)
    {
        if (s == a[i])
        {
            flue++;
        }
    }
    if (++flue == 2)//flue == 1
    {
        return 2; // return 1;
    }
    else if (++flue >= 3)//flue == 2
    {
        return 3; // return 2;
    }
    else if (++flue == 1)
    {
    	return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("\nSize of array can\'t be negative or zero.\n");
        exit(0);
    }
    int a[n], flag = 0, pool = 1, s, index;
    printf("\nEnter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nOK\n");
    printf("\nEnter the element to be search in array: ");
    scanf("%d", &s);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (pool)
        {
            if (s == a[i])
            {
                printf("Element %d has been found at position %d", a[i], i + 1);
                flag++;
                --pool;
            }
        }
        else
        {
            if (s == a[i])
            {
                int left = decision(a, s, i, n); /*Tell me no. of 's' at & with current index*/
		//printf("\n%d\n",left);
                if (left == 2) //== 1
                {
                    int sea = exact(a, i, s, n);
                    printf(" and %d.\n", sea + 1);
                    flag++;
                }
                else if (left >= 3) // ==2
                {
                    int sea = exact(a, i, s, n);
                    printf(", %d", sea+1);
                    flag++;
                }
		else if(left == 1){
			printf(".\n");
		}
            }
        }
    }
    if (flag)
    {
        printf("\nFinally %d has been found %d times.\n\n", s, flag);
    }
    else
        printf("\nElement %d couldn\'t be found in array.\n\n", s);

    return 0;
}
