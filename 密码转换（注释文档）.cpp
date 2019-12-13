#include"stdio.h"                            // 请在有注释符号后添加对代码的注释
#include"string.h"                           //定义一个变量类型、一个宏和各种操作字符数组的函数 
int main()
{
	char a[100];                              
	int t,i=0,j=0;                           
	scanf("%s",&a);                         
	j=strlen(a);	                         //strlen是获得字符串的长度，到字符'\0'停止 
		for(i=0; i<=j; i++)					 
			{                                
				if(a[i]>='a'&&a[i]<='z')	 //如果输入字符是小写字母 
					a[i]=a[i]-32;  			 //则将字符在ASCII码表对应的值减去32 
				else if(a[i]>='A'&&a[i]<='Z')//如果输入字符是大写字母 
					a[i]=a[i]+32;            //则将字符在ASCII码表对应的值加上32
				else                         
					a[i]=a[i];               
			} 
			printf("%s\n",a) ;               
			return 0;
}


