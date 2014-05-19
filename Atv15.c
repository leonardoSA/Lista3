#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void SomaMultiplos(){
int i,soma=0;

for(i=0;i<1000;i++){
	if((i%3)==0||(i%5)==0)	
		soma=soma+i;}
	printf("%d",soma);	
}

int main()
{
	LeMensg("A SOMA DOS NUMEROS QUE SAO MULTIPLOS DE 3 OU 5 E:\n");
	SomaMultiplos();
	return 0;
}

