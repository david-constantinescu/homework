#include <iostream>

int main() {
    std::cout << "Numarul fara zeci este: ";
    int numar = 845;
    int faraZeci = numar / 100 * 100 + numar % 10;
    std::cout << faraZeci;
    return 0;

}
