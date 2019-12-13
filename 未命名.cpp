#include<stdio.h>
int main()
{
	int a,n,m,x,y,i,j;
	printf("«Î ‰»În:\n");
	scanf("%d",&n);
	m=n;
    y=2*m-1;
    for(i=1;i<=n;i++){
    	for(j=2*n+1 ;j>y;){
            j=j-2;
    		printf(" ");
		}  for(x=0;x<y;x++){
			printf("%d",m);

		}
		m=m-1;
			y=2*m-1;
		printf("\n");

	}
	m=2;
	y=2*m-1;
	a=n-1;
  for(i=2;i<=n;i++){
    	for(j=0;j<a;j++){
    		printf(" ");

		}
		 for(x=0;x<y;x++){
			printf("%d",m);

		}
		a=a-1;
		m=m+1;
			y=2*m-1;
		printf("\n");

	}



	return 0;
}

