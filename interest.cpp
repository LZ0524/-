#include <stdio.h>
#include <math.h>
int main()
{
	int money,year,i;
	
	double rate,interest;

	printf("依次输入存款金额，存期，年利率（用空格隔开）\n");
	
	scanf("%d %d %lf",&money,&year,&rate);

	i=pow((1+rate),year);
	
	interest=money*i-money;
	
	printf("%.2lf",interest);
	
	return 0;	
}
