#ifndef FILA_H
#define FILA_H

// Estrutura do pacote
typedef struct {
    int numeroPacote;
    int tamanhoKB;
    float tempoTransmissao;
} PacoteFila;

// Nó da fila
typedef struct NoFila {
    PacoteFila pacote;
    struct NoFila *proximo;
} NoFila;

// Estrutura da fila
typedef struct {
    NoFila *inicio;
    NoFila *fim;
} Fila;

// Funções
void inicializarFila(Fila *fila);

int filaVazia(Fila *fila);

void enfileirar(
    Fila *fila,
    int numero,
    int tamanho,
    float tempo
);

void desenfileirar(Fila *fila);

void mostrarFila(Fila *fila);

#endif