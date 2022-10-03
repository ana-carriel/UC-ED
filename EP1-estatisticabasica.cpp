/*
##########################################
# EP1 - Estatística Básica
# Autor: Ana Carolina Carriel da Silva
# Data: 02/10/2022
##########################################
*/

#include<stdio.h>
#include <math.h>
int main()
{
int TAM;
int vet[TAM], i, maior, menor;

printf("Quantos valores deseja inserir:\n");
scanf("%d", &TAM);

// Preenche o Vetor
printf("\nInsira os valores:\n");
for (i = 0; i < TAM; i++){
	scanf("%i", &vet[i]);
}
printf("\n--------------------------------\n");
// Encontra o maior valor
maior = vet[0];
for (i = 1; i < TAM; i++){
	if (vet[i] > maior){
		maior = vet[i];
	}
}

// Encontra o menor valor
menor = vet[0];
for (i = 1; i < TAM; i++){
	if (vet[i] < menor){
		menor = vet[i];
	}
}

// Mostra o vetor
printf("\nValores digitados: ");
for (i = 0; i < TAM; i++){
	printf("%i ", vet[i]);
}

printf("\nMaior valor: %i", maior);
printf("\nMenor valor: %i", menor);




int num_value=TAM;
float variance, std_deviation;
float tot=0;
float mediana=0;
for(int i=0; i<num_value; i++)
{
tot = tot+vet[i];
}
mediana = tot/num_value;
printf("\nMedia: %.1f",mediana);
printf("\n");
 //Média
float media = 0;
float med=0;
if(num_value%2 == 0)
{
int temp=(num_value/2)-1;
for(int i=0;i<num_value;i++)
{
if(temp==i || (temp+1)==i)
{
med=med+vet[i];
}
}
med=med/2;
printf("Mediana: %.1f",med);
printf("\n");
}
else 
{
int temp=(num_value/2);
for(int i=0;i<num_value;i++)
{
if(temp==i)
{
int med=vet[i];
printf("Mediana: %d",med);
printf("\n");
}
}
}

float variacoes = 0;
for (int i = 0; i < TAM; i++){
	float v = vet[i] - mediana;
	variacoes += v * v;
}

float desvio = sqrt(variacoes / TAM);
printf("Desvio padrao: %f\n", desvio);

return 0;
}



