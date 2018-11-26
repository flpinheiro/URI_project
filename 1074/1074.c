/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1074.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 18:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int qtd, number, i;

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++) {
        scanf("%d", &number);
        if (!number) {
            printf("NULL");
        } else {
            if (number % 2) {
                printf("ODD");
            } else {
                printf("EVEN");
            }
            
            if(number > 0){
                printf(" POSITIVE");
            }else{
                printf(" NEGATIVE");
            }
        }

        printf("\n");
    }
    return 0;
}

