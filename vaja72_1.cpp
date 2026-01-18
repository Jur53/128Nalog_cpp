#include <iostream>

/*
Napišite kodo, ki bo glede na dano spremenljivko N izrisala spodnjo sliko.

N=3
Izpis:
1  1  1
2  2  2
3  3  3

N = 4
Izpis:
1  1  1  1
2  2  2  2
3  3  3  3
4  4  4  4

*/





int main() {
    int n;

    std::cout << "Vnesi stevilo: " << std::endl;
    std::cin >> n;

    int counter = 0;

    for (int i = 0; i < n; i++) {
            counter ++;
        for (int c = 0; c < n; c++) {
            std::cout << counter << "  ";   
        }
        std::cout << std::endl;
    }    
    return 0;
};
