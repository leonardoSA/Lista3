#include <stdio.h>

void ImpriNumFor(){
	int i;
	
	for(i=0;i<=100;i++){
        printf("%d",i);
        printf(" - ");}
    printf("\n");
	
}

void ImpriNumWhile(){
	int j=0;
	
	while(j<=100){
        printf("%d",j);
        printf(" * ");
        j++;}
    printf("\n");
}

void ImpriNumDoWhile(){
    int k=0;
    
    do{
        printf("%d",k);
        printf(" | ");
        k++;
	}while(k<=100);
	
}

int main()
{
	
ImpriNumFor();
ImpriNumWhile();
ImpriNumDoWhile();

	return 0;
}

