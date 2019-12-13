#include <stdio.h> 
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	pid_t pid;
	printf("before fork.\n");
	if((pid=fork())<0){
		printf("fork error\n");
		exit(0);
	}
	else if(pid==0){
		printf("child is printing.\n");
	}
	else{
		printf("parent is printing.\n");
	}
	exit(0);
}
