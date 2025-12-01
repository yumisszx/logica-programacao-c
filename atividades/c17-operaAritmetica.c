//17.menu de operações aritméticas
#include <stdio.h>

//função dobro
void dobro(int n[6]){
    for(int i=0;i<6;i++){
        printf("\nDobro de %d = %d",n[i],n[i]*2);
    }
}

//função somar números em posição par
void somaP(int n[6]){
    int soma=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            soma += n[i];
        }
    }
    printf("\nA soma dos números nas posições pares é %d\n",soma);
}

//função inverter ordem
void invertido(int n[6]){
    for(int i=6-1;i>=0;i--){
        printf ("%d  ",n[i]);
    }
}

//função produto dos números
void produto(int n[6]){
    int p=1;
    for(int i=0;i<6;i++){
        p *= n[i];
    }
    printf("\nO produto dos números é %d\n",p);
}

int main() {
    int i,n[6],opc;
    
    //ler números
    printf("---Digite 6 números---\n");
    for(i=0;i<6;i++){
        printf("Número %d: ", i+1);
        scanf("%d",&n[i]);
    }
    
    //menu de escolha
    do{
        printf("\n-----MENU-----\n1.Dobro dos números\n2.Somar os elementos das posições pares\n3.Ordem invertida\n4.Calcular o produto\n5.Sair\n");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                dobro(n);
                break;
                
            case 2:
                somaP(n);
                break;
            
            case 3:
                printf("\n");
                invertido(n);
                printf("\n");
                break;
            
            case 4:
                produto(n);
                break;
            
            case 5:
                printf("Até a próxima");
                break;
            
            default:
            printf("\nOPÇÃO INVÁLIDA\n");
        }
    }while(opc !=5);
    
    return 0;
}
