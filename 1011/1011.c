/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 09:55
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
/*
 * 
 */
int main() {
    
    double r, volume;
    
    scanf("%lf", &r);
    
    volume = (double) 4 / (double) 3 * PI * r * r * r;
    
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}

