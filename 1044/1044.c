/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1044.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 11:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int A, B;
    
    scanf("%d %d", &A, &B);
    
    if(A %B == 0 || B% A == 0){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos\n");
    }

    return 0;
}

