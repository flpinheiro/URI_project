/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   1052.c
 * Author: flpin
 *
 * Created on 10 de Agosto de 2018, 17:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int month;
    char* strMonth;
    
    scanf("%d", &month);
    
    switch (month){
    
        case 1:
            strMonth = "January\n";
            break;
        case 2:
            strMonth = "February\n";
            break;
        case 3:
            strMonth = "March\n";
            break;
        case 4:
            strMonth = "April\n";
            break;
        case 5:
            strMonth = "May\n";
            break;
        case 6:
            strMonth = "June\n";
            break;
        case 7:
            strMonth = "July\n";
            break;
        case 8:
            strMonth = "August\n";
            break;
        case 9:
            strMonth = "September\n";
            break;
        case 10:
            strMonth = "October\n";
            break;
        case 11:
            strMonth = "November\n";
            break;
        case 12:
            strMonth = "December\n";
            break;
        default:
            strMonth = "\n";
            break;
    }
    
    printf(strMonth);

    return 0;
}

