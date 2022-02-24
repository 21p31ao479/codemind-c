#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,T, i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            c=0;
        else if(i==2||i==3)
            c=1;
        else
        {
            T=a;
            a=b;
            b=c;
            c=a+b;
        }
        if(i==n)
            printf("%d ",c);
        else
            printf("%d ",c);
    }
    return 0;
}