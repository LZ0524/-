#include <stdio.h>
#include <string.h>   //�ṩstring����

int main()
{
    char a[6];
    int i,j,k=1;
    scanf("%s",&a);
    j=strlen(a);     //���������ַ�������
    for(i=0;i<j;i++)
    {
        printf("��%dλ���֣�%c\n",k,a[i]);
        k++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("������Ϊ��%c\n",a[i]);

    }
    printf("lenth=%d",j);
    return 0;
}
