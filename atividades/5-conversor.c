// 5.conversor matemático
#include <stdio.h>

//função converter metros para centímetros
void m_c(float n){
    printf("\nDigite a distância em metro:\n");
    scanf("%f",&n);
    
    printf("\n%.1fm = %.1fcm\n\n",n,n*100);
}

//função converter celsius para fahrenheit
void c_f(float n){
    float f=0;
    
    printf("\nDigite a temperatura em Celsius\n");
    scanf("%f",&n);
    
    f=((9/5)*n)+32;
    
    printf("\n%.1fºC = %.1fºF\n\n",n,f);
}


//função converter reais em dólares
void r_d(float n){
    float d;
    
    printf("\nDigite a quantia em reais:\n");
    scanf("%f",&n);
    
    d=n/5.33;
    
    printf("\nR$%.2f = US$%.2f\n\n",n,d);
}

//função converter km/h em m/s
void kh_ms(float n){
    printf("\nDigite a distância em Km/h:\n");
    scanf("%f",&n);
    
    printf("\n%.1fKm/s = %.1fm/s\n\n",n,n/3.6);
}

int main() {
    int opc;
    float n;
  
    //laço com condicional para repetir menu ao usuário até desejar sair
    do{
        printf("Escolha o que deseja converter:\n");
        printf("\n----MENU----\n1.Metros - Centímetros\n2.Celsius - Fahrenheit\n3.Real - Dólar\n4.Km/h - m/s\n5.Sair\n");
        scanf("%d",&opc);
        
        switch(opc){
            case 1:
                m_c(n);
                break;
            
            case 2:
                c_f(n);
                break;
            
            case 3:
                r_d(n);
                break;
            
            case 4:
                kh_ms(n);
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
