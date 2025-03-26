#include<stdio.h>

int main(){
    
    char estado [20] = "Amazonas";
    char codigo [4] = "A01";
    char cidade [20] = "Manaus";
    int populacao = 2279686;
    float area = 11.401;
    float PIB = 103.281;
    int pontosturisticos = 20;

    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    
    printf("Código da carta: \n");
    scanf("%s", &codigo);
    
    printf("Cidade: \n");
    scanf("%s", &cidade);
    
    printf("Populaçao: \n");
    scanf("%d", &populacao);
    
    printf("Área: \n");
    scanf("%f", &area);
    
    printf("PIB: \n");
    scanf("%f", &PIB);
    
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Carta 1!\n");
    printf("Estado: %s \n", estado);
    printf("Código da Carta: %s%s \n", estado, codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populaçao: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PBI: %f \n", PIB);
    printf("Pontos turisticos: %d \n", pontosturisticos);
    printf("\n\n");
        
    char estado2 [20] = "Maranhão";
    char codigo2 [4] = "A02";
    char cidade2 [20] = "Itinga";
    int populacao2 = 22513;
    float area2 = 3.590;
    float PIB2 = 18.72159;
    int pontosturisticos2 = 7;

    printf("Digite seu estado: \n");
    scanf("%s", &estado2);
    
    printf("Código da carta: \n");
    scanf("%s", &codigo2);
    
    printf("Cidade: \n");
    scanf("%s", &cidade2);
    
    printf("Populaçao: \n");
    scanf("%d", &populacao2);
    
    printf("Área: \n");
    scanf("%f", &area2);
    
    printf("PIB: \n");
    scanf("%f", &PIB2);
    
    printf("Pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta 2!\n");
    printf("Estado: %s \n", estado2);
    printf("Código da Carta: %s%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populaçao: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PBI: %f \n", PIB2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    return 0;
}