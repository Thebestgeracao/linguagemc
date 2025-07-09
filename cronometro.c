#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int segundos, minutos, horas;
    segundos = 0;
    minutos = 0;
    horas = 0;
    printf(" %.2d:%.2d:%.2d \n", horas, minutos, segundos);
    while(1){
        system("clear");
        segundos++;
        usleep(500000);
       
        if(segundos == 60){
            segundos = 0;
            minutos++;
            printf("\a");
        }
        if(minutos == 60){
            minutos = 0;
            horas++;
        }
        printf(" %.2d:%.2d:%.2d \n ", horas, minutos, segundos);
        usleep(500000);
    }
    return 0;
}