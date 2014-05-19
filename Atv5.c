#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void CalcImpares(int num){
	int i;

for(i=0;i<=(num*2);i++){
    
    if((i%2)==0)
        continue;
    else
        printf("%d\n",i);}


}

int main(){

int num;

LeMensg("DIGITE UM NUMERO\n");
scanf("%d",&num);
CalcImpares(num);

return 0;
}
