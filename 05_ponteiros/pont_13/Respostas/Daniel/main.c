#include "rolagem.h"
#include <stdio.h>

int main(){
    int quant_msg;
    char msg[NUM_MAX_MSGS][TAM_MAX_MSG];
    scanf("%d\n", &quant_msg);
    for(int i = 0; i < quant_msg; i++){
        scanf("%s", msg[i]);
    }
    
}