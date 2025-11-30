// 6.vetor de pares e ímpares separados
#include <stdio.h>

//função ordenar em ordem crescente
void ordenar(int n[],int quant){
    int i,y,temp;
    
    for(i=0;i<(quant-1);i++){
        for(y=0;y<(quant-i-1);i++){
            if(n[y]>n[y+1]){
                temp=n[y];
                n[y]=n[y+1];
                n[y+1]=temp;
            }
        }
    }
}

int main() {
    int n[10], par[10], impar[10];
    int contP=0, contI=0;
  
    printf("Digite 10 números inteiros:\n");
    
    //laço ler 10 números e separar par e ímpar
    for(int i=0; i<10; i++){
        printf("Número %d: ",i+1);
        scanf("%d",&n[i]);
        
        if(n[i]%2==0){
            par[contP]=n[i];
            contP++;
        }else{
            impar[contI]=n[i];
            contI++;
        }
        
    }
    
    //chamar função para ordenar números
    ordenar(par,contP);
    ordenar(impar,contI);
    
    //condição para determinada quantidade de número par
    if(contP>1){
        printf("\nNúmeros pares em ordem crescente:\n");
    }else if(contP==1){
        printf("\nNúmero par:\n");
    }else{
        printf("\nNenhum número par\n");
    }
    
    //laço para imprimir números pares
    for(int i=0;i<contP;i++){
        printf("%d ",par[i]);
    }
    
    //condição para determinada quantidade de número ímpar
    if(contI>1){
        printf("\n\nNúmeros ímpares em ordem crescente:\n");
    }else if(contI==1){
        printf("\n\nNúmero ímpar:\n");
    }else{
        printf("\n\nNenhum número ímpar\n");
    }
    
    //laço para imprimir números ímpares
    for(int i=0;i<contI;i++){
        printf("%d ",impar[i]);
    }
    
    return 0;
}
