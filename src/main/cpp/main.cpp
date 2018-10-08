#include <iostream>

int main(int argc, char** argv) {
    std::cout << "Hello World!" << std::endl;

#if defined(_DEBUG)
    std::cout << "This is a debug executable!" << std::endl;
#else
    std::cout << "This is a release executable!" << std::endl;
#endif

    return 0;
}
