/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1067.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 18:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int number, i = 0; 
    
    scanf("%d", &number);
    
    while ( i <= number){
        if(i%2){
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}

