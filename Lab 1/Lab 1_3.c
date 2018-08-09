#include<stdio.h>
int main()
{
    int i,m,a,b;
    for(i=33;i<99;i++)
    {
        m=i*i;
        a=m%100;
        b=m/100;
        if(a%10==a/10&&b%10==b/10)
            printf("%d\n",m);
    }
    return 0;
}
