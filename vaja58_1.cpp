#include <iostream>

/*
Napišite podprogram aliJeHarshadovoStevilo, ki preveri (vrne True/False), ali je število, ki je
vhodna spremenljivka, Harshadovo število. Harshadovo število je celo število, ki je deljivo z
vsoto svojih števk.
Primeri takih števil so 10, 12, 18, 20, 21 ... 50, 54, 60, 63, 70, 72, 80 ...
*/

bool aliJeHarshadovoStevilo(int x) {
    int y = 0;
    int original = x;

    while (x > 0)
    {
       y += (x % 10);
       x /= 10;
    }
    
    if (original % y == 0){
        return true;
    }
    else {
        return false;
    }
}


int main() {
    int x;

    std::cout << "Vpisi stevilo, za katerega zelis preverit ali gre za Harshadovo stevilo: "<< '\n';
    std::cin >> x;
    if (x <= 0)
    {
        std::cout << "Neveljavno stevilo!" << '\n';
        return 1;
    }
    

    if (aliJeHarshadovoStevilo(x) == true)
    {
        std::cout << "Je Harshadovo stevilo!" << '\n';
    }
    else{
        std::cout << "Ni harshadovo stevilo!" << '\n';
    }  
  
    return 0;
};