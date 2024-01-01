#include<stdio.h>

int fun(int n)
{
    if (n==0)
        return 1;
    else
        return 7+ fun(n-2);
}
int main()
{
    //int n= 3;
    printf("%d",fun(4));
}


/*fun (4) = 15

return 7 + fun(2)//8

return 7 + fun(0)//  1

*/
