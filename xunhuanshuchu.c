#include <stdio.h>
int main()
{
    int i,j,k,m,n=0;  //�����һ��ѭ�����й�ʵ��
    int a,b,d=2,s=2;  //����ڶ���ѭ�����й�ʵ��
    scanf("%d",&i);
    int c=i;
    for(j=i;j>0;j--)    //��һ��ѭ��,�ϰ벿�ֵ����
    {
        for(m=0;m<n;m++)
        {
            printf(" ");
        }
        for(k=2*i-1;k>0;k--)
        {
            printf("%d",i);
        }
        printf("\n");
        n++;
        i--;
    }
    for(a=c;a>1;a--)   //�ڶ���ѭ��,�°벿�ֵ����
    {
        for(b=0;b<s;b++)
        {
            printf(" ");
        }
        for(i=2*d-1;i>0;i--)
        {
            printf("%d",d);
        }
        printf("\n");
        s--;
        d++;
    }

    return 0;
}
