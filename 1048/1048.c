/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1048.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 15:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    float salario, novoSalario, aumento;
    int porcentagem;
    
    scanf("%f", &salario);
    
    if(salario > 0 && salario <= 400){
        porcentagem = 15;
    } else if(salario <= 800){
        porcentagem = 12;
    } else if(salario <= 1200){
        porcentagem = 10;
    } else if(salario <= 2000){
        porcentagem = 7;
    }else{
        porcentagem = 4;
    }
    
    aumento = salario * (float) porcentagem / (float) 100;
    
    novoSalario = salario + aumento;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novoSalario, aumento, porcentagem);

    return 0;
}

