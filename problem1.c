#include <stdio.h>

#define jcount 7
const size_t base[jcount] = {3, 5, 6, 9, 10, 12, 15};
const size_t final_num = 66;

int main() {
    
    size_t sum = 0;

    for (size_t i = 1; i <= final_num; ++i) {
        for (size_t j = 0; j < jcount; ++j) {
            const size_t cur = base[j] + (i - 1) * 15;
            sum += cur;
        }
    }

    sum += 993 + 995 + 996 + 999;

    printf("%zu\n", sum);

    return 0;
}