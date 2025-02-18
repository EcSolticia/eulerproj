#include <iostream>

/*
Manual solution
---------------

Let the solution be Y. The natural number Y is divisible by all natural numbers 1 through 20.
This means that Y is divisible by all prime numbers 1 through 20, and so 
	Y = X * p
	where X = 1 * 2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 (the product of the said primes),
	and p is some non-zero natural.

Now, note that
	4 = 2^2 (Op1)
	6 = 2*3 <-
	8 = 2^3 (Op2)
	9 = 3^2 (Op3)
	10 = 2*5 <-
	12 = 2*6 (Op1: 4 * 3 = 12)
	14 = 2*7 <-
	15 = 3*5 <-
	16 = 2^4 (Op4)
	18 = 3^2 * 2 (Op3: 2 * 9)
	20 = 2^2 * 5 (Op1: 4 * 5 = 20)

Y is already divisible by the numbers marked with "<-" since they are all products of at least two prime factors of X.
Therefore, p's prime factorization does not contain 6, 10, 14 and 15.

Let P be a temporary number that will eventually be p.

- Since 2 in X only has a multiplicity of 1, p would require 2 with a multiplcity of at least 1 as well 
for divisibility by 4. Thus, set P = 2. (Op1)
- Divisiblity by 8 requires 2 with a minimum multiplicity 3. The total multiplcity of 2 in X*P is 2, so set
P = 2^2. (Op2)
- Divisibility by 9 requires 3 with a minimum multiplcity 2. Set P = 2^2 * 3. (Op3)
- Finally, divisiblity by 16 requires 2 with minimal multiplcity 4. So P = 2^3 * 3 (Op4)

It can be concluded that p = 2^3 * 3. Therefore, Y = 2^4 * 3^2 * 5 * 7 * 11 * 13 * 17 * 19.

*/

/*
p = 2
*/

int main() {

}