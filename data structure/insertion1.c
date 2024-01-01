#include<stdio.h>

void insertionsort(int a[], int n)
{
    int i, j, temp;
    for (i =1; i<n; i++)
    {
        temp = a[i];
        j = i -1;
        while (j >= 0&& a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
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
    int arr [] = { 20, 10,90, 100, 30, 40, 60, 50,80,70};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    printarray(arr, size1);
    insertionsort(arr, size1);
    printarray(arr, size1);

}
