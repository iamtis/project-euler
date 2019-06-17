#include <stdio.h>

int main(void)
{
    int multiples = 0;

    for(int i = 0; i < 1000; i++){
        if(i % 3 == 0){
            multiples += i;
        }
        else if(i % 5 == 0){
            multiples += i;
        }
    }
    printf("%d", multiples);
    return 0;
}