#include <stdio.h>

#define PI 3.14 //用define定义PI 

int main()

{
	
	float R,S;
	
	printf("请输入圆的半径：");
	
	scanf("%f",&R); //输入半径R的值 
	
	{
		S=PI*R*R;
		
		printf("圆的面积为：%-5.2f",S);
		
	}
	
	return 0;
	
}
