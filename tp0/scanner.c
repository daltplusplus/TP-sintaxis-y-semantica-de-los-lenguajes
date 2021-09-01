#include "scanner.h"

char c;
enum token leido;

void clase_token(){
    c = getchar();
    if(c== ','){
        leido = SEP;
    }
    else if(c == '\n'){
        leido = FDT;
    }
    else{
        leido = CAD;
    }
}

void get_token(){
    bool fueCad = false;

    c = getchar();
    ungetc(c, stdin);
    do{
        do{
            clase_token();
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
}