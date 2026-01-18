#include <iostream>

/*
Napišite kodo, ki bo glede na dano spremenljivko N izrisala spodnjo sliko.

N=3
Izpis:
1  2  3
1  2  3
1  2  3

N = 4
Izpis:
1  2  3  4
1  2  3  4
1  2  3  4
1  2  3  4
*/





int main() {
    int n;

    std::cout << "Vnesi stevilo: " << std::endl;
    std::cin >> n;

    int counter = 0;

    for (int i = 0; i < n; i++) {
            
        for (int c = 0; c < n; c++) {
            counter ++;
            std::cout << counter << "  ";   
        }
        std::cout << std::endl;
        counter -= n;
    }    
    return 0;
};
