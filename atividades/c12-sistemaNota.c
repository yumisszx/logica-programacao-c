// 12.mini sistema de notas
#include <stdio.h>

//função mostra notas
void mostrar(float nota[6]) {
    for(int i=0;i<6;i++){
        printf("A %dª nota é %.1f\n",i+1,nota[i]);
    }
}

//função calcular média
void calMedia(float nota[6], float *media){
    float soma=0.0;
    for (int i=0;i<6;i++) {
        soma += nota[i];
    }
    *media= soma/6;
}

//função mostrar nota acima da média
void acimaMed(float nota[6], float media){
    for (int i=0;i<6;i++){
        if (nota[i]>media){
            printf("\nA %dª nota está acima da média %.1f sendo %.1f", i+1,media,nota[i]);
        }
    }
}

//função mostrar menor nota
void menor(float nota[6]) {
    float menor=nota[0];
    for(int i=0;i<6;i++){
        if(nota[i]<menor){
            menor=nota[i];
        }
    }
    printf("\nA menor nota é %.1f\n",menor);
}

int main() {
    int i,opc;
    float nota[6];
    float media=0;
    
    //ler notas do usuário
    for (i=0;i<6;i++){
        printf("Digite a %dª nota: \n", i+1);
        scanf("%f",&nota[i]);
    }
    
    //menu escolha do usuário
    do{
        printf("\n\n------MENU------\n1.Mostrar notas\n2.Calcular a média\n3.Mostrar notas acima da média\n4.Mostar menor nota\n5.Sair\n");
        scanf("%d",&opc);
        
        switch (opc){
            case 1:
                mostrar(nota);
                break;
            
            case 2:
                calMedia(nota,&media);
                printf("\nA média das notas é %.1f",media);
                break;
                
            case 3:
                calMedia(nota,&media);
                acimaMed(nota,media);
                break;
                
            case 4:
                menor(nota);
                break;
                
            case 5:
                printf("----Até a próxima----");
                break;
                
            default:
                printf("\n--Opção inválida--\n");
        }
    }while (opc!=5);
    

    return 0;
}
