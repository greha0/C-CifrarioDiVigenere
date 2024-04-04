
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

#define DIM 200

/*
 *
 *      Cifraio di Vigenere
 *      Created by: Greta Brugnatti Maria
 *      Class: 3AII
 *
 *
*/

int main() {
    int scelta = 0;
    char messaggioCod[DIM];
    char messaggioDec[DIM];
    int diff, len;
    int i,v=0;
    char verme[100];

    do {
        printf("Case: ");
        fflush(stdout);

        scanf("%d", &scelta);
        fflush(stdin);


        switch (scelta) {

            case 1: //CODIFICA


                //CHIEDO I DATI
                printf("Inserire il codice da codificare: ");
                fgets(messaggioDec, DIM, stdin);
                eliminaACapo(messaggioDec);
                for (i = 0; messaggioDec[i] != '\0'; i++) {
                    messaggioDec[i] = toLower(messaggioDec[i]);
                }

                /*printf("%s\n", messaggioDec);
                fflush(stdout);*/

                printf("Inserire il verme: ");
                fgets(verme, 100, stdin);
                eliminaACapo(verme);
                for (i = 0; verme[i] != '\0'; i++) {
                    verme[i] = toLower(verme[i]);
                }

                /*for(int i=0; verme[i]!='\0'; i++){
                    printf("%c\n", verme[i]);
                    fflush(stdout);
                }*/

                /*printf("%s\n", verme);
                fflush(stdout);*/

                // CODIFICA DEL MESSAGGIO

                len=strlen(verme);
               for(i=0; messaggioDec[i]!='\0'; i++){

                   if(v>len) {
                       v = 0;
                   }
                   diff = verme[v] - 'a';

                       messaggioCod[i] = shift(messaggioDec[i], diff);
                       v++;
               }


                messaggioCod[i]='\0';
                printf("%s\n", messaggioCod);
                fflush(stdout);
                break;


            case 2: //DECODIFICA


                printf("Inserire il codice da decodificare: ");
                fgets(messaggioCod, DIM, stdin);
                eliminaACapo(messaggioCod);


                printf("Inserire il verme: ");
                fgets(verme, 100, stdin);
                eliminaACapo(verme);
                break;
        }

    } while (scelta != 0);
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        c = c - 'A' + 'a';
    }
    return c;
}

void eliminaACapo(char str[]) {

    int i;

    for (i = 0; str[i] != '\n'; i++) {

    }

    str[i] = '\0';
}

char shift(char lettera, int offset) {

        lettera = lettera + offset;

      if (lettera > 122) {
            lettera = lettera - 26;
        }

    return lettera;
}
