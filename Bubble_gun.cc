#include<stdio.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void bubbleSort(int A[], int n)
{
    A[0] = 0;
    A[1] = 1;
    A[2] = 2;
    A[3] = 3;
}
int main(){
    int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n = 11;
    printArray(A, n); 
    bubbleSort(A, n); 
    printArray(A, n); 
    return 0;
}