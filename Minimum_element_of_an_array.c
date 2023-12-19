#include<stdio.h>
int main()
{
    int x,min;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=0;i<x;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d ",min);
}