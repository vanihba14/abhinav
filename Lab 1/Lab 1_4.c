#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("factorial is %d",factorial(n));
    return 0;
}
int factorial(int n)
{
    if(n==1)
        return n;
    else
        return n*factorial(n-1);
}
