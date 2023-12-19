#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    int i,arr[n];
    float average;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    average=sum/n;
    printf("%.2f",average);
}