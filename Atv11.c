#include <stdio.h>
#include <string.h>


void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void TrocaZeroPorUm(char Pal[]){
	int i; 

	for(i=0;i<strlen(Pal);i++){
        if(Pal[i]=='0'){
            Pal[i]='1';}
        }
	printf("A STRING EH %s\n", Pal);

}

int main()
{
    char Pal[100];
    
    printf("Digite uma string\n");
    scanf("%s",Pal);
    TrocaZeroPorUm(Pal);
	return 0;
}


