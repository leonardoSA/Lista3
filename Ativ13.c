#include <stdio.h>
#include <unistd.h> //Biblioteca auxiliar, ultizada para dar um Delay no programa.

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void ContRegressiva(){
	int i=10;

while(i>=0){
	printf("%d\n",i);
	sleep(1);		//Delay de 1 segundo na contagem regressiva
	i--;}
	LeMensg("FIM !");
}


int main()
{
	printf("CONTAGEM REGRESSIVA\n");
	ContRegressiva();
	
	return 0;
}

