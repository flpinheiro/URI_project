/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1059.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 17:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i;
    
    for(i = 1; i< 101; i++){
        if(!(i%2)){
            printf("%d\n", i);
        }
    }

    return 0;
}

