#include <stdio.h>
int digit(int n,int k);    //��������
int main()
{
    int n,k;
    printf("����������(���ֵ����Ϊ2147483647)��");     //�����ʼ����
    scanf("%d",&n);
    printf("���뵹���ڼ�λ��");
    scanf("%d",&k);
    digit(n,k);        //��ʵ��n,k���ݸ��β�n,k
    return 0;
}
int digit(int n,int k)
{
    int result,i;
    for(i=0;i<=k-2;i++)
    {
        n=n/10;
    }
    result=n%=10;
    printf("%d",result);
    return 0;
}
