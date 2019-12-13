#include<stdio.h>
int main()
{
	int a[5], b, c;			/*定义数组及变量为基本整型*/
	printf("请输入5个数组元素:\n");
	for (b= 0; b< 5; b++)		/*逐个输入数组元素*/
	{
		scanf("%d", &a[b]);
	}
	printf("数组中的元素为:\n");
	for (b = 0; b< 5; b++)		/*显示数组中的元素*/
	{
		printf("%d ", a[b]);
	}
	printf("\n");
	for (b= 0; b < 2; b++)		/*将数组中元素的前后位置互换*/
	{
		c = a[b]; 		/*元素位置互换的过程借助中间变量c*/
		a[b] = a[4-b];
		a[4-b] = c;
	}
	printf("现在数组的5个元素为:\n");
	for (b = 0; b< 5; b++)		/*将转换后的数组再次输出*/
	{
		printf("%d ", a[b]);
	}
	printf("\n");
	return 0;
}

