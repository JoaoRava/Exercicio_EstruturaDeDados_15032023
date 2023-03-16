/******************************************************************************
Exercicio Estrtura de dados em case C
Faça um programa que leia 5 numeros inteiros e armezene-os em um vetor,
A seguir, percorra o vetor e conte quantos numeros sao maiores que 100,
Ao final, exiba essa quantidade.

*******************************************************************************/

#include <stdio.h>

int main()
{
    #define TAM_MAX 5
    float vet1[TAM_MAX], maiorQueCem [TAM_MAX];
    float maior;
    int i;
    for(i=0; i<TAM_MAX; i++)
        scanf("%f", &vet1[i]);// le os dados
    
    
    for(i=0; i<TAM_MAX; i++)
        if (vet1[i] > 100)
            maiorQueCem[i] = vet1[i];
            
    printf("Aqui estao os numeros maiores que 100:\n");
    for(i=0; i<TAM_MAX; i++)
        if (maiorQueCem[i] > 0)
        printf("%f\n", maiorQueCem[i]);
            
    //printf("O maior elemento é %f\n", maior);

    return 0;
}
