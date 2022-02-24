#include<stdio.h>
int main()
{
    int n,rem,largest=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(largest<rem)
    {largest=rem;
    }
    n=n/10;
    }
    printf("%d",largest);
    return 0;
}