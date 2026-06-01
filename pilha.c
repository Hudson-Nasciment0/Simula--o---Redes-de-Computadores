#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializarPilha(Pilha *pilha)
{
    pilha->topo = NULL;
}

int pilhaVazia(Pilha *pilha)
{
    return pilha->topo == NULL;
}

void empilhar(
    Pilha *pilha,
    int numero,
    int tamanho
)
{
    NoPilha *novo = (NoPilha*) malloc(sizeof(NoPilha));

    if(novo == NULL)
    {
        printf("Erro de memoria!\n");
        return;
    }

    novo->pacote.numeroPacote = numero;
    novo->pacote.tamanhoKB = tamanho;

    novo->proximo = pilha->topo;
    pilha->topo = novo;

    printf("Pacote %d registrado com erro.\n", numero);
}

void desempilhar(Pilha *pilha)
{
    if(pilhaVazia(pilha))
    {
        printf("Pilha vazia!\n");
        return;
    }

    NoPilha *temp = pilha->topo;

    printf(
        "Retransmitindo pacote %d\n",
        temp->pacote.numeroPacote
    );

    pilha->topo = temp->proximo;

    free(temp);
}

void mostrarPilha(Pilha *pilha)
{
    if(pilhaVazia(pilha))
    {
        printf("Pilha vazia!\n");
        return;
    }

    NoPilha *aux = pilha->topo;

    printf("\n=== PILHA DE ERROS ===\n");

    while(aux != NULL)
    {
        printf(
            "Pacote %d | %d KB\n",
            aux->pacote.numeroPacote,
            aux->pacote.tamanhoKB
        );

        aux = aux->proximo;
    }

    printf("\n");
}

void liberarPilha(Pilha *pilha)
{
    while(!pilhaVazia(pilha))
    {
        desempilhar(pilha);
    }
}