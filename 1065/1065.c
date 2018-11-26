/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1065.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 20:48
 */


#include <stdio.h>
#include <stdlib.h>

#define MAX 5

/*
 * 
 */
int main(int argc, char** argv) {

    int number[MAX];
    int i, positivo = 0, negativo = 0, nulo = 0, par = 0, impar = 0;

    for (i = 0; i < MAX; i++) {
        scanf("%d", &number[i]);


        if (number[i] > 0) {
            positivo++;
        }
        if (number[i] < 0) {
            negativo++;
        }
        if (!number[i]) {
            nulo++;
            }
        if(!(number[i]%2)){
            par++;
        }
    }

//    printf("%d valores positivos\n", positivo);
//    printf("%d valores negativos\n", negativo);
//    printf("%d valores nulo\n", nulo);
    printf("%d valores pares\n",par);
    
    return 0;
}

