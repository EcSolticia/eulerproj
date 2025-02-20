#include <iostream>
#include <cmath>
#include <vector>
#include <time.h>

#define PTYPE unsigned int

// 2 need not be included here since  is_prime pre-emptively filters out multiples of tow
std::vector<PTYPE> primes = {3};

bool is_prime(PTYPE number) {

    if (number <= 2) {return true;}
    //if (number % 2 == 0) {return false;}
    if (number == 3) {return true;}

    size_t l = primes.size();
    size_t actual_l = sqrt(number) + 1;
    for (size_t i = 0; i < l; ++i) {
        size_t j = primes[i];
        if (j > actual_l) {
            break;
        }
        if (number % j == 0) {
            return false;
        }
    }
    primes.push_back(number);
    return true;
}

int main() {

    clock_t start = clock();

    PTYPE counter = 5;

    while(primes.size() + 1 < 10002) {

        is_prime(counter);

        counter = counter + 2;
    }

    std::cout << primes[9999] << std::endl;

    clock_t end = clock();

    double duration = (double)(end - start)/CLOCKS_PER_SEC;

    std::cout << "Time taken: " << duration << std::endl;

    return 0;
}