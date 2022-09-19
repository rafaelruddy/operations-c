#include <stdio.h>

// prints menu and scan user option
int menu(void) {
  int option;
  printf("==========================\n");
  printf("===========Menu===========\n");
  printf("==========================\n");
  printf("[1] Soma\n");          // sum();
  printf("[2] Subtração\n");     // sub();
  printf("[3] Multiplicação\n"); // mult();
  printf("[4] Divisão\n");       // div();
  printf("[0] Sair\n");          // exit the program
  printf("==========================\n");
  printf("==========================\n");
  printf("==========================\n");
  printf("Opção: ");
  scanf("%d", &option);
  return option;
}

// scan values of n1 and n2 using pointers
int scanNum(int *n1, int *n2) {
  printf("Digite o numero 1: ");
  scanf("%d", n1);

  printf("Digite o numero 2: ");
  scanf("%d", n2);
  return 0;
}

// sum function
int sum(int num1, int num2) {
  int sumreturn = num1 + num2;
  return sumreturn;
}

// subtraction function
int sub(int num1, int num2) {
  int subreturn = num1 - num2;
  return subreturn;
}

// multiply function
int mult(int num1, int num2) {
  int multreturn = num1 * num2;
  return multreturn;
}

// division function
int div(int num1, int num2) {
  int divreturn = num1 / num2;
  return divreturn;
}

int main(void) {
  // declare esssential variables
  int n1, n2;
  int result = 0;
  // calls the function menu() and uses switch to handle input
  switch (menu()) {
  case 1: // sum
    scanNum(&n1, &n2);
    result = sum(n1, n2);
    printf("Resultado: %d\n", result);
    break;
  case 2: // sub
    scanNum(&n1, &n2);
    result = sub(n1, n2);
    printf("Resultado: %d\n", result);
    break;

  case 3: // multiply
    scanNum(&n1, &n2);
    result = mult(n1, n2);
    printf("Resultado: %d\n", result);
    break;

  case 4: // division
    scanNum(&n1, &n2);
    if (n1 < n2 || n2 == 0) {
      printf("Operação inválida\n");
    } else {
      result = div(n1, n2);
      printf("Resultado: %d\n", result);
    }

    break;
  case 0: // exit
    break;

  default: // handle invalid input
    menu();
  }
  return 0;
}
