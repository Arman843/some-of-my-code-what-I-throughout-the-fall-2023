#include<stdio.h>
int main()
{
    int num[]={10,2,15,20,35,46,65};

    int value,pos=-1,i;

    printf("enter the value you want to search: ");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("item is not found");
    }
    else
    {
        printf("the value is found at %d position",pos);
    }
   return 0;
}
