/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 10:08
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

/*
 * 
 */
int main() {

    double A, B, C, areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;

    scanf("%lf %lf %lf", &A, &B, &C);

    areaTriangulo = A * C / (double) 2;
    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    
    areaCirculo = PI * C * C;
    printf("CIRCULO: %.3lf\n", areaCirculo);
    
    areaTrapezio = (A + B) * C / (double) 2;
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    
    areaQuadrado = B * B;
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    
    areaRetangulo = A * B;
    printf("RETANGULO: %.3lf\n", areaRetangulo);
    
    return 0;
}

