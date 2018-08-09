#include<stdio.h>
int main()
{
    int i=0,c=0;
    char a[50];
    printf("Enter string ");
    gets(a);
    while(a[i]!='\0')
    {
        i++;
        c++;
    }
    printf("Length of string is %d",c);
    return 0;
}
