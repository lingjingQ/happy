#include <iostream>
#include <thread>

void hello() {
    std::cout << "hello thread" << std::endl;
}

int main() {
    std::thread t(hello);
    t.join();
}

