#include <stdio.h>
int main()
{
    int a[10];
    int i,j,k;
    int x=1;
    for(i=0;i<10;i++)
    {
        printf("a[%d]:",x);
        scanf("%d",&a[i]);
        x++;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(a[j]<a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    printf("Êä³ö½µĞòÎª:");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
