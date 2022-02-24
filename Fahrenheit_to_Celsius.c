#include<stdio.h>
int main()
{
    float celsius,farenhiet,n;
    scanf("%f",&farenhiet);
    celsius=(farenhiet-32)*5/9;
    printf("%.2f",celsius);
    return 0;
}