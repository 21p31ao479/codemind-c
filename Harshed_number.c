#include<stdio.h>
int main()
{
    int n,n1;
    int rem=0,sum=0;
    scanf("%d",&n1);
    n=n1;
    while(n1>0)
    {
    rem=n1%10;
    sum=sum+rem;
    n1=n1/10;
    }
    if(n%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
}