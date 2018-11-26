/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1061.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 19:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int day1, day2, h1, h2, min1, min2, s1, s2, t1, t2, day, h, min, s, t;
    
    scanf("Dia %d", &day1);
    getchar();
    scanf("%d : %d : %d", &h1, &min1, &s1);
    getchar();
    scanf("Dia %d", &day2);
    getchar();
    scanf("%d : %d : %d", &h2, &min2, &s2);
    getchar();
    
    t1 = s1 + min1 * 60 + h1 * 60 * 60 + day1 * 60 * 60 * 24;
    t2 = s2 + min2 * 60 + h2 * 60 * 60 + day2 * 60 * 60 * 24;
    t = t2 - t1;
    
    day = t / 24/ 60 / 60;
    t -= day * 24 * 60 * 60;
    h = t / 60 / 60;
    t -= h * 60 * 60;
    min = t / 60;
    t -= min * 60;
    s = t;
    
    printf("%d dia(s)\n", day);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", s);
    
    return 0;
}

