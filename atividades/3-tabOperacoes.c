// 3.tabela de operações com vetor
#include <stdio.h>

//função somar todos números vetor
void soma(int n[5]){
    int soma=0;
    for(int i=0;i<5;i++){
        soma += n[i];
    }
    printf("\nA soma de todos os números é %d\n",soma);
}

//função subtrair todos números em sequência
void sub(int n[5]){
    int sub=n[0];
    for(int i=1;i<5;i++){
        sub -= n[i];
    }
    printf("\nA subtração de todos os números é %d\n",sub);
}

//função multiplicar todos números
void mult(int n[5]){
    int mult=1;
    for(int i=0;i<5;i++){
        mult *= n[i];
    }
    printf("\nA multiplicação de todos os números é %d\n",mult);
}

//função dividir primeiro número com o primeiro
void divi(int n[5]){
    if(n[4]!=0){
        printf("\nA divisão do primeiro número %d com o último %d é %d\n",n[0],n[4],n[0]/n[4]);
    }else {
        printf("\nDivisão inválida\n");
    }
}

int main() {
    int n[5],opc;
  
    printf("Digite 5 números inteiros:\n");
    //laço para ler os números
    for(int i=0;i<5;i++){
        printf("Número %d: ",i+1);
        scanf("%d",&n[i]);
    }
    
    //menu para escolher operação
    do{
        printf("\n----MENU----\n1.Somar todos\n2.Subtrair todos\n3.Multiplicar todos\n4.Dividir primeiro pelo último\n5.Sair\nEscolha o que deseja:\n");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                soma(n);
                break;
            
            case 2:
                sub(n);
                break;
            
            case 3:
                mult(n);
                break;
            
            case 4:
                divi(n);
                break;
            
            case 5:
                printf("\n--ATÉ A PRÓXIMA--\n",n);
                break;
        
            default:
                printf("\nOPÇÃO INVÁLIDA\n");
        }
    }while(opc!=5);
    
    return 0;
}
