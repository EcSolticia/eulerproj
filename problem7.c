#include "include/mpzhelpers.h"
#include <time.h>

int main() {

    clock_t begin = clock();

    mpz_t counter;
    mpz_init(counter);
    mpz_set_ui(counter, 5);

    mpz_t prime_counter;
    mpz_init(prime_counter);
    mpz_set_ui(prime_counter, 3);

    mpz_t last_prime;
    mpz_init(last_prime);
    mpz_set_ui(last_prime, 3);

    while (mpz_cmp_ui(prime_counter, 10002) < 0) {

        if (is_prime(counter)) {
            mpz_increment(prime_counter);
            mpz_set(last_prime, counter);
        }

        mpz_double_increment(counter);
    } 

    gmp_printf("The 10001th prime is %Zd\n", last_prime);

    mpz_clear(counter);
    mpz_clear(prime_counter);
    mpz_clear(last_prime);
    
    clock_t end = clock();
    double time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
    printf("\n%f\n", time_spent);
    return 0;
}