#include <stdio.h>
int main()
{
	int i,j;
	float k;
	
	printf("请输入两个由空格分开的数字\n");
	
	scanf("%d %d",&i,&j); 
	
	k=(float)(i+j)/2;
	
	printf("%.2f",k);
	
	return 0;
}

