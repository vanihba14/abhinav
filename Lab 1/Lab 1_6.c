#include<stdio.h>
int main()
{
    char a[50],b[50];
    printf("Enter two string : ");
    gets(a);
    gets(b);
    stcat(a,b);
    return 0;
}
void stcat(char *a,char *b)
{
    int la,lb,i;
    for(la=0;*(a+la)!='\0';la++);
    for(lb=0;*(b+lb)!='\0';lb++);
    for(i=0;i<lb;i++)
    {
        *(a+la)=*(b+i);
        la++;
    }
    *(a+la)='\0';
    for(i=0;*(a+i)!='\0';i++)
        printf("%c",*(a+i));
}
