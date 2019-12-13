#include<stdio.h>
#define p 100
#define w 20
int main(){
   int s,f,k;
    scanf("%d",&s);
    k=s/250;
	switch(k){
	  case 0:f=p*w*s*1;break;
		  case 1:f=p*w*s*0.98;break;
			  case 2:;
				  case 3:f=p*w*s*0.95;break;
					  case 4:;
						  case 5:;
							  case 6:;
								  case 7:f=p*w*s*0.92;break;
									  case 8:;
						                 case 9:;
							                case 10:;
								               case 11:f=p*w*s*0.90;break;
															   default:f=p*w*s*0.85;break;
	}
   printf("货物运费为：%d\n",f);
      return 0;
}