#include "esfera_utils.h"
#include <math.h>
#include <stdio.h>

float calcula_volume (float R){
    return ((4*PI*pow(R,3))/3);
}

float calcula_area (float R){
    return (4*PI*pow(R,2));
}