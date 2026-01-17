#include <iostream>

/*
Napišite kodo, ki bo glede na dano spremenljivko N izrisala spodnjo sliko.

N=3
Izpis:
0  0  0
0  0  0
0  0  0

N = 4
Izpis:
0  0  0  0
0  0  0  0
0  0  0  0 
0  0  0  0

N=5
Izpis:
0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
*/


int main() {
    int n;

    std::cout << "Vnesi stevilo: " << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int c = 0; c < n; c++) {
            std::cout << "0  ";
        }
        std::cout << std::endl;
    }
        
    return 0;
};

