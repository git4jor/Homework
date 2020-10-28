#include <iostream>

uint64_t greatest_common_divisor(uint64_t a, uint64_t b) { //Euclidean  Algorithm: taken from google
    while (b != 0) {
        uint64_t old_b = b;
        b = a % b;
        a = old_b;
        //std::cout << "old b: " << old_b << std::endl;
        //std::cout << "a: "     << a     << std::endl;
        //std::cout << "b: "     << b     << std::endl;

    }
    return a;
}

uint64_t least_common_multiple(uint64_t a, uint64_t b) {
    return a * (b / greatest_common_divisor(a, b));
}

uint64_t smallest_multiple(uint64_t num) {
    uint64_t result   = num;
    uint64_t next_dig = num - 1;
    for (uint64_t next_dig = result - 1; next_dig > 1; --next_dig) {
        result = least_common_multiple(result, next_dig);
    }
    std::cout << result << std::endl;
    return result;
}
int main() {
    smallest_multiple(20);
    return 0;
}
