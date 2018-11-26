/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 16:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    float x;

    scanf("%f", &x);
    
    if (x < 0) {
        printf("Fora de intervalo\n");
    } else if (x <= 25) {
        printf("Intervalo [0,25]\n");
    } else if (x <= 50) {
        printf("Intervalo (25,50]\n");
    } else if (x <= 75) {
        printf("Intervalo (50,75]\n");
    } else if (x <= 100) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}

