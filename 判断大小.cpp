#include <stdio.h>

int main()

{
	
	int x,y,z,a;
	
	printf("������x,y,z��ֵ:");
	
	scanf("%d %d %d",&x,&y,&z);
	
	if(x>y)//�ж�x��y�Ĵ�С 
	
	{
		
		a=x;x=y;y=a;

	}

	if(x>z)//�ж�x��z�Ĵ�С 
	
	{
		
		a=x;x=z;z=a;
		
	}
	
	if(y>z)//�ж�y��z�Ĵ�С 
	
	{
		
		a=y;y=z;z=a;
		
	}
	
	printf("˳���С����Ϊ��%d %d %d",x,y,z);
	
	return 0;
	
 } 
