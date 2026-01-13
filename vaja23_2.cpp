#include <iostream>

/*
Napišite kodo za algoritem, ki prebere dve števili A in B. 
Prvo število A izpiše tolikokrat, kot je vrednost drugega števila B.
Pri zapisu rešitve uporabite zanko WHILE.
Primer: Algoritem prebere vrednosti: A = 3, B = 4,
torej bo algoritem štirikrat izpisal vrednost 3.
*/


int main(){

    int A, B;
    std::cout << "Izberi dve stevili:" << '\n';
    std::cin >> A >> B;
    int counter = 0;
    while (counter < B) {
        std::cout << A << '\n';
        counter++;
    }
    



    return 0;
}