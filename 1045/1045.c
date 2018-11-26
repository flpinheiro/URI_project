/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1045.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 11:28
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

/*
 * 
 */
int main() {

    double number[MAX], temp;
    int i, j;

    for (i = 0; i < MAX; i++) {
        scanf("%lf", &number[i]);
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

    if (number[2] >= number[1] + number[0]) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (number[2] * number[2] == number[1] * number[1] + number[0] * number[0]) {
            printf("TRIANGULO RETANGULO\n");
        } else if (number[2] * number[2] > number[1] * number[1] + number[0] * number[0]) {
            printf("TRIANGULO OBTUSANGULO\n");

        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }
        
        if (number[0] ==  number[1] && number[1] == number[2]){
            printf("TRIANGULO EQUILATERO\n");
        }else if(number[0] == number[1] || number[1] == number[2] || number[2] == number[0]){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}

