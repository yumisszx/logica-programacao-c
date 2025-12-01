//18.sistema de pagamento com desconto
#include <stdio.h>

//função pagamento à vista
void aVista(float v){
    v= v-(v*0.10);
    printf("\nÀ vista por R$%.2f",v);
}

//função pagamento no cartão
void cartao(float v){
    v= v-(v*0.05);
    printf("\nNo cartão por R$%.2f",v);
}

//função pagamento parcelado 2 vezes sem juros
void semJuros(float v){
    v=v/2;
    printf("\nDuas parcelas de R$%.2f",v);
}

//função pagamento parcelado 3 vezes com juros
void comJuros(float v){
    v=(v+(v*0.05))/3;
    printf("\nTrês vezes com juros por R$%.2f",v);
}


int main() {
    int opc;
    float valor;
    
    //ler valor da compra
    printf("Qual o valor da compra?\n");
    scanf("%f",&valor);
    
    //escolha de pagamento
    do{
        printf("\nEscolha a forma de pagamento:\n1.À vista (10%% de desconto)\n2.Cartão (5%% de desconto)\n3.2x sem juros\n4.3x com 5%% de juros\n");
        scanf("%d",&opc);
        
        switch(opc){
        case 1:
            aVista(valor);
            break;
            
        case 2:
            cartao(valor);
            break;
            
        case 3:
            semJuros(valor);
            break;
            
        case 4:
            comJuros(valor);
            break;
            
        default:
            printf("\nOPÇÃO INVÁLIDA\n");
        }
    }while(opc<1 || opc>4);

    return 0;
}
