#include<stdio.h>
int main()
{
    int a[20],l,i,j,k,t;
    printf("Enter length of array ");
    scanf("%d",&l);
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Enter value of k ");
    scanf("%d",&k);
    printf("SN %d\nLN %d",a[k-1],a[l-k-1]);
    return 0;
}
