//* 3 etapas
//1a etapa: entender o problema
//2a etapa: construir o algoritmo (fluxograma)
//3a etapa: codificação - a partir do algoritm implemetar programa na linguagem desejada
//Objetivo: construir programa em C para calcular o faturamento total de uma empresa aérea
//Entrada: Preço da passagem aére (igual para qualquer situação) Quantidade de passageiros
// Saida: Faturamento da empresa aérea

#include <stdio.h>
#include <stdlib.h>

int main(){
  int passageiros;
  float valorpassagens, faturamento;

  printf("Preco das Passagens: ");
  scanf("%f", &valorpassagens);
  
  printf("Quantidade de Passageiros: ");
  scanf("%d",&passageiros);

  faturamento = valorpassagens * passageiros;

  printf("Faturamento da Empresa Aérea: %.2f", faturamento); 
  return 0;
}