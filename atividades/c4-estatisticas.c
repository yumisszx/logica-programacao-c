// 4.estatísticas de vetor
#include <stdio.h>

//função de média
void media(int n[10]){
    int soma=0;
    for(int i=0;i<10;i++){
        soma+=n[i];
    }
    printf("\nMédia = %d\n",soma/10);
}

//função número maior
void maior(int n[10]){
    int maior=n[0];
    for(int i=1;i<10;i++){
        if(maior<n[i]){
            maior=n[i];
        }
    }
    printf("\nMaior número = %d\n",maior);
}


//função número menor
void menor(int n[10]){
    int menor=n[0];
    for(int i=1;i<10;i++){
        if(menor>n[i]){
            menor=n[i];
        }
    }
    printf("\nMenor número = %d\n",menor);
}

//função números divisiveis por 5
void div5(int n[10]){
    int c=0;
    for(int i=0;i<10;i++){
        if(n[i]%5==0){
            c++;
        }
    }
    if(c>1){
        printf("\n%d números são divisíveis por 5\n",c);
    }else if(c==1){
        printf("\n1 número é divisível por 5\n");
    }else{
        printf("\nNenhum número é divisível por 5\n");
    }
}

int main() {
    int n[10],opc;
  
    printf("Digite 10 números:\n");
    //laço para ler 10 números
    for(int i=0;i<10;i++){
        printf("Número %d: ",i+1);
        scanf("%d",&n[i]);
    }
    
    //laço com condicional para repetir menu ao usuário até desejar sair
    do{
        printf("\n----MENU----\n1.Média\n2.Maior número\n3.Menor número\n4.Quantos divisíveis por 5\n5.Sair\nEscolha o que deseja:\n");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                media(n);
                break;
            
            case 2:
                maior(n);
                break;
            
            case 3:
                menor(n);
                break;
            
            case 4:
                div5(n);
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
