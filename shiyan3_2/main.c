#include <stdio.h>
int isprime(int n);
int main()
{
    int n;
    printf("������һ����:");
    scanf("%d",&n);
    isprime(n);
    return 0;
}
int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d�Ǻ���\n",n);
            return 0;              //������ֵ
        }
    }
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        {
            printf("%d������\n",n);
            return n;             //���ط���ֵ
        }
    }
    return 0;
}
