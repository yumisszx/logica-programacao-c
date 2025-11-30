// 8. menu de Análise de Números
#include <stdio.h>

//função ver números pares
void pares(int n[8]){
    int cont=0;
    
    for(int i=0;i<8;i++){
        if(n[i]%2==0){
            printf("\nO número %d é par",n[i]);
            cont++;
        }
    }
    if(cont==0){
        printf("\nNenhum número é ímpar\n");
    }
}

//função ver números ímpares
void impares(int n[8]){
    int cont=0;
    
    for(int i=0;i<8;i++){
        if(n[i]%2!=0){
            printf("\nO número %d é ímpar",n[i]);
            cont++;
        }
    }
    if(cont==0){
        printf("\nNenhum número é ímpar\n");
    }
}

//função ver soma e média
void soma_media(int n[8]){
    int soma=0,media;
    
    for(int i=0;i<8;i++){
        soma+=n[i];
    }
    
    media=soma/8;
    
    printf("\nA soma de todos os números é %d\n",soma);
    printf("\nA média dos números é %d\n",media);
}

//função ver valores acima da média
void aci_media(int n[8]){
    int soma=0,media,cont=0;
    
    for(int i=0;i<8;i++){
        soma+=n[i];
    }
    
    media=soma/8;
    
    printf("\nA média dos números é %d\n",media);
    
    for(int i=0;i<8;i++){
        if(n[i]>media){
            printf("\nO número %d está acima da média\n",n[i]);
            cont++;
        }
    }
    if(cont==0){
        printf("\nTodos os números são iguais\n");
    }
}

int main() {
    int n[8],opc;
    
    //laço para ler 8 números
    printf("Digite 8 números inteiros:\n");
    for(int i=0;i<8;i++){
        printf("Número %d: ",i+1);
        scanf("%d",&n[i]);
    }
    
    //menu para usuário escolher o que deseja
    do{
        printf("\n\n---ANÁLISE DE NÚMEROS---\n1.Números pares\n2.Números ímpares\n3.Soma e média\n4.Números acima da média\n5.Sair\n");
        printf("Escolha o que deseja visualizar: ");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                pares(n);
                break;
                
            case 2:
                impares(n);
                break;
                
            case 3:
                soma_media(n);
                break;
                
            case 4:
                aci_media(n);
                break;
                
            case 5:
                printf("\n---ATÉ A PRÓXIMA---");
                break;
             
            default:
                printf("\n--NÚMERO INVÁLIDO--");
        }
    }while(opc!=5);

    return 0;
}
