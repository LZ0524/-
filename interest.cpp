#include <stdio.h>
#include <math.h>
int main()
{
	int money,year,i;
	
	double rate,interest;

	printf("��������������ڣ������ʣ��ÿո������\n");
	
	scanf("%d %d %lf",&money,&year,&rate);

	i=pow((1+rate),year);
	
	interest=money*i-money;
	
	printf("%.2lf",interest);
	
	return 0;	
}
