#include"stdio.h"                            // ������ע�ͷ��ź���ӶԴ����ע��
#include"string.h"                           //����һ���������͡�һ����͸��ֲ����ַ�����ĺ��� 
int main()
{
	char a[100];                              
	int t,i=0,j=0;                           
	scanf("%s",&a);                         
	j=strlen(a);	                         //strlen�ǻ���ַ����ĳ��ȣ����ַ�'\0'ֹͣ 
		for(i=0; i<=j; i++)					 
			{                                
				if(a[i]>='a'&&a[i]<='z')	 //��������ַ���Сд��ĸ 
					a[i]=a[i]-32;  			 //���ַ���ASCII����Ӧ��ֵ��ȥ32 
				else if(a[i]>='A'&&a[i]<='Z')//��������ַ��Ǵ�д��ĸ 
					a[i]=a[i]+32;            //���ַ���ASCII����Ӧ��ֵ����32
				else                         
					a[i]=a[i];               
			} 
			printf("%s\n",a) ;               
			return 0;
}


