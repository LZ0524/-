#include <stdio.h>
#include <math.h>
int Plalindrome(int a);       //判断回文数的函数
int Prime(int a);             //判断质数的函数
int main()
{
    int a=10000;
    Plalindrome(a);
    //for(a=10000;a<100000;a++)
    //{
    //    Plalindrome(a);
    //}
    return 0;
}
int Plalindrome(int a)
{
    while(a<100000)
    {
        int i,j,k,n;
        i=a/10000;       //第一位
        j=a%10;          //第五位
        k=(a%10000)/1000;//第二位
        n=(a%100)/10;    //第四位
        if(i==j&&k==n)
        {
            Prime(a);
        }
        a++;
    }
    return 0;
}
int Prime(int a)
{
    int m,z=0;
    for(m=2;m<=sqrt(a);m++)
    {
        if(a%m==0)
        {
            z++;
        }
    }
    if(z==0)
    {
        printf("%d\n",a);
    }
    return 0;
}
