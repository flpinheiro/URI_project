/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1043.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 10:54
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

/*
 * 
 */
int main() {

    double number[MAX], temp, or_number[MAX];
    int i, j;

    for (i = 0; i < MAX; i++) {
        scanf("%lf", &number[i]);
        or_number[i] = number[i];
    }

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            if (number[i] < number[j]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    if (number[2] < number[1] + number[0]) {
        printf("Perimetro = %.1lf\n", number[0] + number[1] + number[2]);
    } else {
        printf("Area = %.1lf\n", (or_number[0] + or_number[1]) * or_number[2] / 2 );
    }
    return 0;
}

