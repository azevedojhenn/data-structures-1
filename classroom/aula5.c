#include "aula5.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct _ponto{
    float x, y;
};

Pto *pto_create(float x, float y) {
    Pto* new = (Pto*) malloc(sizeof(Pto));
    if(new != NULL){
        new->x = x;
        new->y = y;
    }
    return new;
}

void pto_print(Pto* p){
    if(p!=NULL)
        printf("(%.2f,%.2f)\n", p->x, p->y);
}

void pto_destroy(Pto* p){
    if(p!=NULL)
        free(p);
}

void pto_getx(Pto* p, float* x){
    if(p!=NULL)
        *x = p->x;
}

void pto_gety(Pto* p, float* y){
    if(p!=NULL)
        *y = p->y;
}

void pto_setx(Pto* p, float x){
    if(p!=NULL)
        p->x = x;
}

void pto_sety(Pto* p, float y){
    if(p!=NULL)
        p->y = y;
}

float pto_dist(Pto* p1, Pto* p2){
    if(p1!=NULL && p2!=NULL)
        return sqrt(pow(p1->x - p2->x, 2) + pow(p1->y - p2->y, 2));
    return -1;
}
