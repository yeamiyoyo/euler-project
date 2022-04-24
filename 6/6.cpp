#include <iostream>
#include <cmath>

int main(void) {
    long int sum1 = 0, sum2 = 0;

    // Calculate first sum
    for(int i = 1; i <= 100; i++) {
        sum1 += pow(i, 2);
    }

    // Calculate second sum
    for(int i = 1; i <= 100; i++) {
        sum2 += i;
    }
    sum2 = pow(sum2, 2); // Square second sum

    std::cout << sum2 - sum1; // Output difference of sum1 and sum2
};