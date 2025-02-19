#include "include/mpzhelpers.h"

int main() {

    mpz_t counter;
    mpz_init(counter);
    mpz_set_ui(counter, 1);

    mpz_t prime_counter;
    mpz_init(prime_counter);
    mpz_set_ui(counter, 1);

    mpz_t last_prime;
    mpz_init(last_prime);
    mpz_set_ui(last_prime, 1);

    while (mpz_cmp_ui(prime_counter, 10002) < 0) {

        if (is_prime(counter)) {
            mpz_increment(prime_counter);
            mpz_set(last_prime, counter);
        }

        mpz_increment(counter);
    } 

    gmp_printf("The 10001th prime is %Zd\n", last_prime);

    return 0;
}