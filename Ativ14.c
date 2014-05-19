#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void SomaNumeros(){
	int cont=0,num,soma=0;

while(cont<10){
		scanf("%d",&num);
		soma=soma+num;
		cont++;}
		
	printf("A SOMA DOS NUMEROS E: %d",soma);		
}

int main(){
	
	LeMensg("DIGITE 10 NUMEROS\n");
	SomaNumeros();
	
	return 0;
}

