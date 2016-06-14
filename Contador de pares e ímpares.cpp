#include <stdio.h>
#include <stdlib.h>

/* Pega a quantidade de números */
int quantidade(int N)
{
	do
	{
		printf("Insira a quantidade de numeros: ");
		scanf("%d", &N);
		
		if(N <= 0)
			printf("Erro. Insira apenas inteiros maiores que zero. \n\n");
			
		else
			return N;	
	} while (N <= 0);
}

/* Insere os números desejados no vetor */
int insere_no_vetor(int N, int *qtd_num)
{
	int i;
	
	printf("Insira os numeros desejados:\n");
	for(i=0; i < N; i++) //percorre o vetor
	{
		scanf("%d", &qtd_num[i]); //Insere ordenadamente cada número digitado em uma posição do vetor
	}
	return *qtd_num;
}

/* Conta números pares e ímpares */
void conta_par_impar(int *qtd_num, int N)
{	
	int i, par=0, impar=0;
	
	for(i=0; i < N; i++) //percorre o vetor
	{
		if(qtd_num[i]%2 == 0) //Se o resto da divisão por 2 for 0, "par" é incrementado
			par++;
		
		else
			impar++; //Se não for 0, "impar" é incrementado
	}
	printf("\nQuantidade de numeros impares: %d\n", impar);
	printf("Quantidade de numeros pares: %d\n\n", par);
}

int main()
{
	int N, *qtd_num;
	
	N=quantidade(N);
	qtd_num = (int *) calloc(N, sizeof(int)); //Aloca memória necessária para o vetor
	insere_no_vetor(N, qtd_num);	
	conta_par_impar(qtd_num, N);	
	free(qtd_num); //Libera a memória alocada
	return 0;
}
