#include <iostream>
#include <string>
using namespace std;

void largest_prime_factor(uint64_t num) {
    uint64_t cnt = 0;
    uint64_t   i = 0;
    while (num % 2 == 0) {
        cnt = 2;
        num = num / 2;
    }
    for (i = 3; i <= num; i += 1) {
        while (num % i == 0) {
            cnt = max(cnt, i);
            num = num / i;
        }
    }
    cout << cnt << "\n";
}

int main() {
    largest_prime_factor(16);
    largest_prime_factor(225);
    largest_prime_factor(13195);
    largest_prime_factor(600851475143);
    return 0;
}


// Prime if (6n-1)% num == 0
//          OR
// Prime if (6n+1)% num == 0

// Prime if (a^p - a) % p == 0 (a <= 1 < p)
