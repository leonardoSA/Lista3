/*

 */
#include <stdio.h>

void LeMensg(char mesg[]){

	printf("%s",mesg);
}

void CalcConsumo(float hab, float kwh){
	float Cmes,Medcont=0,ConT1=0,ConT2=0,ConT3=0,maior=0,menor=0;
	int i,tipo;
	
	for(i=0;i<hab; i++){
        printf("digite 1-Residencial  | 2-Comercial  | 3 -Industrial\n");
        scanf("%d",&tipo);
        printf("DIGITE O CONSUMO DO MES\n");
        scanf("%f",&Cmes);
        Medcont=Medcont+Cmes;
        if(Cmes>=maior)
            maior=Cmes;
        else
            menor=Cmes;
            
        if(tipo==1)
            ConT1=ConT1+Cmes;
        if(tipo==2)
            ConT2=ConT2+Cmes;
        if(tipo==3)
            ConT3=ConT3+Cmes;}
        printf("A MAIOR MEDIA DE CONSUMO E: %.2f\n",maior);
        printf("A MENOR MEDIA DE CONSUMO E: %.2f\n",menor);
        printf("A MEDIA DE CONSUMO E: %.2f\n",Medcont/hab);
        printf("A MEDIA DE CONSUMO DO TIPO RESIDENCIAL E: %.2f\n",ConT1);
        printf("A MEDIA DE CONSUMO DO TIPO COMERCIAL E: %.2f\n",ConT2);
        printf("A MEDIA DE CONSUMO DO TIPO INDUSTRIAL E: %.2f\n",ConT3);
}

int main()
{
    float kwh,hab;
	
	
    LeMensg("digite o numero de habitantes\n");
    scanf("%f",&hab);
	LeMensg("digite o valor do KWH\n");
    scanf("%f",&kwh);
    CalcConsumo(hab,kwh);
    
	return 0;
}

