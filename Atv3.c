#include <stdio.h>


void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void CalcFibonacci(int num){
	int x=1,y=0;
	
while(y<num){
		printf("%d %d ",y,x);
		y=x+y;
		x=x+y;
	}
}

int main(){
	int num;
	
	LeMensg("DIGITE UM NUMERO\n");
	scanf("%d",&num);
	CalcFibonacci(num);
	
	return 0;
}

