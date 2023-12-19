#include<stdio.h>
int main()
{
    int x,max;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<x;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d ",max);
}