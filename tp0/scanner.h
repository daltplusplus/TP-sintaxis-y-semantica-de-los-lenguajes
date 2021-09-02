#ifndef FUNCIONESH
#define FUNCIONESH
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

typedef enum {
    FDT ,
    SEP ,
    CAD
} token;

char c;
token leido;

token get_token();

#endif