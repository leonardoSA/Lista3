#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void CalcOperacoes(int num){
	int qtd=0,somPar=0;
    float media,soma=0;
    
	
while(num!=0){
        soma=soma+num;
        if(num%2==0){
            somPar=somPar+num;}
        qtd++;    
        LeMensg("DIGITE UM NUMERO\n");
        scanf("%d",&num);}
        media=soma/qtd;
    printf("A SOMA DOS NUMEROS EH %.0f\n",soma);
    printf("A QUANTIDADE DOS NUMEROS EH %d\n",qtd);
    printf("A MEDIA DOS NUMEROS EH %.1f\n", media);
    printf("A SOMA DOS NUMEROS PARES EH %d\n",somPar);
    printf("O MAIOR NUMERO DIGITADO EH %d\n",0);
    printf("O MENOR NUMERO DIGITADO EH %d\n",0);
    

}

int main()
{
	int num;
	
    LeMensg("DIGITE UM NUMERO\n");
    scanf("%d",&num);
    CalcOperacoes(num);    
	return 0;
}

