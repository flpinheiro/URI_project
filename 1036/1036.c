/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 16:03
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main() {

    double a, b, c, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    printf("R1 = %.5lf\n", (-b + sqrt(delta))/ 2 / a);
    printf("R2 = %.5lf\n", (-b - sqrt(delta))/ 2 / a);

    return 0;
}

