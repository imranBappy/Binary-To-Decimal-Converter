// Binary To Deciaml Converter in C
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    char *binary = NULL;
    size_t n = 0;
    printf("Enter binary number : 011... ");
    getline(&binary, &n, stdin);
    double decimal = 0;
    int i = strlen(binary)-2;
    while (i > -1){
        if('1' == binary[(strlen(binary)-2) - i]) decimal += pow(2, i);
        i--;
    }
    printf("%g", decimal);
    return 0;
}