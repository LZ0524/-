#include<stdio.h>
main()
{
	int x,y,z;
	for(x=1;x<=9;x++)
	{
		for(y=1;y<=x;y++)
		{
			z=x*y;
			printf("%d*%d=%-3d ",y,x,z);
		}
		printf("\n");
	}
	return 0;
}
