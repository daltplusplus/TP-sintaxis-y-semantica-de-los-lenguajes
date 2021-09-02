#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

int main(){
    printf("ingrese su texto.\n");
    bool fueCad = false;

    c = getchar();
    ungetc(c, stdin);
    do{
        do{
            leido = get_token();
            if(isspace(c)){
                fueCad = false;
            }
        }while(isspace(c) && c != '\n');

        switch (leido){
        case FDT:
            printf("\nfin");
            break; 
        case SEP:
            printf("\nseparador: ,");
            fueCad = false;
            break;
        case CAD:
            if(fueCad == false){
                printf("\ncadena: %c", c);
                fueCad = true;
            }     
            else{
                printf("%c",c);
            }       
            break; 
        }
    }while(c != '\n');
    return 0;
}         
