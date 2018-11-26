/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1046.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 14:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int t1, t2, tt;

    scanf("%d %d", &t1, &t2);
    tt = t2 - t1;

    if (tt <= 0) {
        tt += 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", tt);

    return 0;
}

