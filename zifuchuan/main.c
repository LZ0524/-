#include <stdio.h>
#include <string.h>   //提供string函数

int main()
{
    char a[6];
    int i,j,k=1;
    scanf("%s",&a);
    j=strlen(a);     //计算输入字符串长度
    for(i=0;i<j;i++)
    {
        printf("第%d位数字：%c\n",k,a[i]);
        k++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("逆序数为：%c\n",a[i]);

    }
    printf("lenth=%d",j);
    return 0;
}
