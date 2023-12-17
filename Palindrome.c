#include<stdio.h>
int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int m=n;
    while(m>0)
    {
       int r=m%10;
        rev=rev*10+r;
        m=m/10;
    }
    if(n==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}