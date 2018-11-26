/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 25 de Julho de 2018, 20:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    char name[100];
    float salary;
    float total;
    double final;
    
    scanf("%s", name);
//    getchar();
    scanf("%f", &salary);
    scanf("%f", &total);
    
    final = (double) salary + 0.15 * (double) total;
    
    printf("TOTAL = R$ %.2lf\n", final);
//    printf("%s", name);
    
    return 0;
}

