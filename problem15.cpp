#include <iostream>
#include <array>
#include <vector>

/*
Each path is represented by an std::vector<int> object. Since each move can be either to the right or downward, let
1 at an index represent rightward traversal, and -1 otherwise. For a valid path, the sum of all elements of the vector
would be 0.

The goal would then be to find the number of all possible distinct vectors of that kind.

On an n * n lattice, the size of each vector will be 2n: move right n times, down n times, in any order.
Thus, the resulting solution number is simply the number of possible ways to organize n 1s and n -1s in a list,
array, or vector.

So the solution is 2n choose n for any n.
*/
/*
long long int factorial(long long int n) {
    if (n <= 0) {
        std::cout << "Factorial of " << n << " found to be 0" << std::endl;
        return 0;
    }
    if (n == 1) {
        std::cout << "Factorial of " << n << " found to be 1" << std::endl;
        return 1;
    }
    long long int res = n * factorial(n - 1);
    std::cout << "Factorial of " << n << " found to be " << res << std::endl;
    return res;
}

long long int routes(long long int n) {
    return factorial(2 * n)/(factorial(n) * factorial(n));
}

int main() {
    std::cout << routes(20) << std::endl;
    return 0;
}
    */ 
   //The above has been commented due to insufficient integer precision. I have already found the solution mentally and
   // I will look for a more efficient algorithm to have the computer do it later.