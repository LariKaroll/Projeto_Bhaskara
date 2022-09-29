#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
//DeclaraçãoDeVariavel
	float a,b,c,y,x1,x2,raizresult,resultx11,resultx22,resultx1,resultx2;
	int resp;
//EntradaDeDados
do{
	printf("Digite o numero de A:");
	scanf("%f", &a);
	printf("Digite o numero de B:");
	scanf("%f", &b);
	printf("Digite o numero de C:");
	scanf("%f", &c);
	
//DeltaCalculos
	y= b*b-4*a*c;
	printf("Valor de delta: %.1f \n", y);
	if(y<0){
		printf("Raiz nao pertence aos conjuntos dos reais! \n");
	}else{
	
//	RaizCalculos

	raizresult = sqrt(y);
	printf("Valor da raiz: %.1f \n", raizresult);
	
//CalculoBhaskara
	resultx1 = -b+raizresult;
	resultx2 = 2*a;
	x1 = resultx1/resultx2;
	
	resultx11 = -b-raizresult;
	resultx22 = 2*a;
	x2 = resultx11/resultx22;
	
	printf("Valor de x1: %.2f \n", x1);
	printf("Valor de x2: %.2f \n", x2);
	} 
	
	printf("Aperte 1 - para continuar. \n");
	printf("Aperte 0 - para fechar. \n");
	scanf("%d", &resp);
} while (resp==1);
}
