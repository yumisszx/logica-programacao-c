//13.vetor com operações mistas
#include <stdio.h>

//função mostrar soma todos os números
void somarTodos (int n[10]){
    int soma=0;
    for(int i=0;i<10;i++){
        soma += n[i];
    }
    printf("\nA soma de todos os números é %d\n",soma);
}

//função mostrar soma dos pares
void somarPar(int n[10]){
    int soma=0;
    
    for(int i=0;i<10;i++){
        if(n[i]%2==0){
            soma += n[i];
        }
    }
    printf("\nA soma dos números pares é %d\n",soma);
}

//função mostrar soma dos ímpares
void somarImpar(int n[10]){
    int soma=0;
    
    for(int i=0;i<10;i++){
        if(n[i]%2!=0){
            soma += n[i];
        }
    }
    printf("\nA soma dos números ímpares é %d\n",soma);
}

//função mostrar multiplicação de todos números
void mult(int n[10]){
    int m=1;
    for(int i=0;i<10;i++){
        m *= n[i];
    }
    printf("\nA multiplicação de todos números é %d\n",m);
}

//função mostra p resto da soma dividido por 7
void div7(int n[10]){
    int soma=0,resto=0;
    for(int i=0;i<10;i++){
        soma += n[i];
    }
    resto=soma%7;
    printf("\nO resto da soma divido por 7 é %d\n",resto);
}

int main() {
    int i,num[10],opc;
    
    //ler números inteiros
    printf("Digite 10 números inteiros\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    
    //menu de escolha
    do{
        printf("\nEscolha o que deseja fazer:\n------MENU------\n1.Somar todos os números\n2.Somar todos números pares\n3.Somar todos números ímpares\n4.Multiplicar todos números\n5.Calcular o resto da soma dividido por 7\n6.Sair\n");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                somarTodos(num);
                break;
            
            case 2:
                somarPar(num);
                break;
                
            case 3:
                somarImpar(num);
                break;
                
            case 4:
                mult(num);
                break;
                
            case 5:
                div7(num);
                break;
            
            case 6:
                printf("------Até a próxima------");
                break;
                
            default:
                printf("\n--OPÇÃO INVÁLIDA--\n");
            
        }
    }while (opc!=6);

    return 0;
}
