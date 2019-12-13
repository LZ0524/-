#include <stdio.h>

int main()

{
	
	int x,y,z,a;
	
	printf("请输入x,y,z的值:");
	
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y)//判断x，y的大小 
	
	{
		
		a=x;x=y;y=a;

	}

	if(x>z)//判断x，z的大小 
	
	{
		
		a=x;x=z;z=a;
		
	}
	
	if(y>z)//判断y，z的大小 
	
	{
		
		a=y;y=z;z=a;
		
	}
	
	printf("顺序从小到大为：%d %d %d",x,y,z);
	
	return 0;
	
 } 
