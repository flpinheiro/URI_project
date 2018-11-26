/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1072.c
 * Author: flpin
 *
 * Created on 20 de Agosto de 2018, 13:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int N;
    
    scanf("%d", &N);
    
    int number, i, in = 0, out = 0;
    
    for (i = 0 ;  i < N ; i++){
        scanf("%d", &number);
        
        if(number >= 10 && number <= 20){
            ++in;
        }else{
            ++out;
        }
    }
    printf("%d in\n%d out\n", in , out);

    return 0;
}
