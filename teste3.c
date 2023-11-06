#include <stdio.h>
#include <string.h>
#include <ctype.h>


int validarPlaca(char placa[]) {
    if(strlen(placa) == 8) {
        if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && placa[3] == '-' &&
           isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])) {
            return 1;
        }
    } else if(strlen(placa) == 7) {
        if(isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) && isdigit(placa[3]) &&
           isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])) {
            return 1;
        }
    }
    return 0;
}


int validarDiaSemana(char dia[]) {
    if(strcmp(dia, "SEGUNDA-FEIRA") == 0 || strcmp(dia, "TERCA-FEIRA") == 0 || strcmp(dia, "QUARTA-FEIRA") == 0 ||
       strcmp(dia, "QUINTA-FEIRA") == 0 || strcmp(dia, "SEXTA-FEIRA") == 0 || strcmp(dia, "SABADO") == 0 ||
       strcmp(dia, "DOMINGO") == 0) {
        return 1;
    }
    return 0;
}


int main() {
    char placa[9];
    char diaSemana[20];

    
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);
    printf("Digite o dia da semana: ");
    scanf("%s", diaSemana);

   int placaC = 0, diaC=0;
    
    if (validarPlaca(placa))
    {
        placaC++;
    }
    if (validarDiaSemana(diaSemana)){
        diaC++;
    }
    

    

    int placaE = 0, diaE = 0;
    
    if (!validarPlaca(placa)) {
        placaE++;
        
    }

    if (!validarDiaSemana(diaSemana)) {
        diaE++;
    }

    if (placaE == 1 && diaC == 1){
        printf("Placa invalida");
    }

    else if (placaC == 1 && diaE == 1){
        printf("Dia da semana invalido");
    }
    
    else if (placaE == 1 && diaE ==1)
    {
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
    }
    
    else{

    
   
    int ultimoDigito = placa[strlen(placa) - 1] - '0';

    if ((strcmp(diaSemana, "SABADO") == 0)){
        printf("Nao ha proibicao no fim de semana");
    } else if ((strcmp(diaSemana, "DOMINGO") == 0)){
        printf("Nao ha proibicao no fim de semana");
    } 
    
    
    int seg = 0, ter = 0, qua= 0, qui = 0, sex = 0, sab = 0, dom = 0;

   
   
    if (strcmp(diaSemana, "SEGUNDA-FEIRA") == 0)
    {
        seg++;
    } else if (strcmp(diaSemana, "TERCA-FEIRA") == 0)
    {
        ter++;
    } else if (strcmp(diaSemana, "QUARTA-FEIRA") == 0)
    {
        qua++;
    } else if (strcmp(diaSemana, "QUINTA-FEIRA") == 0)
    {
        qui++;
    } else if (strcmp(diaSemana, "SEXTA-FEIRA") == 0)
    {
        sex++;
    } else if (strcmp(diaSemana, "SABADO") == 0)
    {
        sab++;
    } else if (strcmp(diaSemana, "DOMINGO") == 0)
    {
        dom++;
    } else{printf("Dia da semana invalido");}
    
    if (seg == 1 && (ultimoDigito == 0 || ultimoDigito == 1))
    {
        printf("%s nao pode circular segunda-feira\n", placa);
    } else if (seg == 1 && (ultimoDigito != 0 || ultimoDigito != 1))
    {
        printf("%s pode circular segunda-feira\n", placa);
    } else if (ter == 1 && (ultimoDigito == 2 || ultimoDigito == 3))
    {
        printf("%s nao pode circular terca-feira\n", placa);
    } else if (ter == 1 && (ultimoDigito != 2 || ultimoDigito != 3))
    {
        printf("%s pode circular terca-feira\n", placa);
    } else if (qua == 1 && (ultimoDigito == 3 || ultimoDigito == 4))
    {
        printf("%s nao pode circular quarta-feira\n", placa);
    } else if (qua == 1 && (ultimoDigito != 3 || ultimoDigito != 4))
    {
        printf("%s pode circular quarta-feira\n", placa);
    } else if (qui == 1 && (ultimoDigito == 5 || ultimoDigito == 6))
    {
        printf("%s nao pode circular quinta-feira\n", placa);
    } else if (qui == 1 && (ultimoDigito != 5 || ultimoDigito != 6))
    {
        printf("%s pode circular quinta-feira\n", placa);
    } else if (sex == 1 && (ultimoDigito == 7 || ultimoDigito == 8))
    {
        printf("%s nao pode circular sexta-feira\n", placa);
    } else if (sex == 1 && (ultimoDigito != 7 || ultimoDigito != 8))
    {
        printf("%s pode circular sexta-feira\n", placa);
    } 
    }
    return 0;
}
