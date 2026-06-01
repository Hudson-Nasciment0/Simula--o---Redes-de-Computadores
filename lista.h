#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int id;
    char origem[30];
    char destino[30];
    char status[20];
} PacoteRede;

typedef struct NoLista {
    PacoteRede pacote;
    struct NoLista *proximo;
} NoLista;

void inserirPacote(
    NoLista **lista,
    int id,
    char origem[],
    char destino[],
    char status[]
);

void buscarPacote(
    NoLista *lista, int id);

void removerPacote(
    NoLista **lista, int id);

void listarPacotes(NoLista *lista);

void liberarLista(NoLista **lista);

#endif