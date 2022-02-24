#include<stdio.h>
int main()
{
    int i=0,n,flag=0;
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    if(n%i==0)
    {
        flag=1;
    }
    if(flag==1)
    printf("not a prime");
    else
    printf("prime");
    return 0;
}