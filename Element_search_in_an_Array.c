#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
       if(arr[i]==a)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}