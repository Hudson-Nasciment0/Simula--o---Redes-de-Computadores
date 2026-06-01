#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"

void inserirPacote(
    NoLista **lista,
    int id,
    char origem[],
    char destino[],
    char status[]
)
{
    NoLista *novo = (NoLista*) malloc(sizeof(NoLista));

    if(novo == NULL)
    {
        printf("Erro de memoria!\n");
        return;
    }

    novo->pacote.id = id;

    strcpy(novo->pacote.origem, origem);
    strcpy(novo->pacote.destino, destino);
    strcpy(novo->pacote.status, status);

    novo->proximo = *lista;
    *lista = novo;

    printf("Pacote %d inserido na rede.\n", id);
}

void buscarPacote(
    NoLista *lista,
    int id
)
{
    while(lista != NULL)
    {
        if(lista->pacote.id == id)
        {
            printf("\nPacote encontrado:\n");

            printf("ID: %d\n",
                   lista->pacote.id);

            printf("Origem: %s\n",
                   lista->pacote.origem);

            printf("Destino: %s\n",
                   lista->pacote.destino);

            printf("Status: %s\n",
                   lista->pacote.status);

            return;
        }

        lista = lista->proximo;
    }

    printf("Pacote nao encontrado.\n");
}

void removerPacote(
    NoLista **lista,
    int id
)
{
    NoLista *atual = *lista;
    NoLista *anterior = NULL;

    while(atual != NULL &&
          atual->pacote.id != id)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if(atual == NULL)
    {
        printf("Pacote nao encontrado.\n");
        return;
    }

    if(anterior == NULL)
    {
        *lista = atual->proximo;
    }
    else
    {
        anterior->proximo = atual->proximo;
    }

    printf("Pacote %d removido da rede.\n", id);

    free(atual);
}

void listarPacotes(
    NoLista *lista
)
{
    if(lista == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    printf("\n=== LISTA DE PACOTES ATIVOS ===\n");

    while(lista != NULL)
    {
        printf(
            "\nID: %d\n"
            "Origem: %s\n"
            "Destino: %s\n"
            "Status: %s\n",
            lista->pacote.id,
            lista->pacote.origem,
            lista->pacote.destino,
            lista->pacote.status
        );

        lista = lista->proximo;
    }

    printf("\n");
}