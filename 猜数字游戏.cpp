#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{	
	srand((unsigned int)time(NULL));
	int x=rand()%100+1;	
	
	int a;
	
	int i=5;
	
	int j=1;
	
	printf("您只有5次机会！！！\n\n");
	
	while(i>0)
	{
		printf("（%d）您还剩%d次机会!!!\n\n",j,i);
		
		printf("请输入一个0到100的数字：");
		
		scanf("%d",&a);
		
		if(a<0||a>100)
		{
			printf("提示：输入错误。\n\n");
		}
		else if(a<x)
		{
			printf("提示：%d小了\n\n",a);	
		}
		else if(a>x)
		{
			printf("提示：%d大了\n\n",a);	
		}
		else
		{
			printf("提示：正确\n");
			break; 			
		}		
		i--;
		j++;				
	}
	system("pause");
	return 0;
}
