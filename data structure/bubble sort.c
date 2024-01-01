#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void bubblesort(int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j =0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
                swap(&a[j], &a[j+1]);
        }
    }
}
void printarray(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf ("%d ", a[i]);
    }
    printf("\n");
}


int main()
{
    int arr[] = {23, 45, 10, 50, 100, 90,40, 60, 30, 80};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    printarray(arr, size1);
    bubblesort(arr, size1);
    printarray(arr, size1);

}
