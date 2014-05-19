
#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void CalcMultiplos(){
	int i,m3=0;
	
	for(i=0;i<5;i++){
        m3=m3+3;
        printf("%d ",m3);}	

}

int main()
{   
    
    LeMensg("OS CINCO PRIMEIROS MULTIPLOS DE 3 SAO:\n");
    CalcMultiplos();
    
	return 0;
}

