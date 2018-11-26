/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1071.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 20:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int ini, end, sum = 0, i, temp;

    scanf("%d %d", &ini, &end);

    if (ini > end) {
        temp = end;
        end = ini;
        ini = temp;
    }

    for (i = ini+1; i < end; i++) {
        if (i % 2) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
