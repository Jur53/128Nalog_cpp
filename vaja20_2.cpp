#include <iostream>

/*Napišite podprogram najmanjseStevilo, ki prejme vhodne spremenljivke A, B in C, ki
vsebujejo celoštevilske vrednosti, vendar podprogram vrne najmanjše število med njimi.
Uporaba vnaprej definirane funkcije ni dovoljena.
Primer: Podprogram najmanjseStevilo prejme vrednosti: A = 3, B = 7, C = 5. Algoritem bo pokazal
vrednost 3.
*/

// int swap z temp! & = referneca, ki spremeni vrednoti int tudi v main funkciji! (int &A)

void najmanjseStevilo(int A, int B, int C){
    int temp;
    if(A>B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A>C){
        temp = A;
        A = C;
        C = temp;
    }
    if(B>C){
        temp = B;
        B = C;
        C = temp;
    }
    std::cout << "A = " << A << ", B = " << B << ", C = " << C << '\n';

}

int main(){

    int A, B, C;

    std::cout << "Napis 3 poljubna cela stevila: " << '\n';
    std::cin >> A >> B >> C;
    najmanjseStevilo(A, B, C);

    return 0;
}




