/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1070.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 17:55
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 6

/*
 * 
 */
int main(int argc, char** argv) {

    int i = 0, number;

    scanf("%d", &number);

    while (i < MAX) {
        if (number % 2) { //imprime impar
            printf("%d\n", number);
            i++;
        }
        
        number++;
        
    }
    return 0;
}

