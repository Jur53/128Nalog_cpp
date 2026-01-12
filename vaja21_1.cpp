#include <iostream>

/*Napišite podprogram realnoDeljenje, ki kot vhodni spremenljivki prejme celoštevilski
vrednosti A in B. Podprogram vrne rezultat deljenja realnih števil.
Primer: Podprogram prebere števili A = 12 in B = 5, vrne pa število 2,4.
*/

double realnoDeljenje(double A, double B){
    return A / B;
}


int main(){

    int A, B;

    std::cout << "Napisi dve stevili ki jih zelis med seboj delit: " << '\n';
    std::cin >> A >> B;

    if(B == 0){
        std::cout << "Z 0 ne moramo deliti!" << '\n';
    }
    
    else{
        std::cout << "Rezultat je: " << realnoDeljenje(A, B);
    }
    return 0;

}



