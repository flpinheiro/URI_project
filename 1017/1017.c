/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 10:53
 */

#include <stdio.h>
#include <stdlib.h>

#define spent 12

/*
 * 
 */
int main() {

    int time, speed;

    double volume;

    scanf("%d", &time);
    scanf("%d", &speed);
    
    volume = (double) speed * (double) time / (double) spent;

    printf("%.3lf\n", volume);

    return 0;
}

