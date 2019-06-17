#include <stdio.h>
#include "is_prime.h"

int main(void){
    int largest = 0;
    long number = 600851475143;

    for(long i = 2; i > number / 2; i++){
        if(is_prime(i)){
            largest = i;
        }
    }
    printf("%d", largest);
}
