/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1042.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 10:30
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

/*
 * 
 */
int main() {

    int number[MAX], temp, i, j, original_number[MAX];

    for (i = 0; i < MAX; i++) {
        scanf("%d", &number[i]);
        original_number[i] = number[i];
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

    for (i = 0; i < MAX; i++) {
        printf("%d\n", number[i]);
    }

    printf("\n");

    for (i = 0; i < MAX; i++) {
        printf("%d\n", original_number[i]);
    }

    return 0;
}

