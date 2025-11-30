// 11.controle de temperaturas
#include <stdio.h>

//função mostrar maior temperatura
void maior(float temp[7]) {
    float maior=temp[0];
    for(int i=0;i<7;i++){
        if(temp[i]>maior){
            maior=temp[i];
        }
    }
    printf("\nMaior temperatura é %.1f°C",maior);
}

//função mostrar menor temperatura
void menor(float temp[7]) {
    float menor=temp[0];
    for(int i=0;i<7;i++){
        if(temp[i]<menor){
            menor=temp[i];
        }
    }
    printf("\nMenor temperatura é %.1f°C\n",menor);
}

//função calcular média
void calMedia(float temp[7], float *media){
    float soma=0.0;
    for (int i=0;i<7;i++) {
        soma += temp[i];
    }
    *media= soma/7;
}

//função mostrar dias acima da média
void dias(float temp[7], float media){
    for (int i=0;i<7;i++){
        if (temp[i]>media){
            printf("\nO dia %d está acima da média com %.1f°C", i+1,temp[i]);
        }
    }
}

int main() {
    int i,opc;
    float temp[7];
    float media=0;
    
    //ler temperaturas do usuário
    for (i=0;i<7;i++){
        printf("Digite a temperatura do dia %d: \n", i+1);
        scanf("%f",&temp[i]);
    }
    
    //menu de escolha de visualização
    do{
        printf("\n\nEscolha o que deseja ver:\n1.Maior e menor temperatura\n2.Calcular a média\n3.Mostra os dias acima da média\n4.Sair\n");
        scanf("%d",&opc);
        
        switch (opc){
            case 1:
                maior(temp);
                menor(temp);
                break;
            
            case 2:
                calMedia(temp,&media);
                printf("\nA média das temperaturas é %.1f",media);
                break;
                
            case 3:
                calMedia(temp,&media);
                dias(temp, media);
                break;
                
            case 4:
                printf("----ATÉ A PRÓXIMA----");
                break;
                
            default:
            printf("--OPÇÃO INVÁLIDA--");
        }
    }while (opc!=4);

    return 0;
}
