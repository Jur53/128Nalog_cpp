#include <iostream>


/*Napišite podprogram vsota4Stevk, ki kot vhodno spremenljivko prejme celoštevilsko
štirimestno vrednost X, podprogram pa razcepi število X na posamezne števke, jih sešteje,
nato pa vrne vsoto števk. Podprogram torej vrne vsoto enic, desetic, stotic in tisočic. Pri
zapisu rešitve ni treba uporabiti zanke.
Primer: Podprogram prejme štirimestno število X = 1234, vrne vsoto števk, ki je v tem primeru 10.
*/


int vsota4Stevk(int X){
    int E = X % 10;
    int D = (X / 10) % 10; 
    int S = (X / 100) % 10;
    int T = X / 1000;

    return (E + D + S + T);
}


int main(){
    int X;

    std::cout << "Napisi 4 mestno stevilko:";
    std::cin >> X;
    std::cout << "Vsota stirih stevk je: " << vsota4Stevk(X);

    

    return 0;
}