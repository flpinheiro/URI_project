/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 14:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    double money, moedas_float;
    int notas100, notas50, notas20, notas10, notas5, notas2, 
            moedas100, moedas50, moedas25, moedas10, moedas5, moedas1, money_int, moedas;
    
    scanf("%lf", &money);
    
    printf("NOTAS:\n");
    
    money_int =  (int) money;
    moedas = ( money - money_int) * 100;
//    moedas = 100 * moedas_float;
    
//    printf("%d %d\n", money_int, moedas);
    
    notas100 = money_int / 100;
    money_int -= 100 * notas100;
    
    printf("%d nota(s) de R$ 100.00\n", notas100);
    
    notas50 = money_int / 50;
    money_int -= 50 * notas50;
    
    printf("%d nota(s) de R$ 50.00\n", notas50);
    
    notas20 = money_int / 20;
    money_int -= 20 * notas20;
    
    printf("%d nota(s) de R$ 20.00\n", notas20);
    
    notas10 = money_int / 10;
    money_int -= 10 * notas10;
    
    printf("%d nota(s) de R$ 10.00\n", notas10);
    
    notas5 = money_int / 5;
    money_int -= 5 * notas5;
    
    printf("%d nota(s) de R$ 5.00\n", notas5);
    
    notas2 = money_int / 2;
    money_int -= 2 * notas2;
    
    printf("%d nota(s) de R$ 2.00\n", notas2);
    
    printf("MOEDAS:\n");
    
    moedas += money_int*100;
    
    moedas100 = moedas / 100;
    moedas -= 100 * moedas100;
    
    printf("%d moeda(s) de R$ 1.00\n", moedas100);
    
    moedas50 = moedas / 50;
    moedas -= 50 * moedas50;
    
    printf("%d moeda(s) de R$ 0.50\n", moedas50);
    
    moedas25 = moedas / 25;
    moedas -= 25 * moedas25;
    
    printf("%d moeda(s) de R$ 0.25\n", moedas25);
    
    moedas10 = moedas / 10;
    moedas -= 10 * moedas10;
    
    printf("%d moeda(s) de R$ 0.10\n", moedas10);
    
    moedas5 = moedas / 5;
    moedas -= 5 * moedas5;
    
    printf("%d moeda(s) de R$ 0.05\n", moedas5);
    
    moedas1 = moedas / 1;
    moedas -= 1 * moedas1;
    
    printf("%d moeda(s) de R$ 0.01\n", moedas1);

    return 0;
}

