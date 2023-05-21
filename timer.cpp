#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int duration;
    std::cout << "Enter the duration in seconds: ";
    std::cin >> duration;

    std::cout << "Countdown started!" << std::endl;

    for (int i = duration; i >= 0; --i) {
        std::cout << "Time remaining: " << i << " seconds" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "Countdown finished!" << std::endl;

    return 0;
}
