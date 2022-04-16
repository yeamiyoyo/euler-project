#include <iostream>

int main(void) {
    int first = 1, second = 1, term = 0, sum = 0;

    while (term <= 4000000) 
    {
        // Second term is 2. We ignore the 1st term
        term = first + second; // 1 + 1 = 2

        // Check if 2 is even
        if (term % 2 == 0)
            sum += term; // Add to sum if even

        first = second; // Initialize the first term with the second term - first = 1
        second = term; // Initialize the second term with the last term. - second = 2

        // New term would be term = 1 + 2 = 3. Then repeat.
    }

    std::cout << sum;
}
