#include <stdio.h>
#include <string.h>
void reverse(char s[],int m);               //�ǵݹ麯������
void reverse_recursion(char s[],int m);     //�ݹ麯������
int main()
{
    int i,j;
    int a=1;
    printf("��������ĳ���:");
    scanf("%d",&i);
    char s[i];
    for(j=0;j<i;j++)
    {
        printf("s[%d]:",a);
        scanf("%s",&s[j]);
        a++;
    }
    int m=strlen(s)-1;
    printf("�ǵݹ��������:");
    reverse(s,m);
    printf("�ݹ��������:");
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
