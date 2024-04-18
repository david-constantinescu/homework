#include <iostream>

int main() {

    int raspuns_la_subpunctul_a = ((7 + 2) % 5 + (9 - 3) / 3) /1.5;
    std::cout << raspuns_la_subpunctul_a <<std::endl;
    std::cout << "Raspunsul la subpunctul a) a fost printat mai sus ^" <<std::endl;

    int raspuns_la_subpunctul_b = 27 % 10 + 27 / 10;
    std::cout << raspuns_la_subpunctul_b <<std::endl;
    std::cout << "Raspunsul la subpunctul b) a fost printat mai sus ^" <<std::endl;

    int raspuns_la_subpunctul_c = 6 % 10 + 273 / 10 % 10 + 273 % 100;
    std::cout << raspuns_la_subpunctul_c <<std::endl;
    std::cout << "Raspunsul la subpunctul c) a fost printat mai sus ^" <<std::endl;

    return 0;
}