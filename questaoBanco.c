#include <stdio.h>
/*coloquei como 1 pois levei em consideração que a operação iria ser feita somente em uma conta*/
#define NUMCONTA 1
typedef struct {
  int numero;
  double saldo;
} contaBancaria;

void inicializaConta(contaBancaria *conta, int numero, double saldo) {
  conta->numero = numero;
  conta->saldo = saldo;
}
void deposita(contaBancaria *conta) {
  double valor;
  printf("Qual valor desejas depositar?\n");
  scanf("%lf", &valor);
  printf("Deposito realizado no valor de %.2f R$\n", valor);
  conta->saldo = conta->saldo + valor;
}
void saca(contaBancaria *conta) {
  double valor;
  printf("Qual valor desejas sacar?\n");
  scanf("%lf", &valor);
  printf("Saque realizado no valor de %.2f R$\n", valor);
  conta->saldo = conta->saldo - valor;
}
void imprime(contaBancaria conta) {
  printf("A conta de numero: %d\npossui saldo de: %.2f R$\n", conta.numero, conta.saldo);
}

int main() {
  contaBancaria conta;
  int opcao;
  int parar;
  do {
    printf("\nDentre as operacoes:\n1-Inicializar Conta\n2-Depositar\n3-Sacar\n4-Imprimrir\nEscolha um valor:");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      printf("A conta foi inicializada!\n");
      inicializaConta(&conta, NUMCONTA, 0.00);
      break;

    case 2:
      deposita(&conta);
      break;

    case 3:
      saca(&conta);
      break;

    case 4:
      imprime(conta);
      break;

    default:
      printf("\nValor invalido!\n");
    }
    printf("\nDigite 1 para continuar e 0 para parar:\n");
    scanf("%d", &parar);
    if (parar == 0) {
      printf("Parada executada!");
    }
  } while (parar != 0);
  return 0;
}
