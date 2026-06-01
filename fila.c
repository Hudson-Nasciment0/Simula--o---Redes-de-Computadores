#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void inicializarFila(Fila *fila)
{
    fila->inicio = NULL;
    fila->fim = NULL;
}

int filaVazia(Fila *fila)
{
    return fila->inicio == NULL;
}

void enfileirar(
    Fila *fila,
    int numero,
    int tamanho,
    float tempo
)
{
    NoFila *novo = (NoFila*) malloc(sizeof(NoFila));

    if(novo == NULL)
    {
        printf("Erro de memoria!\n");
        return;
    }

    novo->pacote.numeroPacote = numero;
    novo->pacote.tamanhoKB = tamanho;
    novo->pacote.tempoTransmissao = tempo;

    novo->proximo = NULL;

    if(filaVazia(fila))
    {
        fila->inicio = novo;
        fila->fim = novo;
    }
    else
    {
        fila->fim->proximo = novo;
        fila->fim = novo;
    }

    printf("Pacote %d adicionado na fila.\n", numero);
}

void desenfileirar(Fila *fila)
{
    if(filaVazia(fila))
    {
        printf("Fila vazia!\n");
        return;
    }

    NoFila *temp = fila->inicio;

    printf(
        "Transmitindo pacote %d\n",
        temp->pacote.numeroPacote
    );

    fila->inicio = temp->proximo;

    if(fila->inicio == NULL)
    {
        fila->fim = NULL;
    }

    free(temp);
}

void mostrarFila(Fila *fila)
{
    if(filaVazia(fila))
    {
        printf("Fila vazia!\n");
        return;
    }

    NoFila *aux = fila->inicio;

    printf("\n=== FILA DE TRANSMISSAO ===\n");

    while(aux != NULL)
    {
        printf(
            "Pacote %d | %d KB | Tempo %.1f s\n",
            aux->pacote.numeroPacote,
            aux->pacote.tamanhoKB,
            aux->pacote.tempoTransmissao
        );

        aux = aux->proximo;
    }

    printf("\n");

}

void liberarFila(Fila *fila)
{
    while(!filaVazia(fila))
    {
        desenfileirar(fila);
    }
}

