#include <iostream>

int main() {
    int numar = 578;
    int rasturnat = 0;

    while (numar!= 0) {
        rasturnat = rasturnat * 10 + numar % 10;
        numar = numar / 10;
    }
    std::cout << rasturnat <<std::endl;
    std::cout << "Rasturnatul numarului este printat mai sus: " <<std::endl;

    return 0;
}