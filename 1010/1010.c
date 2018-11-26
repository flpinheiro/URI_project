/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 09:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int codA, codB, quantA, quantB;
    float valA, valB, totalA, totalB, total;
    
    scanf("%d %d %f", &codA, &quantA, &valA);
    scanf("%d %d %f", &codB, &quantB, &valB);
    
    totalA = quantA * valA;
    totalB = quantB * valB;
    
    total = totalA + totalB;
    
    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}

