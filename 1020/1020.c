/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 11:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    unsigned long int time, year, mouth, day;

    scanf("%lu", &time);

    year = time / 365;
    time -= year * 365;

    mouth = time / 30;
    time -= mouth * 30;

    day = time;

    printf("%lu ano(s)\n", year);
    printf("%lu mes(es)\n", mouth);
    printf("%lu dia(s)\n", day);

    return 0;
}
