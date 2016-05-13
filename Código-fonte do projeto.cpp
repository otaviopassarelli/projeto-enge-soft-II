#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N=0;
	int *qtd_num;
	int valor, i, vlr, par=0, impar=0;
	
	printf("Insira a quantidade de numeros: ");
	scanf("%d", &N);
	     
	qtd_num = (int *) calloc(N, sizeof(int));
		
	printf("Insira os numeros desejados (somente inteiros):\n");
	for(i=0; i < N; i++)
	{
		scanf("%d", &vlr);
		qtd_num[i] = vlr;	
	}
	
	for(i=0; i < N; i++)
	{
		if(qtd_num[i]%2 == 0)
			par++;
		
		else
			impar++;
	}
	
	free(qtd_num);
	printf("\nQuantidade de numeros impares: %d\n", impar);
	printf("Quantidade de numeros pares: %d\n\n", par);
	
	return 0;
	
}
