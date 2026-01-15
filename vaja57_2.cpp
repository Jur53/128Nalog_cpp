#include <iostream>

/*
Napišite kodo za algoritem, ki s standardnega vhoda prebere stevilo A, 
algoritem pa izpise vsoto vseh števk.
Primer: Uporabnik vnese 321765 in algoritem izpiše vsoto 24.
*/



int vsotaStevk(int a){
    int vsota = 0;

    while (a > 0)
    {
        vsota += (a % 10);
        a /= 10;
    }
    
    return vsota;

};


int main() {

    int a;
    

    std::cout << "Vnesi poljubno vecmestno stevilo: " << '\n';
    std::cin >> a;


    
    std::cout << vsotaStevk(a);
  

    return 0;
};