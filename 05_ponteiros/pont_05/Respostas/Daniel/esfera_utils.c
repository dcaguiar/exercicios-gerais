#include "esfera_utils.h"
#include <math.h>
#include <stdio.h>

void CalculaVolume (float R, float *volume){
    *volume = ((4*PI*pow(R,3))/3);
}

void CalculaArea (float R, float *area){
    *area = (4*PI*pow(R,2));
}