#include <stdio.h>
#include <stdlib.h>

/* Pega a quantidade de n�meros */
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

/* Insere os n�meros desejados no vetor */
int insere_no_vetor(int N, int *qtd_num)
{
	int i;
	
	printf("Insira os numeros desejados:\n");
	for(i=0; i < N; i++) //percorre o vetor
	{
		scanf("%d", &qtd_num[i]); //Insere ordenadamente cada n�mero digitado em uma posi��o do vetor
	}
	return *qtd_num;
}

/* Conta n�meros pares e �mpares */
void conta_par_impar(int *qtd_num, int N)
{	
	int i, par=0, impar=0;
	
	for(i=0; i < N; i++) //percorre o vetor
	{
		if(qtd_num[i]%2 == 0) //Se o resto da divis�o por 2 for 0, "par" � incrementado
			par++;
		
		else
			impar++; //Se n�o for 0, "impar" � incrementado
	}
	printf("\nQuantidade de numeros impares: %d\n", impar);
	printf("Quantidade de numeros pares: %d\n\n", par);
}

int main()
{
	int N, *qtd_num;
	
	N=quantidade(N);
	qtd_num = (int *) calloc(N, sizeof(int)); //Aloca mem�ria necess�ria para o vetor
	insere_no_vetor(N, qtd_num);	
	conta_par_impar(qtd_num, N);	
	free(qtd_num); //Libera a mem�ria alocada
	return 0;
}
