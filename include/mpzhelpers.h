#include <stdio.h>
#include <stdbool.h>
#include <gmp.h>

void mpz_increment(mpz_t number) {
    mpz_add_ui(number, number, 1);
}

bool is_prime_naive(mpz_t number) {
    mpz_t i;
    mpz_init(i);
    mpz_set_ui(i, 2);
    while (mpz_cmp(number, i) > 0) {
        if (mpz_divisible_p(number, i)) {
            return false;
        }

        mpz_add_ui(i, i, 1);
    }
    return true;
}

bool is_prime(mpz_t number) {
    return is_prime_naive(number);
}