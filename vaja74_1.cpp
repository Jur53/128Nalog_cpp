#include <iostream>

/*
Napišite kodo, ki bo glede na dano spremenljivko N izrisala spodnjo sliko.

N=3
Izpis:
1  1  1
0  0  0
1  1  1

N = 4
Izpis:
1  1  1  1
0  0  0  0
0  0  0  0 
1  1  1  1

N=5
Izpis:
1  1  1  1  1
0  0  0  0  0
0  0  0  0  0
0  0  0  0  0
1  1  1  1  1
*/


int main() {
    int n;

    std::cout << "Vnesi stevilo: " << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0) {
                std::cout << "1  ";
            }
            else if (i == (n -1)) {
                std::cout << "1  ";
            }
            else{
                if (j == 0) {
                    std::cout << "1  ";
                }
                else if (j == (n - 1)) {
                    std::cout << "1  ";
                }
                
                
            }
            
            
        }
        std::cout << std::endl;
    }
    
        
    return 0;
};