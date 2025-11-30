// 7.simulador de caixa eletrônico
#include <stdio.h>

int main() {
    int saque,ced_ini,resto;
    int n200=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0;
    
    //ler quantia de saque
    printf("Digite o valor do saque:\n");
    scanf("%d",&saque);
    
    //verificar saque invalido
    if(saque<2){
        printf("\n--VALOR INVÁLIDO--\n");
        return 1;
    }
    
    //escolha da cédula inicial
    printf("Escolha a cédula inicial (200, 100, 50, 20, 10, 5, 2):\nR$ ");
    scanf("%d", &ced_ini);
    
    //verificar cédula válida
    if(ced_ini!=200 && ced_ini!=100 && ced_ini!=50 && ced_ini!=20 && ced_ini!=10 && ced_ini!=5 && ced_ini!=2){
        printf("--CÉDULA INICIAL INVÁLIDA--");
        return 1;
    }
    
    resto=saque;
    
    printf("\n---Detalhes do Saque R$%d---\n",saque);
    
    //condicional detalhes de saque
    switch(ced_ini){
        case 200:
            n200=resto/200;
            resto%=200;
            
            if(n200==1){
                printf("%d nota de R$200\n",n200);
            }else if(n200>1){
                printf("%d notas de R$200\n",n200);
            }
            
        case 100:
            n100=resto/100;
            resto%=100;
            
            if(n100==1){
                printf("%d nota de R$100\n",n100);
            }else if(n100>1){
                printf("%d notas de R$100\n",n100);
            }
            
        case 50:
            n50=resto/50;
            resto%=50;
            
            if(n50==1){
                printf("%d nota de R$50\n",n50);
            }else if(n50>1){
                printf("%d notas de R$50\n",n50);
            }
            
        case 20:
            n20=resto/20;
            resto%=20;
            
            if(n20==1){
                printf("%d nota de R$20\n",n20);
            }else if(n20>1){
                printf("%d notas de R$20\n",n20);
            }
            
        case 10:
            n10=resto/10;
            resto%=10;
            
            if(n10==1){
                printf("%d nota de R$10\n",n10);
            }else if(n10>1){
                printf("%d notas de R$10\n",n10);
            }
            
        case 5:
            n5=resto/5;
            resto%=5;
            
            if(n5==1){
                printf("%d nota de R$5\n",n5);
            }else if(n5>1){
                printf("%d notas de R$5\n",n5);
            }
            
        case 2:
            n2=resto/2;
            resto%=2;
            
            if(n2==1){
                printf("%d nota de R$2\n",n2);
            }else if(n2>1){
                printf("%d notas de R$2\n",n2);
            }
            break;
    }

    return 0;
}
