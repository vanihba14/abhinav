#include<stdio.h>
int main()
{
    int n,r,d,c=0;
    printf("Enter number ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
    return 0;
}
