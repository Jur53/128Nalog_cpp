#include <iostream>

/*
Napišite kodo za algoritem, ki s standardnega vhoda prebere stevilo A, 
algoritem pa izpise vsoto vseh števk.
Primer: Uporabnik vnese 321765 in algoritem izpiše vsoto 24.
*/



int main() {

    int a;
    int vsotaVsehStevk = 0;

    std::cout << "Vnesi poljubno vecmestno stevilo: " << '\n';
    std::cin >> a;

    while (a > 0) {
        vsotaVsehStevk += (a % 10);
        a /= 10;
    }

    std::cout << vsotaVsehStevk;
  
    return 0;
};