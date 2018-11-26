/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 11:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int notas, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    scanf("%d", &notas);
    printf("%d\n", notas);

    notas100 = notas / 100;
    notas = notas - notas100 * 100;

    printf("%d nota(s) de R$ 100,00\n", notas100);

    notas50 = notas / 50;
    notas = notas - notas50 * 50;

    printf("%d nota(s) de R$ 50,00\n", notas50);

    notas20 = notas / 20;
    notas = notas - notas20 * 20;

    printf("%d nota(s) de R$ 20,00\n", notas20);

    notas10 = notas / 10;
    notas = notas - notas10 * 10;

    printf("%d nota(s) de R$ 10,00\n", notas10);

    notas5 = notas / 5;
    notas = notas - notas5 * 5;

    printf("%d nota(s) de R$ 5,00\n", notas5);

    notas2 = notas / 2;
    notas = notas - notas2 * 2;
    
    printf("%d nota(s) de R$ 2,00\n", notas2);

    notas1 = notas;

    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}

