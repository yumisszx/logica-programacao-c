// 9. vetor de Fatorial
#include <stdio.h>

//função retornar fatorial
int fatorial(int n) {
    int fat=1;
    for (int i=1;i<=n;i++) {
        fat*=i;
    }
    return fat;
}

int main() {
    int n[6],fat[6];

    //ler números do usuário e invalidar números negativos
    printf("Digite 6 números inteiros:\n");
    for (int i=0;i<6;i++) {
        printf("Número %d: ",i+1);
        scanf("%d", &n[i]);
        if(n[i]>=0){
            fat[i]=fatorial(n[i]);
        }else{
            printf("--VALOR NEGATIVO INVÁLIDO--");
            return 1;
        }
    }

    //exibir vetor de entrada dos números e seus respectivos fatoriais
    printf("\nVetor original:\n");
    for (int i=0;i<6;i++){
        printf("|%d ",n[i]);
    }
    printf("\n\nVetor dos fatoriais:\n");
    for (int i=0;i<6;i++){
        printf("|%d ",fat[i]);
    }

    return 0;
}
