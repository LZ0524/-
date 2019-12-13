#include <stdio.h>
int Factorial(int i);    //¶¨ÒåµÝ¹éº¯Êý
int main(){
    int i;
    scanf("%d",&i);
    printf("%d\n",Factorial(i));
    return 0;
}
int Factorial(int i){
	if(i==0){
		return 0;
	} 
    return i>1?i*Factorial(i-1):1;
}
