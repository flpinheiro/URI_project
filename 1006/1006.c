/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 25 de Julho de 2018, 20:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float a, b, c, media;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    media = (2*a + 3*b + 5*c)/(2+3+5);
    
    printf("MEDIA = %.1f\n", media);

    return 0;
}

