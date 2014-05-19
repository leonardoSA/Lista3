#include <stdio.h>
#include <string.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void Conta1s(char Pal[]){
	int i,cont=0;

	for(i=0;i<strlen(Pal);i++){
        if(Pal[i]=='1'){
            cont++;}
            }
	printf("A STRING %s tem %d 1's ", Pal, cont);	
}

int main(){ 
	  
    char Pal[100];
    
    LeMensg("Digite uma string\n");
    scanf("%s",Pal);
    Conta1s(Pal);
  
	return 0;
}

