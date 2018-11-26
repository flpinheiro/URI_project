/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1064.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 18:01
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 6

/*
 * 
 */
int main(int argc, char** argv) {

    float number[MAX], mediaPositivos = 0, mediaNegativos = 0;
    ;
    int i, positivo = 0, negativo = 0, nulo = 0;

    for (i = 0; i < MAX; i++) {
        scanf("%f", &number[i]);


        if (number[i] > 0) {
            positivo++;
            mediaPositivos += number[i];
        }
        if (number[i] < 0) {
            negativo++;
            mediaNegativos += number[i];
        } 
        if (!number[i]) {
            nulo++;
        }
    }

    printf("%d valores positivos\n", positivo);
    if (positivo) {
        printf("%.1f\n", mediaPositivos / positivo);
    }
    //    printf("%d valores negativos\n", negativo);
    //    printf("%d valores nulo\n", nulo);

    return 0;
}

