#include <stdio.h>
#include <string.h>
void reverse(char s[],int m);               //非递归函数定义
void reverse_recursion(char s[],int m);     //递归函数定义
int main()
{
    int i,j;
    int a=1;
    printf("输入数组的长度:");
    scanf("%d",&i);
    char s[i];
    for(j=0;j<i;j++)
    {
        printf("s[%d]:",a);
        scanf("%s",&s[j]);
        a++;
    }
    int m=strlen(s)-1;
    printf("非递归逆序输出:");
    reverse(s,m);
    printf("递归逆序输出:");
    reverse_recursion(s,m);
    return 0;
}
void reverse(char s[],int m)
{
    int i;
    for(i=m;i>=0;i--)
    {
        printf("%c ",s[i]);
    }
    printf("\n");
}
void reverse_recursion(char s[],int m)
{
    if(m>=0)
    {
        printf("%c ",s[m]);
        reverse_recursion(s,m-1);
    }
}
