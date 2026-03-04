#include <stdio.h>

// Criamos apenas uma estrutura para facilitar
typedef struct {
    char estado[50];
    char sigla[3];
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta c1, c2;
    float densidade1, densidade2, pibCapita1, pibCapita2;
    float ataque1, ataque2; // Variáveis para armazenar o resultado dos ataques

    // --- Cadastro da Carta 1 ---
    printf("Digite o Estado (ex: Parana): ");
    scanf(" %[^\n]s", c1.estado);
    printf("Sigla (ex: PR): ");
    scanf("%s", c1.sigla);
    printf("Cidade: ");
    scanf(" %[^\n]s", c1.cidade);
    printf("Populacao: ");
    scanf("%lu\n", &c1.populacao);
    printf("Area (km2): ");
    scanf("%f\n", &c1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f\n", &c1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d\n", &c1.pontosTuristicos);

    // Repetimos para a Carta 2 (Pode-se copiar o bloco acima e mudar para c2)
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (ex: Amazonas): ");
    scanf(" %[^\n]s", c2.estado);
    printf("Sigla (ex: AM): ");
    scanf("%s", c2.sigla);
    printf("Cidade: ");
    scanf(" %[^\n]s", c2.cidade);
    printf("Populacao: ");
    scanf("%lu\n", &c2.populacao);
    printf("Area (km2): ");
    scanf("%f\n", &c2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f\n", &c2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d\n", &c2.pontosTuristicos);

    // --- Calculos Basicos ---
    densidade1 = (float)c1.populacao / c1.area;
    densidade2 = (float)c2.populacao / c2.area;
    pibCapita1 = c1.pib / (float)c1.populacao;
    pibCapita2 = c2.pib / (float)c2.populacao;

    // --- Comparacao e Resultado ---
    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    printf("Disputa: %s vs %s\n", c1.cidade, c2.cidade);

    // Exemplo de comparacao de Populacao
    if (c1.populacao > c2.populacao) {
        printf("Populacao: %s venceu!\n", c1.cidade);
    } else {
        printf("Populacao: %s venceu!\n", c2.cidade);
    }

    // Na Densidade Populacional, o MENOR valor vence
    if (densidade1 < densidade2) {
        printf("Densidade: %s venceu (mais espaco por pessoa)!\n", c1.cidade);
    } else {
        printf("Densidade: %s venceu (mais espaco por pessoa)!\n", c2.cidade);
    }

    return 0;
}
