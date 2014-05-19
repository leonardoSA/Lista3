#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void VerifPrimos(int num){

int i,cont=0;

for(i=1;i<=num;i++){
        if((num%i)==0)
            cont++;}
    if(cont>2)
        LeMensg("O NUMERO NAO EH PRIMO\n");
    else
        LeMensg("O NUMERO EH PRIMO\n");
	

}

int main()
{
    int num;
    
    LeMensg("DIGITE UM NUMERO\n");
    scanf("%d",&num);
    VerifPrimos(num);
    
	return 0;
}

