#include <stdio.h>
int main()
{
    int x,i,j,k;
    int a[20]={2,4,6,8,10,12,14,16};
    printf("ԭ����Ϊ:{");
    for(i=0;i<8;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}\n\n");
    printf("��������������:");
    scanf("%d",&x);
    for(i=0;i<20;i++)   //ȷ��x�������λ��
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
    printf("\n�������Ϊ:{");
    for(i=0;i<9;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("}");
    return 0;
}
