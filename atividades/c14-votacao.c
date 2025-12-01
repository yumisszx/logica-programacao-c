//14.sistema de votação
#include <stdio.h>

int main() {
    int i,votos[10],v1=0,v2=0,v3=0,vn=0;

  //exibir candidatos
    printf("----Sistema de votação----\n       CANDIDATOS:     \n1.Candidato 1\n2.Candidato 2\n3.Candidato 3\nVote nos candidatos acima\n");

    //ler e somar os votos
    for(i=0;i<10;i++){
        scanf("%d",&votos[i]);
        switch(votos[i]){
            case 1:
                v1++;
                break;
                
            case 2:
                v2++;
                break;
                
            case 3:
                v3++;
                break;
                
            default:
                vn++;
        }
    }
    
    //mostrar quantidade de votos em cada candidato
    printf("\nQUANTIDADE DE VOTOS:\n1.Candidato 1 = %d\n2.Candidato 2 = %d\n3.Candidato 3 = %d\nNulo = %d\n",v1,v2,v3,vn);

    //exibir vencedor
    if(v1>v2 && v1>v3){
        printf("\n------VENCEDOR------\n");
        printf("Candidato 1");
    }else if (v2>v1 && v2>v3){
        printf("\n------VENCEDOR------\n");
        printf("Candidato 2");
    } else if (v3>v1 && v3>v2){
        printf("\n------VENCEDOR------\n");
        printf("Candidato 3");
    } else if(v1==v2 || v1==v3 || v2==v3){
        printf("----EMPATE----");
    }

    return 0;
}
