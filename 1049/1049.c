/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1049.c
 * Author: flpin
 *
 * Created on 8 de Agosto de 2018, 15:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

/*
 * 
 */
int main() {

    char coluna[MAX], tipo[MAX], alimentacao[MAX];

    scanf("%s", coluna);
    getchar();
    scanf("%s", tipo);
    getchar();
    scanf("%s", alimentacao);
    getchar();

    //    printf("%s %s %s\n", coluna, animal, alimentacao);

    if (!strcmp("vertebrado", coluna)) {/*compara as string e garante que sao iguais*/
        if (!strcmp("ave", tipo)) { /*se for ave*/
            if (!strcmp("carnivoro", alimentacao)) {
                printf("aguia\n");
            }
            if (!strcmp("onivoro", alimentacao)) {
                printf("pomba\n");
            }
        }
        if (!strcmp("mamifero", tipo)) {
            if (!strcmp("onivoro", alimentacao)) {
                printf("homem\n");
            }
            if (!strcmp("herbivoro", alimentacao)) {
                printf("vaca\n");
            }
        }
    }

    if (!strcmp("invertebrado", coluna)) {/*compara as string e garante que sao iguais*/
        if (!strcmp("inseto", tipo)) { /*se for ave*/
            if (!strcmp("hematofago", alimentacao)) {
                printf("pulga\n");
            }
            if (!strcmp("herbivoro", alimentacao)) {
                printf("lagarta\n");
            }
        }
        if (!strcmp("anelideo", tipo)) {
            if (!strcmp("hematofago", alimentacao)) {
                printf("sanguessuga\n");
            }
            if (!strcmp("onivoro", alimentacao)) {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}

