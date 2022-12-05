#include <stdio.h>
#define MAX 5
/*lista
FEITOS:
cheia?
vazia?
retornar tamanho da lista
imprimir elementos da lista
*/
struct lista {
  int quant;
  int vet[MAX];
};
typedef struct lista Lista;

int lista_cheia(Lista *l) {
  if (l == NULL)
    return -1;
  return (l->quant == MAX);
}

int lista_vazia(Lista *l) {
  if (l == NULL)
    return -1;
  return (l->quant == 0);
}

int tamanho_lista(Lista *l) {
  if (l == NULL) {
    return -1;
  } else {
    return l->quant;
  }
}

int imprimir_lista(Lista *l) {
  return printf("%d", l->vet[l->quant]);
}
