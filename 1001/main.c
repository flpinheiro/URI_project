/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 12 de Junho de 2018, 12:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {

    double a, b, media;
    scanf("%lf", &a);
    scanf("%lf", &b);
    media = (3.5 * a + 7.5 * b) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", media);
    return 0;
}

