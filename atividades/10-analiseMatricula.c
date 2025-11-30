// 10.analisador de matrículas
#include <stdio.h>

//função mostrar matrículas pares
void pares(int n[10]){
    int soma=0;
    
    for(int i=0;i<10;i++){
        if(n[i]%2==0){
            soma++;
        }
    }
    if(soma==1){
        printf("\n1 matrícula é par\n");
    }else if(soma>1){
        printf("\n%d matrículas são pares\n",soma);
    }else{
        printf("\nNenhum matrícula é par\n");
    }
}

//função mostrar matrículas terminadas em 5
void ter5(int n[10]){
    int soma=0;
    
    for(int i=0;i<10;i++){
        if(n[i]%10==5){
            soma++;
        }
    }
    if(soma==1){
        printf("\n1 matrícula termina em 5\n");
    }else if(soma>1){
        printf("\n%d matrículas terminam em 5\n",soma);
    }else{
        printf("\nNenhum matrícula termina em 5\n");
    }
}

//mostrar matrículas divíveis por 3 e 5
void div3e5(int n[10]){
    int soma=0;
    
    for(int i=0;i<10;i++){
        if(n[i]%3==0 && n[i]%5==0){
            soma++;
        }
    }
    if(soma==1){
        printf("\n1 matrícula divísivel por 3 e 5");
    }else if(soma>1){
        printf("\n%d matrículas são divísiveis por 3 e 5",soma);
    }else{
        printf("\nNenhum matrícula é divísivel por 3 e 5");
    }
}

int main() {
    int n[10];
    
    //ler 10 matrículas
    printf("Digite 10 matrículas:\n");
    
    for(int i=0;i<10;i++){
        printf("Matrícula %d: ",i+1);
        scanf("%d",&n[i]);
    }
    
    //retornar matrículas pares, terminadas em 5 e divísivel por 3 e 5
    printf("\n--ANÁLISE DE MATRÍCULAS--\n");
    pares(n);
    ter5(n);
    div3e5(n);

    return 0;
}
