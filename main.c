
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define DIM 100

/*
 *
 *      Cifraio di Vigenere
 *      Created by: Greta Brugnatti Maria
 *      Class: 3AII
 *
 *
*/

int main (){
    int scelta=1;
    char messaggioCod[DIM];
    char messaggioDec[DIM];
    char verme[]="gatto";
    messaggioDec[0]= 'a';

    do{
        printf("Case: ");
        scanf("%d", &scelta);

        switch(scelta){

            case 1: //CODIFICA

                fflush(stdin);
                printf("Inserire il codice da codificare: ");
                fgets(messaggioDec, DIM, stdin);
                eliminaACapo(messaggioDec);


                fflush(stdin);
                printf("Inserire il verme: ");
                fgets(verme, 100, stdin);
                eliminaACapo(verme);

                printf("%s\n", messaggioDec);

                break;




            case 2: //DECODIFICA

                fflush(stdin);
                fgets(messaggioCod, 500, stdin);
                eliminaACapo(messaggioCod);
                break;
        }

    } while (scelta!=0);
}

char toLower(char c){
    if(c >= 'A' && c <= 'Z'){
        c = c -'A' + 'a';
    }
    return c;
}

void eliminaACapo(char str[]){

    int i;

    for(i=0; str[i]!='\n'; i++){

    }

    str[i]='\0';
}
