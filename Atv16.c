#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void Fibonacci(){
int x=1,y=0,soma=0;
	
while(y<4000000){
	if(x%2==0)
		soma=soma+x;
	if(y%2==0)
		soma=soma+y;
		
	y=x+y;
	x=x+y;}
	printf("%d",soma);
}	
	


int main()
{
	LeMensg("A SOMA FIBONACCI EH:\n");
	Fibonacci();
	
	
	return 0;
}

