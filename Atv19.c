#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void AvaliaVetor(){
int i,num[15],maior,indi=0;

for(i=0;i<10;i++){
	scanf("%d",&num[i]);
	if(num[i]>maior){
		maior=num[i];}
}
	printf("%d",maior);
	printf("%d",indi);
}

int main()
{
	LeMensg("DIGITE 10 NUMEROS\n");
	AvaliaVetor();
	
	return 0;
}

