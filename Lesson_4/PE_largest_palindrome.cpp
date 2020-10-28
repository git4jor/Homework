#include <iostream>
#include <stdio.h>

int reverse_num(int num) {
    int reverse = 0;
    while(num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}

int palindromic_num(int num) {
    int num_cntA     = pow(10, num);
    int num_cntB     = num_cntA;

    int curr_pal     = 0;
    int curr_pal_rev = 1;

    while (curr_pal != curr_pal_rev) {
        if (num_cntB == pow(10, (num - 1))) {
            num_cntA -= 1;
            num_cntB = pow(10, num) - 1;
        }
        else {
            num_cntB -= 1;
        }
        curr_pal = num_cntB * num_cntA;
        curr_pal_rev = reverse_num(curr_pal);
    }
    printf("The largest palindrome for %d digits is: %d = (%d * %d)",
            num , curr_pal, num_cntB, num_cntA);
    return curr_pal;
}

int main()
{
    palindromic_num(3);
    //reverse_num(12345678);
    return 0;
}

