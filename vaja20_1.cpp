#include <iostream>
/*Napišite podprogram najmanjseStevilo, ki prejme vhodne spremenljivke A, B in C, ki
vsebujejo celoštevilske vrednosti, vendar podprogram vrne najmanjše število med njimi.
Uporaba vnaprej definirane funkcije ni dovoljena.
Primer: Podprogram najmanjseStevilo prejme vrednosti: A = 3, B = 7, C = 5. Algoritem bo pokazal
vrednost 3.
*/

void najmanjseStevilo(int A, int B, int C)
{
    if (A <= B && A <= C) {
        if(B <= C){
            std::cout << "Stevila od najmanjsega do najvecjega so: " << A << "," << B << "," << C << '\n';
        }
        else{
            std::cout << "Stevila od najmanjsega do najvecjega so: " << A << "," << C << "," << B << '\n';
        }
        
    }

    else if (B <= A  && B <= C) {
        if(A <= C){
            std::cout << "Stevila od najmanjsega do najvecjega so: " << B << "," << A << "," << C << '\n';
        }
        else {
            std::cout << "Stevila od najmanjsega do najvecjega so: " << B << "," << C << "," << A << '\n';
        }
    }
    else {
        if(A <= B){
            std::cout << "Stevila od najmanjsega do najvecjega so: " << C << "," << A << "," << B << '\n';
        }
        else {
            std::cout << "Stevila od najmanjsega do najvecjega so: " << C << "," << B << "," << A << '\n';
        }
        
    }
    
}

int main() {
    int A, B, C;

    std::cout << "Napis 3 poljubna cela stevila: " << '\n';
    std::cin >> A >> B >> C;
    najmanjseStevilo(A, B, C);



    return 0;
}