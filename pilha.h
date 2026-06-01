#ifndef PILHA_H
#define PILHA_H

// Estrutura do pacote com erro
typedef struct {
    int numeroPacote;
    int tamanhoKB;
} PacoteErro;

// Nó da pilha
typedef struct NoPilha {
    PacoteErro pacote;
    struct NoPilha *proximo;
} NoPilha;

// Estrutura da pilha
typedef struct {
    NoPilha *topo;
} Pilha;

// Funções
void inicializarPilha(Pilha *pilha);

int pilhaVazia(Pilha *pilha);

void empilhar(
    Pilha *pilha,
    int numero,
    int tamanho
);

void desempilhar(Pilha *pilha);

void mostrarPilha(Pilha *pilha);

void liberarPilha(Pilha *pilha);

#endif