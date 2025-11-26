//1.calculadora modular com funções
#include <stdio.h>

//função de soma
void soma(int n[2]){
  printf("\n%d + %d = %d\n", n[0], n[1], n[0]+n[1]);
}

//função subtração
void subtracao(int n[2]){
  printf("\n%d - %d = %d\n", n[0], n[1], n[0]-n[1]);
}

//função multiplicação
void multiplicacao(int n[2]){
  printf("\n%d x %d = %d\n", n[0], n[1], n[0]*n[1]);
}

//função divisão
void divisao(int n[2]){
  if(n[1] != 0){
      printf("\n%d : %d = %d\n", n[0], n[1], n[0]/n[1]);
  } else {
      printf("\nNão é possível fazer a divisão\n");
  }
}

//função resto da divisão
void restoDiv(int n[2]){
  printf("\nO resto da divisão %d : %d é %d\n", n[0], n[1], n[0]%n[1]);
}

int main() {
  int n[2], opcao;

  //laço para ler os númeroa
  printf("Digite dois números:\n");
  for(int i = 0; i < 2; i++){
    scanf("%d", &n[i]);
  }

  //menu para usuário escolher quais operações quer realizar
  do{
    printf("\n----MENU----\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n5.Resto de divisão\n6.Sair\n");
    printf("Escolha o que deseja fazer: ");
    scanf("%d", &opcao);

    switch(opcao){
      case 1:
        soma(n);
        break;
      
      case 2:
        subtracao(n);
        break;
      
      case 3:
        multiplicacao(n);
        break;
      
      case 4:
        divisao(n);
        break;
      
      case 5:
        restoDiv(n);
        break;
      
      case 6:
        printf("\n---ATÉ A PRÓXIMA---\n");
        break;
      
      default:
        printf("\n--OPÇÃO INVÁLIDA--\n");
    }
  }while(opcao != 6);

  return 0;
}
