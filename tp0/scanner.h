#ifndef FUNCIONESH
#define FUNCIONESH
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

enum token {
    FDT ,
    SEP ,
    CAD
};

char c;
enum token leido;

void clase_token();
void get_token();

#endif