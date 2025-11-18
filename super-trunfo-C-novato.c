#include <stdio.h>
int main(){
char estado[25];
char codigo_carta[10];
char nome_cidade[50];
int populacao, n_pontos_turisticos;
float area, PIB;

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o código da carta: \n");
scanf("%s", &codigo_carta);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_cidade);

printf("Digite a população: \n");
scanf("%i", &populacao);

printf("Digite a área: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Digite o número de pontos turísticos: \n");
scanf("%i", &n_pontos_turisticos);

printf("\n \n Estado: %s", estado);
printf("\n Código: %s", codigo_carta);
printf("\n Cidade: %s", nome_cidade);
printf("\n População: %i", populacao);
printf("\n Área: %.2f  km²", area);
printf("\n PIB: %.2f bilhões de reais", PIB);
printf("\n Número de Pontos Turísticos: %i", n_pontos_turisticos);
}