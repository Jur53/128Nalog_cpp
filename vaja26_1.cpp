#include <iostream>

/*
Napišite podprogram izpisiVseStevke, ki prek vhodne spremenljivke A prejme večmestno
naravno število. Podprogram naj razcepi vneseno število na posamezne števke in jih izpiše.
Najprej izpiše enice, nato desetice, stotice, tisočice, deset tisočice itd. Uporabiti morate
ustrezno zanko.
Primer: Podprogram izpisiVseStevke prejme število A = 123456789. Podprogram bo izpisal
vrednosti: 9, 8, 7, 6, 5, 4, 3, 2, 1.
*/

void izpisiVseStevke(int a) {
    while(a > 0){
        std::cout << a % 10 << " ";
        a = (a / 10);

    }

}


int main(){
    int a;

    std::cout << "Vnesi vecmesnto naravno stevilo: " << '\n';
    std::cin >> a;
    izpisiVseStevke(a);

    return 0;
}