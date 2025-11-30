// 2.classificador de números
#include <stdio.h>

int main() {
    int n,opc=0;
  
    //ler número do usuário
    printf("Digite um número inteiro:\n");
    scanf("%d",&n);
    
    //condição para classificar se o número é par ou ímpar e negativo ou positivo
    if(n>0 && n%2==0){
        opc=1;
    } else if(n>0 && n%2!=0){
        opc=2;
    } else if(n<0 && n%2==0){
        opc=3;
    } else if(n<0 && n%2!=0){
        opc=4;
    } else if(n==0){
        opc=5;
    }
    
    //condição para imprimir mensagem sobre o número
    switch(opc){
        case 1:
            printf("\nO número %d é PAR POSITIVO\n",n);
            break;
            
        case 2:
            printf("\nO número %d é ÍMPAR POSITIVO\n",n);
            break;
            
        case 3:
            printf("\nO número %d é PAR NEGATIVO\n",n);
            break;
            
        case 4:
            printf("\nO número %d é ÍMPAR NEGATIVO\n",n);
            break;
            
        case 5:
            printf("\nO número %d é ZERO\n",n);
            break;
    }
    
    return 0;
}
