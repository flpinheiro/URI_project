/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1051.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 17:25
 */

#include <stdio.h>
#include <stdlib.h>
#define imposto1 0.08
#define imposto2 0.18
#define imposto3 0.28
#define salario_imposto1 2000
#define salario_imposto2 3000
#define salario_imposto3 4500

/*
 * 
 */
int main() {

    double salario, imposto = 0;

    scanf("%lf", &salario);

    if (salario <= salario_imposto1) {
        printf("Isento\n");
        return 0 ;
    } else if (salario <= salario_imposto2) {
        
        imposto = (salario - salario_imposto1) * imposto1;
        
    } else if (salario <= salario_imposto3) {
        
        imposto = (salario_imposto2 - salario_imposto1) * imposto1 
                + (salario - salario_imposto2) * imposto2;
        
    } else {
        
        imposto = (salario_imposto2 - salario_imposto1) * imposto1 
                + (salario_imposto3 - salario_imposto2) * imposto2 
                + (salario - salario_imposto3) * imposto3;
        
    }
    
    printf("R$ %.2lf\n", imposto);
    
    return 0;
}

