#include <stdio.h>
#include <windows.h>
int main() 
{
	int i,j,k,n;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(n=i+1;n<=k;n++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
