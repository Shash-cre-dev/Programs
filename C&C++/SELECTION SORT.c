#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int min;
        min=a[i];
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
             min=a[j];
            }
            if(min!=a[i])
            {
                a[j]=a[i];
                a[i]=min;
            }
       }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
