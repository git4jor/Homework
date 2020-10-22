#include <iostream>
#include <string>
using namespace std;

uint64_t largest_prime_factor(uint64_t num) {
    uint64_t cnt = 0;
    uint64_t   i = 0;
    while (num % 2 == 0) {
        cnt = 2;
        num = num / 2;
    }
    for (i = 3; i <= num; i += 1) {
        if (num % i == 0) {
            cnt = i;
            num = num / i;
        }
    }
    return cnt;
}

int main() {
    cout << largest_prime_factor(7) << endl;
    cout << largest_prime_factor(513) << endl;
    cout << largest_prime_factor(13195) << endl;
    cout << largest_prime_factor(600851475143) << endl;
    return 0;
}


// Prime if (6n-1)% num == 0
//          OR
// Prime if (6n+1)% num == 0

// Prime if (a^p - a) % p == 0 (a <= 1 < p)
// Prime if coefficents are multiple of num (x+1)^p - (x^p-1)
