#include<stdio.h>

int fun1(int n)
{
    if (n==0)
        return 1;
    else
        return 7+fun1(n-2);
}
int main()
{
    int n =4;
    printf ("%d", fun1(n));
    return 0;
}
