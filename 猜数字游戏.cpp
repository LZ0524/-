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
	
	printf("��ֻ��5�λ��ᣡ����\n\n");
	
	while(i>0)
	{
		printf("��%d������ʣ%d�λ���!!!\n\n",j,i);
		
		printf("������һ��0��100�����֣�");
		
		scanf("%d",&a);
		
		if(a<0||a>100)
		{
			printf("��ʾ���������\n\n");
		}
		else if(a<x)
		{
			printf("��ʾ��%dС��\n\n",a);	
		}
		else if(a>x)
		{
			printf("��ʾ��%d����\n\n",a);	
		}
		else
		{
			printf("��ʾ����ȷ\n");
			break; 			
		}		
		i--;
		j++;				
	}
	system("pause");
	return 0;
}
