#include <iostream>
#include <chrono>

int main() {
    constexpr long long N = 100000000;
    long long count = 0;

    auto start = std::chrono::high_resolution_clock::now();

    for (long long i = 0; i < N; ++i) {
        count += i;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "Final count: " << count << "\n";
    std::cout << "Elapsed time: " << duration.count() << " seconds\n";

    return 0;
}
