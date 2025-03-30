#include<stdio.h>

struct tEquipe{
   char nome[100];
   int pontos, vitorias, empates, derrotas, saldoGols, golsPro, golsCon;
};


int main () {
    // quantidade de equipes
    int n;
    printf("Digite o numero de equipes:");
    scanf("%d", &n);

    struct tEquipe equipes[n];


    for(int i = 0; i < n; i++){
        scanf("%s", equipes[i].nome);
    }

    for(int i = 0; i < n; i++){
        printf("%s", equipes[i].nome);
        equipes->pontos = 0;
        equipes->vitorias = 0;
        equipes->derrotas = 0;
        equipes->empates = 0;
        equipes->saldoGols = 0;
        equipes->golsPro = 0;
        equipes->golsCon = 0;
        printf("\n");
    }

    for (int i = 0; i < n*(n-1); i++){
        int golsMandante, golsVisitante;
        char equipeMandante[100], equipeVisitante[100];
        scanf("%s %d x %d %s", equipeMandante, &golsMandante, &golsVisitante, equipeVisitante);
        for(int i = 0; i < n; i++){
            if(equipes[i].nome == equipeMandante){
                equipeMandante
            }
            if (golsMandante > golsVisitante){
                equipes[i].nome
            } else if(golsVisitante > golsMandante){
        
            } else if (golsMandante == golsVisitante){
        
            }

        }
        
    
    }
}
