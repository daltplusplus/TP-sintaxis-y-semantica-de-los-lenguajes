#include "scanner.h"

char c;
token leido;

token get_token(){
    c = getchar();
    if(c== ','){
        return SEP;
    }
    else if(c == '\n'){
        return FDT;
    }
    else{
        return CAD;
    }
}