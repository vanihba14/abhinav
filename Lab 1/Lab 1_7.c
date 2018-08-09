#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("Enter two string ");
    gets(a);
    gets(b);
    printf("%d",str(a,b));
    return 0;
}
int str(char a[],char b[])
{
    int la,lb,check=0;
    la=strlen(a);
    lb=strlen(b);
    while(lb!=-1)
    {
        if(a[la]!=b[lb])
        {
            check=1;
            break;
        }
        la--;
        lb--;
    }
    if(check==0)
        return 1;
    else
        return 0;
}
