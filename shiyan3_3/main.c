#include <stdio.h>
#include <math.h>
int Plalindrome(int a);       //�жϻ������ĺ���
int Prime(int a);             //�ж������ĺ���
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
        i=a/10000;       //��һλ
        j=a%10;          //����λ
        k=(a%10000)/1000;//�ڶ�λ
        n=(a%100)/10;    //����λ
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
