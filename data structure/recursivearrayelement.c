#include<stdio.h>
void printarray(int arr[],int n)
{
    static int start = 0;
    if (start == n)
    {
         printf("%d ",arr[start]);
         return;
    }
    else
    {
        printf("%d ",arr[start]);
        start++;
        printarray(arr, n);
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    int size1 = sizeof(a)/sizeof(a[0]);
    printarray(a , size1-1);
}
