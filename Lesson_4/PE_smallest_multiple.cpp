#include <iostream>

uint64_t greatest_common_divisor(long a, long b) { //Euclidean  Algorithm: taken from google
    while (b != 0) {
        int old_b = b;
        b = a % b;
        a = old_b;
        //std::cout << "old b: " << old_b << std::endl;
        //std::cout << "a: "     << a     << std::endl;
        //std::cout << "b: "     << b     << std::endl;

    }
    return a;
}

long least_common_multiple(long a, long b) {
    return a * (b / greatest_common_divisor(a, b));
}

long smallest_multiple(long num) {
    long result   = num;
    long next_dig = num - 1;
    for (long next_dig = result - 1; next_dig > 1; --next_dig) {
        result = least_common_multiple(result, next_dig);
    }
    std::cout << result << std::endl;
    return result;
}
int main() {
    smallest_multiple(20);
    return 0;
}
