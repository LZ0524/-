#include<stdio.h>
int main()
{
    char *sp="A123cdf 456.78cpc876.9er 849.1";
    char *p=sp;
    float a[80];
    int num=0,power=1,i;
    float value=0;
    while(*p!='\0')
    {
        for (;!(*p>='0'&&*p<='9');p++);   //���pû��ָ������,����
        {
            value=0;
        }
        for (value=0;*p>='0'&&*p<='9';p++)    //��p��ʼ����������,����ȡ������value
        {
            value=value*10+*p-'0';
        }
        if (*p=='.')
        {
            p++;
        }
        for (power=1;*p>='0'&&*p<='9';p++)
        {
            value=value*10+*p-'0';
            power=power*10;
        }
        value=value/power;
        a[num++]=value;
    }
    for(i=0;i<num;i++)
    {
        printf("%6.2f ",a[i]);
    }
    return 0;
}
