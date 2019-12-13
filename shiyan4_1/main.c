#include <stdio.h>
#define N 10
int main()
{
    int i,j,t;
    int a[N]={2,-5,-89,75,0,-89,0,93,48,0};
    printf("原数组为:{");
    for(i=0;i<N;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}\n");
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>0&&a[j]<0)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            else if(a[i]==0&&a[j]<0)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            else if(a[i]>0&&a[j]==0)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("输出数组:{");
    for(i=0;i<N;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}\n");
    return 0;
}
