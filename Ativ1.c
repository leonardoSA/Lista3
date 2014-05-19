/*

 */
#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void VerifNum(int num){
	
	while(num>=0){
		LeMensg("DIGITE UM NUMERO\n");
        scanf("%d",&num);
    }
LeMensg("O NUMERO EH NEGATIVO\n");
    	
}


int main()
{
    int num;
    char mensg1[50]="DIGITE UM NUMERO\n";
    
    LeMensg(mensg1);
    scanf("%d",&num);
    VerifNum(num);
	
	return 0;
}

