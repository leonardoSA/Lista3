#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void SomaPares(){
	
int soma=0,i;
    
  for(i=0;i<100;i++){
     if((i%2)==0){
       soma=soma+i;}
          }
 printf("%d",soma);
    

}

int main(){

	LeMensg("A SOMA DOS 50 PRIMEIROS NUMEROS PARES E:\n");
	SomaPares();
	        
	return 0;
}

