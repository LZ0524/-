#include <stdio.h>
int digit(int n,int k);    //函数定义
int main()
{
    int n,k;
    printf("请输入数字(最大值输入为2147483647)：");     //输入初始数字
    scanf("%d",&n);
    printf("输入倒数第几位：");
    scanf("%d",&k);
    digit(n,k);        //将实参n,k传递给形参n,k
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
