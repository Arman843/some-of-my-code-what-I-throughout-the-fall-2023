#include<stdio.h>
int binary_search(int left,int right,int value,int a[])
{
       int mid,answer;
       mid=(left+right)/2;
        if(left>right)
       {
              return -1;
       }
       if(a[mid]==value)
       {
              return mid;
       }
       else if(value>a[mid])
       {
             answer= binary_search(mid+1,right,value,a);
             return answer;

       }
       else if(value<a[mid])
       {
           answer= binary_search(left,mid-1,value,a);
             return answer;
       }


}

int main()
{
  int a[]={30,40,50,60,70,80,90};
  int size=sizeof(a)/sizeof(a[0]);
  int left=0;
  int right=size-1;
  int value = 60;
  int anser= binary_search(left,right,value,a);
  printf("%d",anser);

  return 0;
}
