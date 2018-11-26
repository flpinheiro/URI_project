/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 16:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int item, qty;
    float valor;

    scanf("%d %d", &item, &qty);

    switch (item) {

        case 1:
            valor = 4 * (float) qty;
            break;

        case 2:
            valor = 4.5 * qty;
            break;

        case 3:
            valor = 5 * qty;
            break;

        case 4:
            valor = 2 * qty;
            break;

        case 5:
            valor = 1.5 * qty;
            break;
    }

    printf("Total: R$ %.2f\n", valor);

    return 0;
}

