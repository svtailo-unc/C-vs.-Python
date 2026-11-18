#include "int_vector.h"
#include <stdio.h>

#define LIMIT 1000000
#define MAX_PRIMES LIMIT/2

int is_prime(int n, Vector* v){
    int curr = 0;

    for(int p = 0; p < vector_size(v); p++){
        if (!get(v, p, &curr)) {          
            return -1;                    
        }
        if(n%curr == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    Vector primes;
    if (!init_vector(&primes)) {
        fprintf(stderr, "Could not initialize vector\n");
        return 1;
    }

    for (int i = 2; i < LIMIT; i++){
        if(is_prime(i, &primes) == 1) {
            printf("%d \n", i);           


            if (!append(&primes, i)) {
                free_vector(&primes);
                return 1;
            }
        }

    }
    free_vector(&primes);                 
}