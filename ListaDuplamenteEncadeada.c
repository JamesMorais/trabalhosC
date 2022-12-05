#include <stdio.h>
#include <stdlib.h>
/*Lista duplamente encadeada*/
struct no {
  int valor;
  struct no *anterior;
  struct no *proximo;
} No;
struct no *inserir_lista(struct no *lista, int valor) {
  struct no *temp = malloc(sizeof(struct no));
  temp->anterior = NULL;
  temp->valor = valor;
  temp->proximo = NULL;
  lista = temp;

  return lista;
}
struct no* inserirInicio(struct no* lista, int valor){
    struct no* temp = malloc(sizeof(struct no));
    temp -> anterior = NULL;
    temp ->valor = valor;
    temp ->proximo = NULL;
    temp ->proximo = lista;
    lista -> anterior = temp;
    lista = temp;
    return lista;
}

struct no* removerInicio(struct no* lista){
    struct no* temp = lista;
    lista = lista ->proximo;
    free(temp);
    temp = NULL;
    lista ->proximo = NULL;
    return lista;
}
struct no* removerFinal(struct no *lista){
  struct no *temp = lista;
  struct no *temp2;
  while (temp->proximo != NULL) {
    temp = temp->proximo;
    temp2 = temp->anterior;
    temp2->proximo = NULL;
    free(temp);
    return lista;
  }
}
void imprimir(struct no* lista){
    struct no* l = lista;
    while( l != NULL){
        printf("%d ", l->valor);
        l = l ->proximo;
    }
}
