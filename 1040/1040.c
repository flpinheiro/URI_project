/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: flpin
 *
 * Created on 26 de Julho de 2018, 17:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    float n1, n2, n3, n4, media, exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (2 * n1 + 3 * n2 + 4 * n3 + 1 * n4) / (2 + 3 + 4 + 1);

    if (media >= 7) {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        return 0;
    }
    if (media < 5) {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
        return 0;
    }

    scanf("%f", &exame);

    printf("Media: %.1f\n", media);

    printf("Aluno em exame.\n");

    printf("Nota do exame: %.1f\n", exame);

    media = (media + exame) / 2;

    if (media < 5) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno aprovado.\n");
    }

    printf("Media final: %.1f\n", media);

    return 0;
}

