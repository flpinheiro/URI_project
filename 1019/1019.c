/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 11:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    int time, hour, min, seg;
    
    scanf("%d", &time);
    
    hour = time / 60 / 60;
    time = time - hour * 60 * 60;
    
    min = time / 60;
    time = time - min * 60;
    
    seg = time;
    
    printf("%d:%d:%d\n", hour, min, seg);

    return 0;
}

