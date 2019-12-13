#include <stdio.h>
int isprime(int n);
int main()
{
    int n;
    printf("请输入一个数:");
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
            printf("%d是合数\n",n);
            return 0;              //返回零值
        }
    }
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        {
            printf("%d是质数\n",n);
            return n;             //返回非零值
        }
    }
    return 0;
}
