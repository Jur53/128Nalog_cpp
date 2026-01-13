#include <iostream>

/*
Napisite podprogram izpisiVeckratnike, ki prek vhodne spremenljivke X prejme stevilo,
podprogram pa izpiše njegove večkratnike do desetkratnika vnesenega števila.
Primer: Podprogram izpisiVeckratnike prejme vrednosti: X = 9, podprogram pa bo izpisal
vrednosti: 9, 18, 27, 36, 45, 54, 63, 72, 81, 90.
*/

void izpisiVeckratnike(int x) {
    for (int i = 1; i <= 10; i++)
    {
       std:: cout << (x * i) << '\n';
    }
    
}

int main(){
    int x;
    

    std::cout << "Vnesi stevilo: " << '\n';
    std::cin >> x;

    izpisiVeckratnike(x);
    
    return 0;
}