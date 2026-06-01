#include <stdio.h>

#include "fila.h"
#include "pilha.h"
#include "lista.h"

int main()
{
    Fila fila;
    Pilha pilha;
    NoLista *lista = NULL;

    inicializarFila(&fila);
    inicializarPilha(&pilha);

    printf("\n==============================\n");
    printf("   SIMULACAO DE REDE\n");
    printf("==============================\n");

    printf("\n===== FILA =====\n\n");

    enfileirar(&fila, 1, 500, 5.0);
    enfileirar(&fila, 2, 300, 3.0);
    enfileirar(&fila, 3, 700, 7.0);
    enfileirar(&fila, 4, 200, 2.0);

    mostrarFila(&fila);

    printf("Transmitindo dois pacotes...\n\n");

    desenfileirar(&fila);
    desenfileirar(&fila);

    mostrarFila(&fila);

    

    printf("\n===== PILHA =====\n\n");

    empilhar(&pilha, 2, 300);
    empilhar(&pilha, 4, 200);

    mostrarPilha(&pilha);

    printf("Retransmitindo ultimo pacote com erro...\n\n");

    desempilhar(&pilha);

    mostrarPilha(&pilha);

    

    printf("\n===== LISTA =====\n\n");

    inserirPacote(
        &lista,
        101,
        "PC-A",
        "Servidor",
        "Em Transito"
    );

    inserirPacote(
        &lista,
        102,
        "PC-B",
        "Servidor",
        "Entregue"
    );

    inserirPacote(
        &lista,
        103,
        "PC-C",
        "PC-D",
        "Em Transito"
    );

    listarPacotes(lista);

    printf("\nBuscando pacote 102...\n");

    buscarPacote(lista, 102);

    printf("\nRemovendo pacote entregue...\n");

    removerPacote(&lista, 102);

    listarPacotes(lista);

    

    return 0;
}