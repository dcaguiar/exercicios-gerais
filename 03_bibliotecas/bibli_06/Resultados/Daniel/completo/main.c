#include "temperature_conversor.h"
#include <stdio.h>

int main(){
    float temperature, result;
    char scale1, scale2;

    scanf("%f %c %c", &temperature, &scale1, &scale2);

    if(scale1 == 'c'){
        if(scale2 == 'f'){
            result = convert_celsius_to_fahrenheit(temperature);
        }
        else if(scale2 == 'k'){
            result = convert_celsius_to_kelvin(temperature);
        }
    }
    else if(scale1 == 'f'){
        if(scale2 == 'c'){
            result = convert_fahrenheit_to_celsius(temperature);
        }
        else if(scale2 == 'k'){
            result = convert_fahrenheit_to_kelvin(temperature);
        }
    }
    else if(scale1 == 'k'){
        if(scale2 == 'c'){
            result = convert_kelvin_to_celsius(temperature);
        }
        else if(scale2 == 'f'){
            result =   convert_kelvin_to_fahrenheit(temperature);
        }
    }

    printf("Temperature: %.2f", result);
    switch(scale2){
        case 'c':{
            printf("Cº");
            break;
        }
        case 'f':{
            printf("Fº");
            break;
        }
        case 'k':{
            printf("K");
            break;
        }
    }
    return 0;
}