#include <iostream>
#include <vector>

#define CORE_TYPE int

bool multiple_of_n(CORE_TYPE x, CORE_TYPE n) {
	int m = x % n;
	return (m == 0);
}

std::vector<CORE_TYPE> get_list(CORE_TYPE till_n) {
	std::vector<CORE_TYPE> result;
	for (CORE_TYPE i = 0; i < till_n; ++i) {
		if (multiple_of_n(i, 3)) {
			result.push_back(i);
			continue;
		}
		if (multiple_of_n(i, 5)) {
			result.push_back(i);
		}
	}
	return result;
}

CORE_TYPE sum(std::vector<CORE_TYPE> list) {
	CORE_TYPE sum_p = 0;
	for (CORE_TYPE i : list) {
		sum_p += i;
	}
	return sum_p;
}

CORE_TYPE T(CORE_TYPE i) {
	return sum(get_list(i));
}

int main() {
	std::cout << T(1000) << std::endl;
	return 0;
}
