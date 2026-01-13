#include <iostream>

/*
Napišite kodo za algoritem, ki prebere dve števili A in B. Prvo število A izpiše tolikokrat, kot je
vrednost drugega števila B. Pri zapisu rešitve uporabite zanko FOR.
Primer: Algoritem prebere vrednosti: A = 5, B = 4, torej bo algoritem štirikrat izpisal vrednost 5.
*/

int main(){
    int A, B;
    
    std::cout << "Vnesi dve stevili: " << '\n';
    std::cin >> A >> B;

    for (int i = 0; i < B; i++)
    {
        std::cout << A << '\n';
    }
    
    return 0;
}