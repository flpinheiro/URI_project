/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 10:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b){
        if(a > c){/* a eh o maior numero*/
            printf("%d eh o maior\n", a);
            return 0;
        }else{/*c eh o maior numero*/
            printf("%d eh o maior\n", c);
            return 0;
        }
    }else{
        if(b > c){/*b eh o maior numero*/
            printf("%d eh o maior\n", b);
            return 0;
        }else{
            printf("%d eh o maior\n", c);
            return 0;
        }
    }

    return 0;
}

