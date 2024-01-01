//Recursion is a process in which a function call itself directly or indirectly.

#include<stdio.h>

int fun(int n)
{
    if (n==1)
        return 1;
    else
        return 1+fun(n -1);
}

int main()
{
    int n =3;
    printf("%d", fun(n));
    return 0;
}
