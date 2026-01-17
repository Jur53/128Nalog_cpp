#include <iostream>

/*
Napišite kodo za algoritem, ki s standardnega vhoda prebere stevilo A, algoritem pa izpise
obrnjeno vrednost števila.
Primer: Uporabnik vnese 321765, algoritem pa izpiše število 567123.
*/


int main() {
    int x;
    std::cout << "Izberi poljubno stevil: " << '\n';
    std::cin >> x;

    while (x > 0) {
        std::cout << (x % 10);
        x /= 10;
    }
    
    
    return 0;
};