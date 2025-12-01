//16.vetor dinâmico de estatísticas
#include <stdio.h>

//função ordem inversa do vetor
void inversa(int n[10]){
    for(int i=10-1;i>=0;i--){
        printf ("%d  ",n[i]);
    }
}

//função múltiplos de 2
void mult2(int n[10]){
    for(int i=0;i<10;i++){
        if(n[i]%2==0){
            printf("\n%d | é múltiplo de 2",n[i]);
        } 
    }
}

//função somar números em posições pares
void somaP(int n[10]){
    int soma=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
            soma += n[i];
        }
    }
    printf("\nA soma dos números nas posições pares é %d\n",soma);
}

int main() {
    int i,n[10],opc;
    
    //ler números
    printf("---Digite 10 números---\n");
    for(i=0;i<10;i++){
        printf("Número %d: ", i+1);
        scanf("%d",&n[i]);
    }
    
    //menu para escolher estatísticas
    do{
        printf("\n-----MENU-----\n1.Ordem inversa\n2.Múltiplos de 2\n3.Soma dos números nas posições pares\n4.Sair\n");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                printf("\n");
                inversa(n);
                printf("\n");
                break;
                
            case 2:
                mult2(n);
                break;
            
            case 3:
                somaP(n);
                break;
            
            case 4:
                printf("Até a próxima");
                break;
                
            default:
            printf("\nOPÇÃO INVÁLIDA\n");
        }
    }while(opc !=4);
    
    return 0;
}
