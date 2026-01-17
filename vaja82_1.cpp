#include <iostream>

/*
82. Napišite kodo, ki bo glede na dano spremenljivko N izrisala spodnjo sliko.
N=3
Izpis:
1 0 1
0 1 0
1 0 1

N=4
Izpis:
1 0 1 0
0 1 0 1
1 0 1 0
0 1 0 1

N=5
Izpis:
1 0 1 0 1
0 1 0 1 0 
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
*/


int main() {
    int n;

    std::cout << "Vnesi stevilo: " << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int c = 0; c < n; c++) {
           if ((i + c) % 2 == 0) {
                std::cout << "1  ";
           }
           else{
                std::cout << "0  ";
           } 
        }
        std::cout << std::endl;
    }
        
    return 0;
};

