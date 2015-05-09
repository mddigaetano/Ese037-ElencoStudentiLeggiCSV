#include <stdio.h>
#include <stdlib.h>

#define MAX_STRLEN 30
#define FNAME "elenco.csv"

struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    int i=0,letti;
    FILE *pfile;
    studente alunno;
    
    if(pfile=fopen(FNAME,"r")){
        
        fscanf(pfile,"%[^;];%[^;];%[^;];%[^\n]\n",alunno.nome,alunno.nome,alunno.nome,alunno.nome);
        
        while(!(feof(pfile))){
            fscanf(pfile,"%[^;];%[^;];%d;%[^\n]\n",alunno.nome,alunno.cognome,&alunno.eta,alunno.classe);
            
            printf("Studente %d\n", i+1);
            printf("Nome: %s\n",alunno.nome);
            printf("Cogome: %s\n",alunno.cognome);
            printf("Eta': %d\n",alunno.eta);
            printf("Classe: %s\n\n",alunno.classe);
            
            i++;
        }
        
    }
    else
        exit(1);

    return (EXIT_SUCCESS);
}