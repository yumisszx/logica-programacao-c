//15.analisador de placa
#include <stdio.h>

int main() {
    int i,final,placa[10];

    //ler números das placas
    for(i=0;i<10;i++){
        printf("Digite o último digito da %dª placa(ex: 7): ", i+1);
        scanf("%d",&placa[i]);
    }

    //exibir rodízio de cada final
    printf ("--DIA DE RODÍZIO DAS PLACAS--");

    //laço exibir placas e dias
    for(i=0;i<10;i++){
        final= placa[i] % 10;

        //converter número negativo em positivo
        if(final<0){
            final *= -1;
        }
        
        printf("\nFinal %d: ",final);

        //dias de rodízio
        switch(final){
            case 1:
            case 2:
                printf("\nSegunda-feira\n");
                break;
                
            case 3:
            case 4:
                printf("\nTerça-feira\n");
                break;
                
            case 5:
            case 6:
                printf("\nQuarta-feira\n");
                break;
                
            case 7:
            case 8:
                printf("\nQuinta-feira\n");
                break;
                
            case 9:
            case 0:
                printf("\nSexta-feira\n");
                break;
                
            default:
                printf("Valor inválido");
        }
    }

    return 0;
}
