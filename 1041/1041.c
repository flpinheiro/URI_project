/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 18:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    double x, y;
    
    scanf("%lf %lf", &x, &y);
    
    if(x == 0 & y == 0){
        printf("Origem\n");
        return 0;
    }
    
    if (y == 0){
        printf("Eixo X\n");
        return 0;
    }
    
    if (x == 0){
        printf("Eixo Y\n");
        return 0;
    }
    
    if (y > 0){
        if(x > 0){
            printf("Q1\n"); // primeiro quadrante
        }else {
            printf("Q2\n"); // segundo quadrante
        }
    } else {
        if (x < 0 ){
            printf("Q3\n"); // terceiro quadrante
        } else{
            printf("Q4\n"); // quarta quadrante 
        }
    }
    
    return 0;
}

