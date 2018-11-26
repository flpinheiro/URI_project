/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 10:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int x;
    float y;
    
    scanf("%d", &x);
    scanf("%f", &y);
    
    printf("%.3f km/l\n", (float) x / y);

    return 0;
}

