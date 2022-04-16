#include <iostream>

int main(void) {
    int first = 1, second = 1, term = 0, sum = 0;

    while (term <= 4000000) 
    {
        term = first + second;

        if (term % 2 == 0)
            sum += term;

        first = second;
        second = term;
    }

    std::cout << sum;
}