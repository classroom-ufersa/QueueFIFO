#include "filavet.c"

int main()
{
    Fila *f;

    // Criando uma fila;
    f = fila_cria();

    fila_imprime(f); // Imprime a fila vazia

    fila_insere(f, 10.0); // Insere o valor 10.0 na fila
    fila_insere(f, 20.0); // Insere o valor 20.0 na fila
    fila_insere(f, 30.0); // Insere o valor 30.0 na fila

    printf("\nApos insercoes:\n");
    fila_imprime(f); // Imprime a fila após as inserções

    if (!fila_vazia(f))
    {
        float valor = fila_retira(f); // Retira um valor da fila
        printf("\nValor retirado da fila: %.1f\n", valor);
    }

    printf("\nApos retirada:\n");
    fila_imprime(f); // Imprime a fila após a retirada

    printf("\nVerificando se a fila esta vazia: %s\n", fila_vazia(f) ? "Sim" : "Não"); // Verifica se a fila está vazia

    printf("\nVerificando se a fila esta cheia: %s\n", fila_cheia(f) ? "Sim" : "Não"); // Verifica se a fila está cheia

    fila_libera(f); // Libera a memória alocada para a fila
    return 0;
}