#include <stdio.h>
int main()
{
    int x,i,j,k;
    int a[20]={2,4,6,8,10,12,14,16};
    printf("原数组为:{");
    for(i=0;i<8;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}\n\n");
    printf("请输入插入的数字:");
    scanf("%d",&x);
    for(i=0;i<20;i++)   //确定x在数组的位置
    {
        if(x<a[i])
        {
            k=i;
            break;
        }
    }
    for(j=18;j>=k;j--)
    {
        a[j+1]=a[j];
    }
    a[k]=x;
    printf("\n输出数组为:{");
    for(i=0;i<9;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}");
    return 0;
}
