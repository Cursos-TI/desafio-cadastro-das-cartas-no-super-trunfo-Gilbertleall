int main() {
    // variáveis para a primeira cidade
    char estado[20], codigocarta[5], nomedacidade[20];
    float populacao, area, pib, densidadepopulacional, pibpercapita, pontosturisticos;
    
    // variáveis para a segunda cidade
    char estado2[20], codigocarta2[5], nomedacidade2[20];
    float populacao2, area2, pib2, densidadepopulacional2, pibpercapita2, pontosturisticos2;
    
    // Entrada de dados para a primeira cidade
    printf("Nome do estado: ");
    scanf(" %[^\n]", estado);  
    
    printf("Codigo da carta: ");
    scanf("%s", codigocarta);
    
    printf("Nome da cidade : ");
    scanf(" %[^\n]", nomedacidade);  
    
    printf("População: ");
    scanf("%f", &populacao);
    
    printf("Área em Km²: ");
    scanf("%f", &area);
    
    printf("PIB: ");
    scanf("%f", &pib);
    
    printf("Pontos turísticos: ");
    scanf("%f", &pontosturisticos);
    
    // Entrada de dados para a segunda cidade
    getchar();  
    printf("\nDigite o estado da carta 2: ");
    scanf(" %[^\n]", estado2);
    
    printf("Codigo da carta: ");
    scanf("%s", codigocarta2);
    
    printf("Nome da cidade : ");
    scanf(" %[^\n]", nomedacidade2);
    
    printf("População: ");
    scanf("%f", &populacao2);
    
    printf("Área em Km²: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: ");
    scanf("%f", &pontosturisticos2);
    
    // Cálculos para a primeira cidade
    densidadepopulacional = populacao / area;
    pibpercapita = (pib * 100000000) / populacao;
    
    // Cálculos para a segunda cidade
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000)/ populacao2;
    
    // Saída de dados para a primeira cidade
    printf("\n-------- Dados da Cidade 1 --------\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigocarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %.2f\n", populacao);
    printf("Área em Km²: %.2f\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %.0f\n", pontosturisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional);
    printf("PIB per capita: %.2f reais\n", pibpercapita);
    
    // Saída de dados para a segunda cidade
    printf("\n-------- Dados da Cidade 2 --------\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área em Km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %.0f\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    
    return 0;
