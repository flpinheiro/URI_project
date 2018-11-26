/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1047.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 14:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int h1, h2, min1,  min2, t1, t2 , tt, h, min;
    
    scanf("%d %d %d %d", &h1, &min1, &h2, &min2);
    
    t1 = h1 * 60 + min1;
    t2 = h2 * 60 + min2;
    
    tt = t2 - t1;
    
    if(tt <= 0){
        tt += 24* 60;
    }
    
    h = tt /60;
    min = tt % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, min);

    return 0;
}

